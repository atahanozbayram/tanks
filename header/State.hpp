#ifndef ATA_STATE_HPP
#define ATA_STATE_HPP

#include <string>

namespace ata
{
class State
{
public:
	enum StateType
	{
		Halt = 0,
		Menu,
		Game,
		Quit
	};

	State(const std::string& name, const StateType& type);
	~State();

	std::string m_name;
	StateType m_state;


};
} // namespace ata

#endif