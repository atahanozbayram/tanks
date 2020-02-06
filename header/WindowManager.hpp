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

	// addWindow function takes unlimited amount off arguments.
	// It will emplace Window item end of the m_windowContainer.
	template <class... Args>
	Window* addWindow(Args&&... args);

private:
	std::vector<Window*> m_windowContainer;
};

// Some function definitions must be in the header file
	template <class... Args>
	Window* WindowManager::addWindow(Args&&... args)
	{
		return this->m_windowContainer.emplace_back(new Window(std::forward<Args>(args)...));
	}
} // namespace ata

#endif