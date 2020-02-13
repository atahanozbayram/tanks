#ifndef ATA_GAME_HPP
#define ATA_GAME_HPP
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/RenderStates.hpp>
#include "WindowManager.hpp"
#include "EntityManager.hpp"
#include "EventManager.hpp"
#include "StateManager.hpp"
#include "SettingManager.hpp"


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
	void gameLoop(Window* windowPtr, sf::Event* eventPtr, State* statePtr);
	void handleInput();
	void updateGame(Window *windowPtr, sf::Event *eventPtr);
	void renderWindow(Window* windowPtr);
	void updateEvents(Window* windowPtr, sf::Event* eventPtr);

	void initGame();
	Setting* getSettingOrDefault(const std::string& name) const;

	// private members
	WindowManager m_windowManager;
	EntityManager m_entityManager;
	EventManager m_eventManager;
	StateManager m_stateManager;
	SettingManager m_settingManager;
};
} // namespace ata

#endif