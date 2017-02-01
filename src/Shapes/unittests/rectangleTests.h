/*
 * rectangleTests.h
 *
 *  Created on: May 21, 2016
 *      Author: darek
 */

#ifndef SRC_SHAPES_UNITTESTS_RECTANGLETESTS_H_
#define SRC_SHAPES_UNITTESTS_RECTANGLETESTS_H_

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestFixture.h>

#include "../rectangle.h"
#include "ShapeTests.h"


class RectangleTests: public ShapeTests
{
public:
    virtual void setUp();
    virtual void testArea();
    virtual void testInertiaModulus();

private:
    double m_width, m_height;

    CPPUNIT_TEST_SUITE(RectangleTests);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testInertiaModulus);
    CPPUNIT_TEST_SUITE_END();
};


CPPUNIT_TEST_SUITE_REGISTRATION(RectangleTests);

#endif /* SRC_SHAPES_UNITTESTS_RECTANGLETESTS_H_ */
