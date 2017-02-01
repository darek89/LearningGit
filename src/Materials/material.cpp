/*
 * Material.cpp
 *
 *  Created on: May 23, 2016
 *      Author: darek
 */

#include "material.h"

namespace CivilNS
{

Material::Material(const std::string mat, const double gamma): m_material_class(mat), m_gamma(gamma)
{
}

Material::~Material()
{
}

const char* ExceptionMaterialParams::what() const throw()
{
    return "Material class and its parameters has not been implemented.";
}

} /* namespace CivilNS */
