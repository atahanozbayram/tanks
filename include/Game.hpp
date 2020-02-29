#ifndef ATA_GAME_HPP
#define ATA_GAME_HPP

#include "State.hpp"

namespace ata
{
class Game : public ata::State
{
public:
	Game();
	~Game();
// Public interface functions

	StateType getState() const;
private:
// Private utility functions
	
};


} // namespace ata

#endif