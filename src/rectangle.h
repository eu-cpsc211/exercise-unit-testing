#pragma once

class Rectangle {
  public:
    Rectangle();
    Rectangle(int x, int y, int width, int height);

    int GetWidth() const;
    int GetHeight() const;
    int GetArea() const;
    int GetPerimeter() const;

  private:
    int m_x;
    int m_y;
    int m_width;
    int m_height;
};
