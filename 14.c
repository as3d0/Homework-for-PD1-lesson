// computing factorial N (N!)

#include <stdio.h>

int main()
{
	
int n = 1;
int num, c;

printf("Enter your number\n");

scanf("%d", &num);

for (c = 2; c <= num; c++)
	{
		n = n * c;
		
		printf("Factorial of %d is %d \n", num, n);
	}


		return 0;
}

