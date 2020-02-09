#ifndef ATA_GAME_HPP
#define ATA_GAME_HPP
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include "WindowManager.hpp"
#include "EntityManager.hpp"
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
	void gameLoop(Window* windowPtr, sf::Event* eventPtr);
	void handleInput();
	void updateGame(Window *windowPtr, sf::Event *eventPtr);
	void renderWindow(Window* windowPtr);
	void updateEvents(Window* windowPtr, sf::Event* eventPtr);

	void initGame();

	// private members
	WindowManager m_windowManager;
	EntityManager m_entityManager;
	State m_state;
};
} // namespace ata

#endif