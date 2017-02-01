/*
 * shapeTests.cpp
 *
 *  Created on: May 21, 2016
 *      Author: darek
 */

#include "circleTests.h"


void CircleTests::setUp()
{
    m_diameter = 20;
    m_shape = new Shapes::Circle(m_diameter);
}


void CircleTests::testArea()
{
    CPPUNIT_ASSERT_DOUBLES_EQUAL(314.159, m_shape->getArea(), 0.001);
}


void CircleTests::testInertiaModulus()
{
    CPPUNIT_ASSERT_DOUBLES_EQUAL(7853.981, m_shape->getInertiaModulus(), 0.001);
}
