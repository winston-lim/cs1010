#include <math.h>
long square(long x)
{
	  return x * x;
}

double hypotenuse_of(long base, long height)
{
	  return sqrt(square(base) + square(height));
}

int main()
{
	  Hypotenuse_Of(3, 4); // <-- use a different case
}
