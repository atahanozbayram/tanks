#include <iostream>
#include <SFML/Graphics/CircleShape.hpp>
#include "StateManager.hpp"
#include "EventManager.hpp"
#include "EntityManager.hpp"
#include "SettingManager.hpp"
#include "WindowManager.hpp"
int main(int argc, char** argv)
{
	ata::SettingManager settingManager;
	ata::Setting* settingPtr = settingManager.addSetting("width", "1920");

	std::cout << "settingPtr's name: " << settingPtr->m_name
	<< " settingPtr's value: " << settingPtr->m_value << '\n';

	ata::Setting* returnedPtr = settingManager.getSettingByName("width");
	std::cout << "returnedPtr's name: " << returnedPtr->m_name
	<< " returnedPtr's value: " << returnedPtr->m_value << '\n';
}