#include <math.h>

long sqr;  // <-- use global variable
long square(long x)
{
	  sqr = x * x;
	    return sqr;
}

double hypotenuse_of(long base, long height)
{
	  return sqrt(square(base) + square(height));
}

int main()
{
	  hypotenuse_of(3, 4);
}
