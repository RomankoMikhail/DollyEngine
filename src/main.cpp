#include <Containers/Assets.hpp>
#include <Containers/Config.hpp>
#include <Containers/Tilemap.hpp>
#include <Adapters/IniAdapter.hpp>
#include <Parsers/Ini.hpp>

#include <SFML/Graphics.hpp>
#include "HanoiModel.h"
//#include "Map/Tiled.h"
#include <iostream>
#include <fstream>

using namespace std;
using namespace Dolly::Containers;
using namespace Dolly::Parsers;

Assets<std::string, sf::Texture> Textures;


int main()
{
	Ini ini;
	Config cfg;
	ini.load("config.ini");
	Dolly::Adapters::IniAdapter().toConfig(ini, "Video", cfg);

	cout << cfg.getInt("Width") << endl;
	cout << cfg.getInt("Height") << endl;
	Tilemap myMap;

	cfg.setString("Boor", "Link");
	Dolly::Adapters::IniAdapter().toIni(cfg, ini, "Video");
	ini.save("save.ini");
	myMap.setTileSize(16, 16);

	Textures.loadFromFile("tiles", "tiles.png");
	myMap.setTexture(&Textures.get("tiles"));

	myMap.resize(2, 2);
	myMap.set(0, 0, 1);
	myMap.set(1, 0, 1);
	myMap.set(0, 1, 1);
	myMap.set(1, 1, 13);
	myMap.setPosition(10, 10);
	myMap.setScale(2, 2);

    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);
        window.draw(myMap);
        // draw everything here...
        // window.draw(...);

        // end the current frame
        window.display();
    }

    return 0;
}
