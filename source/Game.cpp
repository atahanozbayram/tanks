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
		
	}

// Private utility functions
	void ata::Game::gameLoop(Window* windowPtr, sf::Event* eventPtr)
	{
		while (this->m_state == ata::State::Game)
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

	void ata::Game::updateGame(Window* windowPtr, sf::Event* eventPtr)
	{
	}

	void ata::Game::renderWindow(Window* windowPtr)
	{
		windowPtr->clear();
		// Draw the entities
		for (auto& element : *this->m_entityManager.getEntityContainer())
		{
			windowPtr->draw(*element);
		}
		windowPtr->display();
	}

	void ata::Game::updateEvents(Window* windowPtr, sf::Event* event)
	{
		windowPtr->pollEvent(*event);
	}

	void ata::Game::initGame()
	{
		// TODO: Create two classes and come back here.
		// Classes should be Setting and SettingManager
		Window* windowPtr = m_windowManager.addWindow();

	}