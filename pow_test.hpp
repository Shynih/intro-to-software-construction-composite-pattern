#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTEST, TwoFive) {
	Base* two = new Op(2);
	Base* five = new Op(5);
	Base* test = new Pow(two, five);
	EXPECT_EQ(test->evaluate(), 32);
}


#endif //__POW_TEST_HPP__
