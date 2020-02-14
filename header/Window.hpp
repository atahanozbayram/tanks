#ifndef ATA_WINDOW_HPP
#define ATA_WINDOW_HPP
#include <string>
#include <SFML/Graphics/RenderWindow.hpp>

namespace ata
{
// Purpose of this class is wrapping RenderWindow class
// for adding additional features in future.
class Window : public sf::RenderWindow
{
public:
    // Inherit all the constructors from the base class
	template <class...Args>
	Window(const std::string& windowName, Args&&... args);
    // use virtual destructor
    virtual ~Window();

	std::string getWindowName() const;
private:
    std::string m_windowName;
};
} // namespace ata

template <class...Args>
ata::Window::Window(const std::string& windowName, Args&&... args)
:
m_windowName(windowName),
sf::RenderWindow(std::forward<Args>(args)...)
{

}
#endif