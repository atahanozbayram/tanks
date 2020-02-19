#ifndef ATA_MANAGER_HPP
#define ATA_MANAGER_HPP

#include <vector>
#include "State.hpp"

namespace ata
{
class Manager
{
public:
// Constructors and destructor
	Manager();
	~Manager();


private:
	std::vector<State*> m_stateContainer;
};
}

#endif