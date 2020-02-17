#include "State.hpp"

// Constructors and destructor
	ata::State::State(const std::string& name, const StateType& state)
	:
	m_name(name),
	m_type(state)
	{

	}

	ata::State::~State()
	{

	}