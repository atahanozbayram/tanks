#include "State.hpp"

// Constructors and destructor
	ata::State::~State()
	{

	}

// Public interface functions
	void ata::State::stateLoop()
	{
		updateInputs();
		updateSfmlEvents();
		updateState();
		renderEntities();
	}

	void ata::State::updateInputs()
	{

	}

	void ata::State::updateSfmlEvents()
	{
		m_renderWindow->pollEvent(m_event);
	}

	void ata::State::updateState()
	{

	}

	void ata::State::renderEntities()
	{

	}