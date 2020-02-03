#ifndef ATA_GAME_HPP
#define ATA_GAME_HPP
#include <SFML/Graphics/RenderWindow.hpp>
#include "WindowManager.hpp"

namespace ata
{
class Game
{
public:
	Game();
	~Game();
private:
	WindowManager m_windowManager;
};
} // namespace ata

#endif