#include <iostream>
#include <SFML/Graphics/CircleShape.hpp>
#include "StateManager.hpp"
#include "EventManager.hpp"
#include "EntityManager.hpp"
#include "SettingManager.hpp"
#include "WindowManager.hpp"
int main(int argc, char** argv)
{
	ata::EventManager eventManager;
	sf::Event *eventPtr1 = eventManager.addEvent();

	sf::RenderWindow window(sf::VideoMode(800, 600), "title");

	sf::CircleShape circle(300);
	circle.setFillColor(sf::Color::Magenta);

	while (window.isOpen())
	{
		while (window.pollEvent(*eventPtr1))
		{
			if (eventPtr1->type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(circle);
		window.display();
	}
}