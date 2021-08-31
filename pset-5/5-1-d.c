#include <math.h>
long square(long x)
{
	  return x * x;
}

double hypotenuse_of(long base, long height)
{
	  long base; // <-- declare a new base
	    return sqrt(square(base) + square(height));
}

int main()
{
	  hypotenuse_of(3, 4);
}
