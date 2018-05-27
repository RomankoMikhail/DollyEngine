/*
 * MIT License
 *
 * Copyright (c) 2018 RomankoMikhail
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "Base64.h"
#include <cstdint>
#include <zlib.h>
#include <iostream>

#define WHITESPACE 64
#define EQUALS     65
#define INVALID    66

static const unsigned char d[] = {
	66,66,66,66,66,66,66,66,66,66,64,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
	66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,62,66,66,66,63,52,53,
	54,55,56,57,58,59,60,61,66,66,66,65,66,66,66, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
	10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,66,66,66,66,66,66,26,27,28,
	29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,66,66,
	66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
	66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
	66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
	66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
	66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,
	66,66,66,66,66,66
};

bool base64decode(std::string input, std::vector<unsigned char> &data) {
	char *in = &input[0];
	char *end = in + input.length();
	char iter = 0;
	uint32_t buf = 0;
	//size_t len = 0;
	while (in < end) {
		unsigned char c = d[*(unsigned char*)in++];

		switch (c) {
		case WHITESPACE: continue;
		case INVALID:    return 1;
		case EQUALS:
			in = end;
			continue;
		default:
			buf = buf << 6 | c;
			iter++;
			if (iter == 4) {
				data.push_back((buf >> 16) & 255);
				data.push_back((buf >> 8) & 255);
				data.push_back(buf & 255);
				buf = 0; iter = 0;
			}
		}
	}
	if (iter == 3) {
		data.push_back((buf >> 10) & 255);
		data.push_back((buf >> 2) & 255);
	}
	else if (iter == 2) {
		data.push_back((buf >> 4) & 255);
	}
	return true;
}

#define BUF_SIZE 4096

bool Base64Decode(const std::basic_string<char>& input, std::vector<unsigned char> &out, bool compressed)
{
	std::vector<unsigned char> inter;
	std::vector<unsigned char> finale;
	base64decode(input, inter);

	unsigned char buf[BUF_SIZE];

	if (compressed == true)
	{
		z_stream in;
		in.zalloc = Z_NULL;
		in.zfree = Z_NULL;
		in.opaque = Z_NULL;
		int result = inflateInit2(&in, 32 + MAX_WBITS);
		if (result != Z_OK)
		{
			std::cerr << "inflateInit2(...) failed:"<< result << std::endl;
			return false;
		}
		in.avail_in = inter.size();
		in.next_in = inter.data();
		do {
			in.avail_out = BUF_SIZE;
			in.next_out = buf;
			result = inflate(&in, Z_NO_FLUSH);
			if (result == Z_NEED_DICT || result == Z_DATA_ERROR || result == Z_MEM_ERROR || result == Z_BUF_ERROR)
			{
				std::cerr << "inflate(...) failed:" << result << std::endl;
				return false;
			}
			for (size_t i = 0; i < BUF_SIZE - in.avail_out; i++)
			{
				finale.push_back(buf[i]);
			}
		} while (result != Z_STREAM_END);

		inflateEnd(&in);
		out = finale;
		return true;
	}
	out = inter;
	return true;
}
