#include "StateManager.hpp"

// Constructors and destructor	
	ata::StateManager::StateManager()
	{

	}

	ata::StateManager::~StateManager()
	{

	}

// Public interface functions
	ata::State* ata::StateManager::addState(const ata::State& state)
	{
		return this->m_stateContainer.emplace_back(new State(state));
	}