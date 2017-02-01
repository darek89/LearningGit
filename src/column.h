/*
 * Column.h
 *
 *  Created on: May 23, 2016
 *      Author: darek
 */

#ifndef SRC_COLUMN_H_
#define SRC_COLUMN_H_

#include "Materials/material.h"
#include "Shapes/shape.h"

namespace CivilNS
{

class Column
{
public:
    Column(Shapes::Shape* shape, Material* mat_concrete, Material* mat_steel);
    virtual ~Column();

    const Material* getConcrete() const;
    const Material* getSteel() const;
    const Shapes::Shape* getShape() const;

private:
    Material* p_mat_concrete;
    Material* p_mat_steel;
    Shapes::Shape* p_shape;
};

} /* namespace CivilNS */

#endif /* SRC_COLUMN_H_ */
