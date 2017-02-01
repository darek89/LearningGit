/*
 * Steel.cpp
 *
 *  Created on: May 23, 2016
 *      Author: darek
 */

#include "material.h"
#include "steel.h"

namespace CivilNS
{

Steel::Steel(const std::string mat): Material(mat, 1.15), m_epsilonMax(-0.010)
{
    if (m_material_class == "A-0") {
        m_fyk = 220;
    } else if (m_material_class == "A-I") {
        m_fyk = 240;
    } else if (m_material_class == "A-II") {
        m_fyk = 355;
    } else if (m_material_class == "A-III") {
        m_fyk = 410;
    } else if (m_material_class == "A-IIIN") {
        m_fyk = 500;
    } else {
        throw ExceptionMaterialParams();
    }

    m_Es = 200;
}

Steel::~Steel()
{
}

const double Steel::getCharacteristicStrength() const
{
    return m_fyk;
}

const double Steel::getCalculationStrength() const
{
    return m_fyk / m_gamma;
}

const double Steel::getYoungModulus() const
{
    return m_Es;
}

const double Steel::getEpsilonMax() const
{
    return m_epsilonMax;
}

} /* namespace CivilNS */
