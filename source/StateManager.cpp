#include "StateManager.hpp"

// Constructors and destructor	
	ata::StateManager::StateManager()
	{

	}

	ata::StateManager::~StateManager()
	{

	}

// Public interface functions
	ata::State* ata::StateManager::getStateByName(const std::string& name)
	{
		decltype(m_stateContainer)::iterator iterator = std::find_if(
			m_stateContainer.begin(),
			m_stateContainer.end(),
			[&](State*(&elementPtr))->bool
			{
				return elementPtr->m_name == name;
			}
		);

		// check whether the iterator is end iterator, if so
		// return nullptr.
		if (iterator == m_stateContainer.end())
			return nullptr;
		
		// if program reaches here, dereference iterator and return
		// it
		return *iterator;
	}

	ata::State* ata::StateManager::addState(const std::string& name, const State::StateType& type)
	{
		// first check whether the state already exists inside the container
		State* indexPtr = getStateByName(name);

		// check if it's not nullptr, if so return it
		if (indexPtr != nullptr)
			return indexPtr;
		
		// if program reaches here, that means we have to add it to container
		return m_stateContainer.emplace_back(new State(name, type));
	}