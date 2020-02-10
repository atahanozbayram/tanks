#ifndef ATA_SETTING_HPP
#define ATA_SETTING_HPP

#include <string>

namespace ata
{
struct Setting
{
// Constructors and destructors
	Setting(const std::string& name, const std::string& value);
	~Setting();

	std::string m_name;
	std::string m_value;
};
} // namespace ata

#endif