#include "Game.hpp"

// Constructors and Destructors
	ata::Game::Game()
	{

	}

	ata::Game::~Game()
	{

	}

// Public interface functions
	

	ata::State::StateType ata::Game::getState() const
	{
		return State::StateType::Game;
	}
	
// Private utility functions