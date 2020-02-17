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
		std::function<void()> gameFunction = initGame();
		State* statePtr = m_state;
		switch (statePtr->m_type)
		{
			case State::StateType::Game :
				gameFunction();
				break;
		}
	}
	
// Private utility functions
	void ata::Game::menuLoop(Window* windowPtr, Event* eventPtr)
	{
		this->handleInput();
		this->updateSfmlEvents(windowPtr, eventPtr);
	}

	void ata::Game::gameLoop(Window* windowPtr, Event* eventPtr)
	{
		this->handleInput();
		this->updateSfmlEvents(windowPtr, eventPtr);
		this->updateGame(windowPtr, eventPtr);
		this->renderWindow(windowPtr);
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

	void ata::Game::updateSfmlEvents(Window* windowPtr, Event* event)
	{
		windowPtr->pollEvent(*event);
	}

	ata::Window* ata::Game::initWindow()
	{
		return m_window = new Window("main", sf::VideoMode(800, 600), "Tanks");
	}

	ata::Event* ata::Game::initEvent()
	{
		return m_event = new Event();
	}

	ata::State* ata::Game::initState()
	{
		return m_state = new State("main", State::StateType::Menu);
	}

	
	std::function<void()> ata::Game::initGame()
	{
		
		Window* windowPtr = initWindow();
		Event* eventPtr = initEvent();

		std::function<void()> function = std::bind(&ata::Game::gameLoop, *this, windowPtr, eventPtr);
		return function;
	}

	
