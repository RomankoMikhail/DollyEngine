/*
 * TiledTMX.h
 *
 *  Created on: 27 мая 2018 г.
 *      Author: romanko
 */

#ifndef SRC_PARSERS_TILEDTMX_H_
#define SRC_PARSERS_TILEDTMX_H_

#include <string>
#include <vector>

class TiledTMX
{
	struct Color
	{
		int r, g, b, a;
	};

	struct Tileset
	{
		struct TileOffset
		{
			int x;
			int y;
		};

		struct Grid
		{
			enum
			{
				ORTHOGONAL, ISOMETRIC
			} orientation;

			unsigned width;
			unsigned height;
		};

		struct Image
		{
			std::string format;
			std::string source;
			Color trans;
			unsigned width;
			unsigned height;
		};

		struct TerrainTypes
		{

		};

		struct Terrain
		{
			std::string name;
			unsigned tile;
		};

		struct Tile
		{
			unsigned id;
			unsigned type;
			std::vector<int> terrain;
			float probability;
		};

		struct Animation
		{

		};

		struct Frame
		{
			unsigned tileId;
			unsigned duration;
		};

		struct WangSets
		{

		};

		struct WangSet
		{
			std::string name;
			unsigned tile;
		};

		struct WangCornerColor
		{
			std::string name;
			Color color;
		};

		struct WangEdgeColor
		{
			std::string name;
			Color color;
			unsigned tile;
			float probability;
		};

		struct WangTile
		{
			unsigned tileId;
			unsigned wangId;
		};

		unsigned firstId;
		std::string source;
		std::string name;
		unsigned tileWidth;
		unsigned tileHeight;
		int spacing;
		int margin;
		unsigned tileCount;
		unsigned columns;
	};

	struct Layer
	{
		std::string name;
		int x;
		int y;
		unsigned width;
		unsigned height;
		float opacity;
		bool visible;
		int offsetX;
		int offsetY;
	};

	struct Data
	{


	};

	std::string version;
	std::string tiledVersion;
	enum
	{
		RIGHT_DOWN, RIGHT_UP, LEFT_DOWN, LEFT_UP
	} orientation;

	unsigned width;
	unsigned height;

	unsigned tileWidth;
	unsigned tileHeight;

	unsigned hexSideLength;
	enum
	{
		X_AXIS, Y_AXIS
	} staggerAxis;

	enum
	{
		EVEN, ODD
	} staggerIndex;

	Color backgroundColor;
	unsigned nextObjectId;
};

#endif /* SRC_PARSERS_TILEDTMX_H_ */
