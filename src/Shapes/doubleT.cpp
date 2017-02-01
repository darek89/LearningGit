#include "doubleT.h"
#include <cmath>


using namespace Shapes;


DoubleT::DoubleT(double shelfWidth, double shelfHeight, double webWidth, double webHeight)
    : m_shelfWidth(shelfWidth), m_shelfHeight(shelfHeight), m_webWidth(webWidth), m_webHeight(webHeight)
{
}


DoubleT::~DoubleT()
{
}


const double DoubleT::getArea() const
{
    return m_shelfWidth * (2 * m_shelfHeight + m_webHeight) - (m_shelfWidth - m_webWidth) * m_webHeight;
}


const double DoubleT::getInertiaModulus() const
{
    return (m_shelfWidth * pow(m_webHeight + 2 * m_shelfHeight, 3)) / 12 -
            (m_shelfWidth - m_webWidth) * pow(m_webHeight, 3) / 12;
}


const double DoubleT::getTension(double cam) const
{
    return 1;
}
