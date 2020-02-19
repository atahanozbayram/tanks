#include "Menu.hpp"

// Constructors and destructor
	ata::Menu::Menu()
	{

	}

	ata::Menu::~Menu()
	{

	}

	ata::State::StateType ata::Menu::getState() const
	{
		return Menu::StateType::Menu;
	}