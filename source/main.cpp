#include <set>
#include <iostream>
#include <SFML/Graphics/VertexArray.hpp>
#include <SFML/Graphics/Vertex.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include "Entity.hpp"



int main(int argc, char** argv)
{
	sf::Vertex verticies[] =
	{
		sf::Vertex(sf::Vector2f(1,0), sf::Color::Red),
		sf::Vertex(sf::Vector2f(500, 0), sf::Color::Blue),
		sf::Vertex(sf::Vector2f(500, 500), sf::Color::Cyan),
		sf::Vertex(sf::Vector2f(1,500), sf::Color::Green)
	};

	sf::RenderWindow window(sf::VideoMode(800, 600), "Testing Verticies");
	sf::Event event;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(verticies, 4, sf::TrianglesFan);
		window.display();
	}
}