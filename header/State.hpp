#ifndef ATA_STATE_HPP
#define ATA_STATE_HPP

#include <string>
#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

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
	virtual void updateInputs() final;
	virtual void updateSfmlEvents() final;
	virtual void updateState();
	virtual void RenderEntities(sf::RenderTarget& renderTarget);
private:
	sf::Clock m_deltaClock;
};
} // namespace ata

/*
	Abstract class
*/

#endif