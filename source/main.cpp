#include <iostream>
#include <SFML/Window/Event.hpp>
#include "WindowManager.hpp"

int main(int argc, char** argv)
{
	ata::WindowManager windowManager;
	ata::Window* windowPtr = windowManager.addWindow("main", sf::VideoMode(800,600), "Ancestor");
	
	if (windowPtr != nullptr)
	{
		std::cout << "window(" << windowPtr->getWindowName() << ") is initialized\n";
		sf::Event event;
		while (windowPtr->isOpen())
		{
			while (windowPtr->pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					windowPtr->close();
				}

				windowPtr->clear();
				windowPtr->display();
			}
		}
	}
}