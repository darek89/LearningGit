/*
 * Material.h
 *
 *  Created on: May 23, 2016
 *      Author: darek
 */

#ifndef SRC_MATERIALS_MATERIAL_H_
#define SRC_MATERIALS_MATERIAL_H_

#include <exception>
#include <iostream>

namespace CivilNS
{

class Material
{
public:
    Material(const std::string mat, const double gamma);
    virtual ~Material();

    virtual const double getCharacteristicStrength() const = 0;
    virtual const double getCalculationStrength() const = 0;
    virtual const double getYoungModulus() const = 0;

protected:
    const std::string m_material_class;
    const double m_gamma;
};

class ExceptionMaterialParams: public std::exception
{
public:
    virtual const char* what() const throw();
};

} /* namespace CivilNS */

#endif /* SRC_MATERIALS_MATERIAL_H_ */
