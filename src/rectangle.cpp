/*
This code may have bugs and not-implemented code. Write unit tests and fix the bugs.
*/

#include "rectangle.h"

#include <stdexcept>

using namespace std;

Rectangle::Rectangle()
{
    m_x = 0;
    m_y = 0;
    m_width = 0;
    m_height = 0;
}

Rectangle::Rectangle(int x, int y, int width, int height)
{
    m_x = 0;
    m_y = 0;
    m_width = height;
    m_height = width;
}

int Rectangle::GetArea() const
{
    throw exception("Not implemented.");
}

int Rectangle::GetHeight() const
{
    return m_height;
}

int Rectangle::GetWidth() const
{
    return m_width;
}

int Rectangle::GetPerimeter() const
{
    return 2 * (m_height + m_width);
}
