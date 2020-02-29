#ifndef ATA_ENTITY_HPP
#define ATA_ENTITY_HPP

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>

namespace ata
{
class Entity : public sf::Drawable, public sf::Transformable
{
public:
	bool operator<(Entity* right)
	{
		return this->m_layer < right->m_layer;
	}

public:
	Entity(int layer)
	:
	m_layer(layer)
	{
		
	}
	virtual ~Entity();

private:
	int m_layer;
};
}


#endif