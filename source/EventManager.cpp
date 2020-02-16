#include "EventManager.hpp"

// Constructors and destructor
	ata::EventManager::EventManager()
	{

	}

	ata::EventManager::~EventManager()
	{

	}

	ata::Event* ata::EventManager::addEvent(const Event& event)
	{
		return this->m_eventContainer.emplace_back(new Event(event));
	}
