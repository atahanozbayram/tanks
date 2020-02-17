#ifndef ATA_STATE_MANAGER_HPP
#define ATA_STATE_MANAGER_HPP

#include <vector>
#include <algorithm>
#include "State.hpp"

namespace ata
{
class StateManager
{
public:
// Constructors and destructor
	StateManager();
	~StateManager();

// Public interface functions
	State* getStateByName(const std::string& name);
	State* addState(const std::string& name, const State::StateType& type);
private:
	std::vector<State*> m_stateContainer;
};
} // namespace ata

#endif
// Tested: Positive