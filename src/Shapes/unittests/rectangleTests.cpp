/*
 * rectangleTests.cpp
 *
 *  Created on: May 21, 2016
 *      Author: darek
 */

#include "rectangleTests.h"


void RectangleTests::setUp()
{
    m_width = 7.89;
    m_height = 10.123;
    m_shape = new Shapes::Rectangle(m_width, m_height);
}


void RectangleTests::testArea()
{
    CPPUNIT_ASSERT_DOUBLES_EQUAL(79.870, m_shape->getArea(), 0.001);
}


void RectangleTests::testInertiaModulus()
{
    CPPUNIT_ASSERT_DOUBLES_EQUAL(682.061, m_shape->getInertiaModulus(), 0.001);
}
