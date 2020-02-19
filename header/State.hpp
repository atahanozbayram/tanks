#ifndef ATA_STATE_HPP
#define ATA_STATE_HPP

#include <string>

namespace ata
{
class State
{
public:
	enum struct StateType
	{
		Unknown = -1,
		Menu,
		Game
	};
public:
	virtual StateType getState() const = 0;

private:
};
} // namespace ata

#endif