#ifndef ATA_EVENT_MANAGER_HPP
#define ATA_EVENT_MANAGER_HPP

#include <vector>
#include <SFML/Window/Event.hpp>


namespace ata
{

class EventManager
{
public:
	EventManager();
	~EventManager();

	sf::Event* addEvent(const sf::Event& event = sf::Event());

private:
	std::vector<sf::Event*> m_eventContainer;
};
}

#endif
// Test: Positive