/*
 * shapeTests.h
 *
 *  Created on: May 21, 2016
 *      Author: darek
 */

#ifndef SRC_SHAPES_UNITTESTS_CIRCLETESTS_H_
#define SRC_SHAPES_UNITTESTS_CIRCLETESTS_H_

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestFixture.h>

#include "../circle.h"
#include "ShapeTests.h"


class CircleTests: public ShapeTests
{
public:
    virtual void setUp();
    virtual void testArea();
    virtual void testInertiaModulus();

private:
    double m_diameter;

    CPPUNIT_TEST_SUITE(CircleTests);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testInertiaModulus);
    CPPUNIT_TEST_SUITE_END();
};


// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION(CircleTests);

#endif /* SRC_SHAPES_UNITTESTS_CIRCLETESTS_H_ */
