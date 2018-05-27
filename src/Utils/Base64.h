#pragma once
#ifndef BASE64_H_
#define BASE64_H_

#include <vector>
#include <string>

bool Base64Decode(const std::basic_string<char>& input, std::vector<unsigned char> &out, bool compressed = false);
#endif