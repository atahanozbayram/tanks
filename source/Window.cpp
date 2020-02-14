#include "Window.hpp"

// Constructors and Destructor
ata::Window::~Window()
{
}

std::string ata::Window::getWindowName() const
{
	return this->m_windowName;
}