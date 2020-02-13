#include <iostream>
#include <SFML/Graphics/CircleShape.hpp>
#include "StateManager.hpp"
#include "EventManager.hpp"
#include "EntityManager.hpp"
#include "SettingManager.hpp"
#include "WindowManager.hpp"

class Test
{
public:
	Test()
	{
		std::cout << "Test object is created\n";
	}

	~Test()
	{
		std::cout << "Test object is destructored\n";
	}
};

int main(int argc, char** argv)
{

}