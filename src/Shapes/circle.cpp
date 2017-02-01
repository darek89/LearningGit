#include "circle.h"
#include <cmath>


using namespace Shapes;


Circle::Circle(double diameter) : m_diameter(diameter)
{
}


Circle::~Circle()
{
}


const double Circle::getArea() const
{
    return M_PI * pow(m_diameter, 2) / 4;
}


const double Circle::getInertiaModulus() const
{
    return M_PI * pow(m_diameter, 4) / 64;
}


const double Circle::getTension(double cam) const // TODO: CHange name -> getCountedForce ???
{
    return 1;
}
