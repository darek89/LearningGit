/*
 * ShapeTests.h
 *
 *  Created on: May 22, 2016
 *      Author: darek
 */

#ifndef SRC_SHAPES_UNITTESTS_SHAPETESTS_H_
#define SRC_SHAPES_UNITTESTS_SHAPETESTS_H_

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestFixture.h>

#include "../circle.h"


class ShapeTests: public CppUnit::TestFixture
{
public:
    virtual void setUp() = 0;
    virtual void tearDown();
    virtual void testArea() = 0;
    virtual void testInertiaModulus() = 0;

protected:
    Shapes::Shape* m_shape;
};


#endif /* SRC_SHAPES_UNITTESTS_SHAPETESTS_H_ */
