#ifndef ATA_STATE_MANAGER_HPP
#define ATA_STATE_MANAGER_HPP

#include <vector>
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
	State *addState(const ata::State& state = State());

private:
	std::vector<State*> m_stateContainer;
};
} // namespace ata

#endif
// Tested: Positive