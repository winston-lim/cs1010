#include <math.h>
long square(long x)
{
	  long sqr = x * x; // <-- declare and assign in one go
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
