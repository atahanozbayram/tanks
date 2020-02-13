#include "EntityManager.hpp"

// Constructors and destructor
	ata::EntityManager::EntityManager()
	{

	}

	ata::EntityManager::~EntityManager()
	{

	}

	typename std::vector<ata::Entity*>& ata::EntityManager::getEntityContainer()
	{
		return this->m_entityContainer;
	}