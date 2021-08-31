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
	  long h = hypotenuse_of(3, 4); // <-- assign to a long variable
}
