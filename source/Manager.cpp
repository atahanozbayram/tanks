#include "Manager.hpp"

// Constructors and destructor
	ata::Manager::Manager()
	{
		m_stateContainer.emplace_back(new Menu());
		m_stateContainer.emplace_back(new Game());
	}

	ata::Manager::~Manager()
	{

	}

	void ata::Manager::start()
	{
		
	}

	ata::State* ata::Manager::getStatePointer(State::StateType state)
	{
		decltype(m_stateContainer)::iterator iterator = std::find_if(
			m_stateContainer.begin(),
			m_stateContainer.end(),
			[&](State*(&element))->bool
			{
				return element->getState() == state;
			}
		);

		if (iterator == m_stateContainer.end())
			return nullptr;
		
		return *iterator;
	}