/*
 * tensionCounters.cpp
 *
 *  Created on: Jun 19, 2016
 *      Author: darek
 */

#include <Materials/concrete.h>
#include <Materials/steel.h>

#include "tensionCounters.h"


const double CivilNS::madridParabolaPlot(const Concrete& conc ,const double epsilon)
{
    double f_cd = conc.getCalculationStrength();

    if (epsilon > conc.getEpsilonMiddleMax()) return f_cd;
    if (epsilon <= 0) return 0;

    double sigma = 1000 * epsilon * (1 - 250 * epsilon) * f_cd;

    return std::min(sigma, f_cd);
}

const double CivilNS::ec2Plot(const double epsilon)
{
    return 1;
}
