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
	
	ata::Setting* ata::SettingManager::getSettingByName(const std::string& name) const
	{
		decltype(m_settingContainer)::const_iterator iterator = std::find_if(
			m_settingContainer.begin(),
			m_settingContainer.end(),
			[&](Setting* element)->bool
			{
				return element->m_name == name;
			}
		);
		// create pointer to return it
		Setting* indexPtr = *iterator;

		// check whether iterator is end iterator
		if (iterator == m_settingContainer.end())
			indexPtr = nullptr;
		
		return indexPtr;
	}

	int test = []()->int
	{
		defaultSettings.addSetting("width", "1920");
		defaultSettings.addSetting("height", "1080");
		return 0;
	}();