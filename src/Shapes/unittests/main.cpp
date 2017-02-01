/*
 * main.cpp
 *
 *  Created on: May 21, 2016
 *      Author: darek
 */

#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>


int main(int argc, char** argv)
{
    CppUnit::TextUi::TestRunner runner;

    // Retrieve the instance of the TestFactoryRegistry
    CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();

    // Obtain and add a new TestSuite created by TestFactoryRegistry
    // It contains all the test suite registered using CPPUNIT_TEST_SUITE_REGISTRATION()
    runner.addTest(registry.makeTest());
    bool returnValue = runner.run();

    return returnValue;
}
