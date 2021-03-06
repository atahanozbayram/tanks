#ifndef ATA_WINDOW_HPP
#define ATA_WINDOW_HPP
#include <string>
#include <SFML/Graphics/RenderWindow.hpp>

namespace ata
{
class Window : public sf::RenderWindow
{
public:
    // Inherit all the constructors from the base class
    using sf::RenderWindow::RenderWindow;

    // use virtual destructor
    virtual ~Window();
    std::string m_windowName;
};
} // namespace ata

#endif