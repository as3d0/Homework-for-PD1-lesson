// multiplication table of any number.

#include <stdio.h>

int main()
{
	
int n,c,x;


printf("Enter a number \n");

scanf("%d", &n);

printf("what number should it end with? \n");

scanf("%d", &x);

	for (c = 1; c <= x; c++)
	{
		printf("%d * %d = %d \n", n, c, n * c);
	}
	
		return 0;
}

