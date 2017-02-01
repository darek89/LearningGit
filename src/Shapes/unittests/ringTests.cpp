/*
 * ringTests.cpp
 *
 *  Created on: May 22, 2016
 *      Author: darek
 */

#include "ringTests.h"


void RingTests::setUp()
{
    m_extDiameter = 24;
    m_intDiameter = 18;
    m_shape = new Shapes::Ring(m_extDiameter, m_intDiameter);
}


void RingTests::testArea()
{
    CPPUNIT_ASSERT_DOUBLES_EQUAL(197.920, m_shape->getArea(), 0.001);
}


void RingTests::testInertiaModulus()
{
    CPPUNIT_ASSERT_DOUBLES_EQUAL(11133.019, m_shape->getInertiaModulus(), 0.001);
}
