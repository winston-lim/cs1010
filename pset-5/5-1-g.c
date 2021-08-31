
#include <math.h>

int main()
{
	  long square(long x) // <-- define function within function.
		    {
			        return x * x;
				  }

	    double hypotenuse_of(long base, long height) // <--
		      {
			          return sqrt(square(base) + square(height));
				    }

	      hypotenuse_of(3, 4);
}
