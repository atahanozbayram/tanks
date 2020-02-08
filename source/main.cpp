#include <iostream>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Shape.hpp>
#include <SFML/Window/Event.hpp>

class Entity : public sf::Drawable, public sf::Transformable
{
public:
};

int main(int argc, char** argv)
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Atahan");
	sf::Event event;

	sf::CircleShape circle(300);
	circle.setFillColor(sf::Color::Red);

	sf::Shape *entity = &circle;

	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(*entity);
		window.display();
	}
}