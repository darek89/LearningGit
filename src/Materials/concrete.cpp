/*
 * concrete.cpp
 *
 *  Created on: May 23, 2016
 *      Author: darek
 */

#include "concrete.h"
#include "material.h"

namespace CivilNS
{

Concrete::Concrete(const std::string mat): Material(mat, 1.50), m_epsilonMiddle_max(0.0020), m_epsilonEdge_max(0.0030)
{
    if (m_material_class == "C12/15") {
            m_fck = 12;
            m_Ecm = 27;
            m_fctm = 1.6;
            m_fcm = 20;
            m_epsilonc1 = 1.8;
        } else if (m_material_class == "C16/20") {
            m_fck = 16;
            m_Ecm = 29;
            m_fctm = 1.9;
            m_fcm = 24;
            m_epsilonc1 = 1.9;
        } else if (m_material_class == "C20/25") {
            m_fck = 20;
            m_Ecm = 30;
            m_fctm = 2.2;
            m_fcm = 28;
            m_epsilonc1 = 2.0;
        } else if (m_material_class == "C25/30") {
            m_fck = 25;
            m_Ecm = 31;
            m_fctm = 2.6;
            m_fcm = 33;
            m_epsilonc1 = 2.1;
        } else if (m_material_class == "C30/37") {
            m_fck = 30;
            m_Ecm = 32;
            m_fctm = 2.9;
            m_fcm = 38;
            m_epsilonc1 = 2.2;
        } else if (m_material_class == "C35/45") {
            m_fck = 35;
            m_Ecm = 34;
            m_fctm = 3.2;
            m_fcm = 43;
            m_epsilonc1 = 2.25;
        } else if (m_material_class == "C40/50") {
            m_fck = 40;
            m_Ecm = 35;
            m_fctm = 3.5;
            m_fcm = 48;
            m_epsilonc1 = 2.3;
        } else if (m_material_class == "C45/55") {
            m_fck = 45;
            m_Ecm = 36;
            m_fctm = 3.8;
            m_fcm = 53;
            m_epsilonc1 = 2.4;
        } else if (m_material_class == "C50/60") {
            m_fck = 50;
            m_Ecm = 37;
            m_fctm = 4.1;
            m_fcm = 58;
            m_epsilonc1 = 2.45;
        } else {
            throw ExceptionMaterialParams();
        }
}

Concrete::~Concrete()
{
}

const double Concrete::getCharacteristicStrength() const
{
    return m_fck;
}

const double Concrete::getCalculationStrength() const
{
    return m_fck / m_gamma;
}

const double Concrete::getYoungModulus() const
{
    return m_Ecm;
}

const double Concrete::getAverageTensileStrength() const
{
    return m_fctm;
}

const double Concrete::getAverageCompressiveStrength() const
{
    return m_fcm;
}

const double Concrete::getEpsilonC1() const
{
    return m_epsilonc1;
}

const double Concrete::getEpsilonEdgeMax() const
{
    return m_epsilonEdge_max;
}

const double Concrete::getEpsilonMiddleMax() const
{
    return m_epsilonMiddle_max;
}

} /* namespace CivilNS */
