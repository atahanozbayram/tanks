#include "EventManager.hpp"

// Constructors and destructor
	ata::EventManager::EventManager()
	{

	}

	ata::EventManager::~EventManager()
	{

	}

	sf::Event* ata::EventManager::addEvent(const sf::Event& event)
	{
		return this->m_eventContainer.emplace_back(new sf::Event(event));
	}
