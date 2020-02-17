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
	void menuLoop(Window* windowPtr, Event* eventPtr);
	void gameLoop(Window* windowPtr, Event* eventPtr);
	void handleInput();
	void updateGame(Window *windowPtr, Event *eventPtr);
	void renderWindow(Window* windowPtr);
	void updateSfmlEvents(Window* windowPtr, Event* eventPtr);

	Window* initWindow();
	Event* initEvent();
	State* initState();

	
	std::function<void()> initGame();
	

	// private members
	Window* m_window;
	Event* m_event;
	State* m_state;
	SettingManager m_settingManager;
	EntityManager m_entityManager;
};


} // namespace ata

#endif