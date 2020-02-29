#ifndef ATA_EVENT_HPP
#define ATA_EVENT_HPP

#include <SFML/Window/Event.hpp>
namespace ata
{

class Event : public sf::Event
{
public:
	using sf::Event::Event;
};

}

#endif