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
		return this->m_settingContainer.emplace_back(new Setting(name, value));
	}