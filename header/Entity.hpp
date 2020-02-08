#ifndef ATA_ENTITY_HPP
#define ATA_ENTITY_HPP

#include <SFML/Graphics/Shape.hpp>

namespace ata
{
class Entity : public sf::Shape
{
public:
	virtual ~Entity();
};
}


#endif