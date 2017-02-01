/*
 * ShapeTests.cpp
 *
 *  Created on: May 22, 2016
 *      Author: darek
 */

#include "ShapeTests.h"
#include "../circle.h"


void ShapeTests::tearDown()
{
    delete m_shape; // TODO: How about setting it to NULL ?
    m_shape = NULL;
}
