#ifndef ATA_STATE_HPP
#define ATA_STATE_HPP

#include <string>
#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>
#include <set>
#include "Entity.hpp"

namespace ata
{
class State
{
public:
	enum struct StateType
	{
		Unknown = -1,
		Menu,
		Game
	};

	virtual StateType getState() const = 0;

public:
	virtual ~State();

// Public interface functions
	virtual void stateLoop();

	virtual void updateInputs() final;
	virtual void updateSfmlEvents() final;
	virtual void updateState();
	virtual void renderEntities();
private:
	sf::Clock m_deltaClock;
	sf::RenderWindow* m_renderWindow;
	sf::Event m_event;
	std::multiset<Entity*> m_entityContainer;
};
} // namespace ata

/*
	Abstract class
*/

#endif