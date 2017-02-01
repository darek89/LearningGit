#include "ring.h"
#include <cmath>


using namespace Shapes;


Ring::Ring(double extDiameter, double intDiameter) : m_extDiameter(extDiameter), m_intDiameter(intDiameter)
{
}


Ring::~Ring()
{
}


const double Ring::getArea() const
{
    return M_PI * (pow(m_extDiameter, 2) - pow(m_intDiameter, 2)) / 4;
}


const double Ring::getInertiaModulus() const
{
    return M_PI * (pow(m_extDiameter, 4) - pow(m_intDiameter, 4)) / 64;
}


const double Ring::getTension(double cam) const
{
    return 1;
}
 
