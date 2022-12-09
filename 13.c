// the multiplication table for 6's.

#include <stdio.h>

int main()
{
	
int n = 6;
int c;
int x;

printf("what number should it end with\n");

scanf("%d", &x);

	for (c = 1; c <= x; c++)
	{
		printf("%d * %d = %d \n", n, c, n * c);
	}
	
		return 0;
}
