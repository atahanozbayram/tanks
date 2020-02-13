#ifndef ATA_SETTING_MANAGER_HPP
#define ATA_SETTING_MANAGER_HPP

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include "Setting.hpp"

namespace ata
{
class SettingManager
{
public:


	SettingManager();
	~SettingManager();

	Setting* addSetting(const std::string& name, const std::string& value);
	Setting* getSettingByName(const std::string& name) const;
//private:
	std::vector<Setting*> m_settingContainer;
};
} // namespace ata

static ata::SettingManager defaultSettings;


#endif
// Test: Positive