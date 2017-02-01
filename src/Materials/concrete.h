/*
 * concrete.h
 *
 *  Created on: May 23, 2016
 *      Author: darek
 */

#ifndef SRC_MATERIALS_CONCRETE_H_
#define SRC_MATERIALS_CONCRETE_H_

#include "material.h"

namespace CivilNS
{

class Concrete: public Material
{
public:
    Concrete(const std::string mat);
    virtual ~Concrete();

    virtual const double getCharacteristicStrength() const;
    virtual const double getCalculationStrength() const;
    virtual const double getYoungModulus() const;

    const double getAverageTensileStrength() const;
    const double getAverageCompressiveStrength() const;
    const double getEpsilonC1() const;

    const double getEpsilonMiddleMax() const;
    const double getEpsilonEdgeMax() const;

private:
    double m_fck,
           m_Ecm,
           m_fctm,
           m_fcm,
           m_epsilonc1;
private:
    const double m_epsilonMiddle_max;
    const double m_epsilonEdge_max;

};

} /* namespace CivilNS */

#endif /* SRC_MATERIALS_CONCRETE_H_ */
