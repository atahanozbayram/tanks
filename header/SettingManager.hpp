#ifndef ATA_SETTING_MANAGER_HPP
#define ATA_SETTING_MANAGER_HPP

#include <vector>
#include <string>
#include "Setting.hpp"

namespace ata
{
class SettingManager
{
public:
	SettingManager();
	~SettingManager();

	Setting* addSetting(const std::string& name, const std::string& value);

private:
	std::vector<Setting*> m_settingContainer;
};
} // namespace ata

#endif
// Test: Positive