#ifndef ATA_ENTITY_MANAGER_HPP
#define ATA_ENTITY_MANAGER_HPP

#include <vector>
#include "Entity.hpp"

namespace ata
{

class EntityManager
{
public:
// Constructors and destructor
	EntityManager();
	~EntityManager();

// Interface functions

	// Returns pointer to the m_entityContainer
	typename std::vector<Entity*>* getEntityContainer();

private:
	std::vector<Entity*> m_entityContainer;
};
}

#endif