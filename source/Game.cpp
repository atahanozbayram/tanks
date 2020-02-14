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
		initGame();
	}

// Private utility functions
	void ata::Game::gameLoop(Window* windowPtr, sf::Event* eventPtr, State* statePtr)
	{
		while (*statePtr == ata::State::Game)
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
		for (auto& element : this->m_entityManager.getEntityContainer())
		{
			windowPtr->draw(*element);
		}
		windowPtr->display();
	}

	void ata::Game::updateEvents(Window* windowPtr, sf::Event* event)
	{
		windowPtr->pollEvent(*event);
	}

	ata::Window* ata::Game::initWindow()
	{
		// get the width, and height of the window
		Setting* settingPtr = getSettingOrDefault("width");
		int windowWidth = std::stoi(settingPtr->m_value);

		settingPtr = getSettingOrDefault("height");
		int windowHeight = std::stoi(settingPtr->m_value);

		settingPtr = getSettingOrDefault("title");
		std::string windowTitle = settingPtr->m_value;

		return m_windowManager.addWindow("main", sf::VideoMode(windowWidth, windowHeight), windowTitle);
	}

	void ata::Game::initGame()
	{
		Window* windowPtr = initWindow();

	}

	ata::Setting* ata::Game::getSettingOrDefault(const std::string& name) const
	{
		Setting* settingPtr = m_settingManager.getSettingByName(name);
		if (settingPtr == nullptr)
		{
			settingPtr = ata::defaultSettings.getSettingByName(name);
			if (settingPtr == nullptr)
			{
				throw std::runtime_error("can't find setting\n");
			}
		}
		return settingPtr;
	}
