#ifndef ATA_EVENT_MANAGER_HPP
#define ATA_EVENT_MANAGER_HPP

#include <vector>
#include "Event.hpp"

namespace ata
{

class EventManager
{
public:
	EventManager();
	~EventManager();

	Event* addEvent(const Event& event = Event());

private:
	std::vector<Event*> m_eventContainer;
};
}

#endif
// Test: Positive