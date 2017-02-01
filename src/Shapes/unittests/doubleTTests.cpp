/*
 * doubleTTests.cpp
 *
 *  Created on: May 22, 2016
 *      Author: darek
 */

#include "../doubleT.h"
#include "doubleTTests.h"


void DoubleTTests::setUp()
{
    m_shelfWidth = 15.5;
    m_shelfHeight = 5.21;
    m_webWidth = 4.19;
    m_webHeight = 20.01;
    m_shape = new Shapes::DoubleT(m_shelfWidth, m_shelfHeight,
            m_webWidth, m_webHeight);
}


void DoubleTTests::testArea()
{
    CPPUNIT_ASSERT_DOUBLES_EQUAL(245.352, m_shape->getArea(), 0.001);
}


void DoubleTTests::testInertiaModulus()
{
    CPPUNIT_ASSERT_DOUBLES_EQUAL(28844.907, m_shape->getInertiaModulus(), 0.001);
}
