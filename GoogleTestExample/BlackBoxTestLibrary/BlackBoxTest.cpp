#include "BlackBoxTest.h"
#include "pch.h"

// F = Fibonacci
// F(4) = F(3) + F(2)
// F(3) = F(2) + F(1)
// F(2) = 1
// F(1) = 1
int Fibonacci(int v) {
	if (v == 2 || v == 1)
		return 1;

	return Fibonacci(v - 1) + Fibonacci(v - 2);
}