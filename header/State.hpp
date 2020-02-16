#ifndef ATA_STATE_HPP
#define ATA_STATE_HPP

namespace ata
{
class State
{
public:
	enum StateType
	{
		Halt = 0,
		Game,
		Quit
	};

	StateType m_state;


};
} // namespace ata

#endif