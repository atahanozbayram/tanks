#ifndef ATA_GAME_HPP
#define ATA_GAME_HPP
#include <functional>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include "EntityManager.hpp"
#include "SettingManager.hpp"
#include "Window.hpp"
#include "Event.hpp"
#include "State.hpp"


namespace ata
{
class Game
{
public:
	Game();
	~Game();
// Public interface functions
	void run();

private:
// Private utility functions
};


} // namespace ata

#endif