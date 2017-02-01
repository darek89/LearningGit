/*
 * Steel.h
 *
 *  Created on: May 23, 2016
 *      Author: darek
 */

#ifndef SRC_MATERIALS_STEEL_H_
#define SRC_MATERIALS_STEEL_H_

#include "material.h"

namespace CivilNS
{

class Steel: public Material
{
public:
    Steel(const std::string mat);
    virtual ~Steel();

    virtual const double getCharacteristicStrength() const;
    virtual const double getCalculationStrength() const;
    virtual const double getYoungModulus() const;

    const double getEpsilonMax() const;

private:
    double m_fyk,
           m_Es;

private:
    const double m_epsilonMax;
};

} /* namespace CivilNS */

#endif /* SRC_MATERIALS_STEEL_H_ */
