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
	  hypotenuse_of(3.0, 4.0); // <- use 3.0 and 4.0 instead of int.
}
