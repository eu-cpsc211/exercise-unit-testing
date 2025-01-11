#include "rectangle.h"

#include <iostream>

using namespace std;

int main()
{
    Rectangle r1;
    Rectangle r2(0, 0, 10, 10);
    Rectangle r3(1, 1, 5, 5);

    cout << "R1" << endl;
    cout << "Perimeter: " << r2.GetPerimeter() << endl;
    cout << "Width: " << r2.GetWidth() << endl;
    cout << "Height: " << r2.GetHeight() << endl;

    return 0;
}
