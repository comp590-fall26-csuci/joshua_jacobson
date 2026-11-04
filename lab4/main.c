#include <stdio.h>
#include <math.h>
#include "utest.h"
#include "fibonacci.h"

UTEST(Fibonacci, Term0)
{
	ASSERT_EQ(fibonacci(0), 0);
}

UTEST(Fibonacci, Term1)
{
	ASSERT_EQ(fibonacci(1), 1);
}

UTEST(Fibonacci, Term2)
{
	ASSERT_EQ(fibonacci(2), 1);
}

UTEST(Fibonacci, Term3)
{
	ASSERT_EQ(fibonacci(3), 2);
}

UTEST(Fibonacci, Term4)
{
	ASSERT_EQ(fibonacci(4), 3);
}

UTEST(Fibonacci, Term5)
{
	ASSERT_EQ(fibonacci(5), 5);
}

UTEST(Fibonacci, Term6)
{
	ASSERT_EQ(fibonacci(6), 8);
}

UTEST(Fibonacci, Term7)
{
	ASSERT_EQ(fibonacci(7), 13);
}

UTEST(Fibonacci, Term8)
{
	ASSERT_EQ(fibonacci(8), 21);
}

UTEST(Fibonacci, Term9)
{
	ASSERT_EQ(fibonacci(9), 34);
}

UTEST(Fibonacci, Term10)
{
	ASSERT_EQ(fibonacci(10), 55);
}

UTEST(Fibonacci, GoldenRatio)
{
	const double multiplier = pow(10.0, 6);
	double golden_ratio_rounded = round(golden_ratio_approx(0) * multiplier) / multiplier;
	ASSERT_EQ(golden_ratio_rounded, 1.618034);
}

UTEST_MAIN()

