#ifndef ATA_MANAGER_HPP
#define ATA_MANAGER_HPP

#include <vector>
#include <algorithm>
#include "State.hpp"
#include "Menu.hpp"
#include "Game.hpp"

namespace ata
{
class Manager
{
public:
// Constructors and destructor
	Manager();
	~Manager();

	void start();

private:
// private utility functions
	State* getStatePointer(State::StateType state);
// private members
	std::vector<State*> m_stateContainer;
	State::StateType m_currentState;
};
}

#endif