#include "Game.hpp"

// Constructors and Destructors
	ata::Game::Game()
	{

	}

	ata::Game::~Game()
	{

	}

// Public interface functions
	void ata::Game::run()
	{
		std::function<void()> func = initGame();
		func();
	}
	
// Private utility functions
	void ata::Game::gameLoop(Window* windowPtr, Event* eventPtr, State* statePtr)
	{
		while (statePtr->m_state == ata::State::Game)
		{
			this->handleInput();
			this->updateEvents(windowPtr, eventPtr);
			this->updateGame(windowPtr, eventPtr);
			this->renderWindow(windowPtr);
		}
	}

	void ata::Game::handleInput()
	{

	}

	void ata::Game::updateGame(Window* windowPtr, Event* eventPtr)
	{
	}

	void ata::Game::renderWindow(Window* windowPtr)
	{
		windowPtr->clear();
		// Draw the entities
		for (auto& element : this->m_entityManager.getEntityContainer())
		{
			windowPtr->draw(*element);
		}
		windowPtr->display();
	}

	void ata::Game::updateEvents(Window* windowPtr, Event* event)
	{
		windowPtr->pollEvent(*event);
	}

	ata::Window* ata::Game::initWindow()
	{
		return m_windowManager.addWindow("main", sf::VideoMode(800,600), "Tanks");

	}

	ata::Event* ata::Game::initEvent()
	{
		return m_eventManager.addEvent();
	}

	ata::State* ata::Game::initState()
	{
		return m_stateManager.addState("main", State::StateType::Menu);
	}

	
	std::function<void()> ata::Game::initGame()
	{
		
		Window* windowPtr = initWindow();
		Event* eventPtr = initEvent();
		State* statePtr = initState();

		std::function<void()> function = std::bind(&ata::Game::gameLoop, *this, windowPtr, eventPtr, statePtr);
		return function;
	}

	
