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
	void ata::Game::updateGame(Window* windowPtr, sf::Event* eventPtr)
	{
		this->updateEvents(windowPtr, eventPtr);
		this->renderWindow(windowPtr);
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
	}