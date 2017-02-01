/*
 * Column.cpp
 *
 *  Created on: May 23, 2016
 *      Author: darek
 */

#include "column.h"

namespace CivilNS
{

Column::Column(Shapes::Shape* shape, Material* mat_concrete, Material* mat_steel)
{
    p_mat_concrete = mat_concrete;
    p_mat_steel = mat_steel;
    p_shape = shape;
}

Column::~Column()
{
}

const Material* Column::getConcrete() const
{
    return p_mat_concrete;
}

const Material* Column::getSteel() const
{
    return p_mat_steel;
}

const Shapes::Shape* Column::getShape() const
{
    return p_shape;
}

} /* namespace CivilNS */
