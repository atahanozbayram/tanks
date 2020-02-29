#ifndef ATA_MENU_HPP
#define ATA_MENU_HPP

#include "State.hpp"

namespace ata
{
class Menu : public ata::State
{
public:
// Constructors and destructor
	Menu();
	~Menu();

// Public interface functions
	StateType getState() const;


private:
// members
};
}

#endif