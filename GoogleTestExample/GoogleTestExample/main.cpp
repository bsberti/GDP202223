//Including an external file

#include <gtest/gtest.h>
#include <iostream>

#include <BlackBoxTest.h>

int Factorial(int a) {

	if (a == 1)
		return 1;

	return a * Factorial(a - 1);
}

TEST(FactorialTests, Factorial) {
	EXPECT_EQ(120, Factorial(5));
	EXPECT_EQ(720, Factorial(6));
	EXPECT_EQ(24, Factorial(4));
}

TEST(FibonacciTests, Fib5) {
	EXPECT_EQ(5, Fibonacci(5));
}

// Main entry point to our program
int main(int argc, char** argv) {

	::testing::InitGoogleTest(&argc, argv);

	int result = RUN_ALL_TESTS();

	return result;
}