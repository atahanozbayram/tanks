#ifndef ATA_WINDOW_MANAGER_HPP
#define ATA_WINDOW_MANAGER_HPP
#include <vector>
#include "Window.hpp"

namespace ata
{
class WindowManager
{
public:
// Constructors and destructor
	WindowManager();
	~WindowManager();

// Public interface functions
	Window &addWindow();

private:
	std::vector<Window*> m_windowContainer;
};
} // namespace ata

#endif