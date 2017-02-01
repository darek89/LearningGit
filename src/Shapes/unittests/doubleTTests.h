/*
 * doubleTTests.h
 *
 *  Created on: May 22, 2016
 *      Author: darek
 */

#ifndef SRC_SHAPES_UNITTESTS_DOUBLETTESTS_H_
#define SRC_SHAPES_UNITTESTS_DOUBLETTESTS_H_

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestFixture.h>

#include "../doubleT.h"
#include "ShapeTests.h"


class DoubleTTests: public ShapeTests
{
public:
    virtual void setUp();
    virtual void testArea();
    virtual void testInertiaModulus();

private:
    double m_shelfWidth, m_shelfHeight, m_webWidth, m_webHeight;

    CPPUNIT_TEST_SUITE(DoubleTTests);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testInertiaModulus);
    CPPUNIT_TEST_SUITE_END();
};


CPPUNIT_TEST_SUITE_REGISTRATION(DoubleTTests);

#endif /* SRC_SHAPES_UNITTESTS_DOUBLETTESTS_H_ */
