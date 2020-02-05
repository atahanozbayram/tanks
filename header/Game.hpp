#ifndef ATA_GAME_HPP
#define ATA_GAME_HPP
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include "WindowManager.hpp"

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
	void initializeGame();

	// private members
	WindowManager m_windowManager;

};
} // namespace ata

#endif