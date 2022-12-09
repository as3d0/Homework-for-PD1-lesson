//  generates even numbers between 1000 and 2000 and then prints them in the standard output. It should also print total sum.

#include <stdio.h>

int main()
{

int c, v;	
int a = 1000, b = 2000, sum = 0;

	if (a > b)
	{
		v = a;
		a = b;
		b = v;
		
	}

printf("Even numbers between 1000 and 2000 are: \n");

	for (c = a; c <= b; c++)
	{
	
		if (c % 2 == 0)
			{
				printf("%d \n", c);
				sum = sum + c;
			}	
	
	}
	
	printf("sum = %d \n", sum);

		return 0;
}

