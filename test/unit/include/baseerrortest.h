/*
    Definition for a test case for a BaseError.
    Copyright (C) 2010 Alex Brandt

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*/

#ifndef BASEERRORTEST_H
#define BASEERRORTEST_H

#include "../../../include/baseerror.h"

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestAssert.h>

class BaseErrorTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(BaseErrorTest);
    CPPUNIT_TEST(BaseError_Instantiation_PropertiesSet);
    CPPUNIT_TEST_SUITE_END();

public:
    /**
     * @brief Initialize the testing environment.
     */
    void setUp();

    /**
     * @brief Tear down the testing environment.
     */
    void tearDown();

protected:
    void BaseError_Instantiation_PropertiesSet();

private:
    Errors::BaseError * errorA;
};

#endif // BASEERRORTEST_H
