#include "SettingManager.hpp"

// Constructors and destructor
	ata::SettingManager::SettingManager()
	{

	}

	ata::SettingManager::~SettingManager()
	{

	}

// Public utility functions
	ata::Setting* ata::SettingManager::addSetting(const std::string& name, const std::string& value)
	{
		Setting* settingPtr = new Setting(name, value);

		m_settingContainer.push_back(settingPtr);
		return settingPtr;
	}
	

	ata::Setting* ata::SettingManager::getSettingByName(const std::string& name)
	{
		decltype(m_settingContainer)::iterator iterator = std::find_if(
			m_settingContainer.begin(),
			m_settingContainer.end(),
			[&](Setting*(&element))->bool
			{
				return element->m_name == name;
			}
		);

		// check whether the iterator is end iterator.
		if (iterator == m_settingContainer.end())
			return nullptr;
		
		// if program reaches here, that means we have the pointer.
		// dereference the iterator and return it.
		return *iterator;
	}