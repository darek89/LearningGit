/*
 * ringTests.h
 *
 *  Created on: May 22, 2016
 *      Author: darek
 */

#ifndef SRC_SHAPES_UNITTESTS_RINGTESTS_H_
#define SRC_SHAPES_UNITTESTS_RINGTESTS_H_

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestFixture.h>

#include "../ring.h"
#include "ShapeTests.h"


class RingTests: public ShapeTests
{
public:
    virtual void setUp();
    virtual void testArea();
    virtual void testInertiaModulus();

private:
    double m_extDiameter, m_intDiameter;

    CPPUNIT_TEST_SUITE(RingTests);
    CPPUNIT_TEST(testArea);
    CPPUNIT_TEST(testInertiaModulus);
    CPPUNIT_TEST_SUITE_END();
};


CPPUNIT_TEST_SUITE_REGISTRATION(RingTests);

#endif /* SRC_SHAPES_UNITTESTS_RINGTESTS_H_ */
