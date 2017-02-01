#include "rectangle.h"
#include <cmath>


using namespace Shapes;


Rectangle::Rectangle(double width, double height) : m_width(width), m_height(height)
{
}


Rectangle::~Rectangle()
{
}


const double Rectangle::getArea() const
{
    return m_width * m_height;
}


// Move algorithm of counting InertiaModulus outside the class
const double Rectangle::getInertiaModulus() const
{
    return m_width * pow(m_height, 3) / 12;
}


const double Rectangle::getTension(double cam) const
{
    return 1; //TODO: Move counting tension functions to the separate class hierarchy
}
