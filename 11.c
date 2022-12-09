// a program that reads 10 numbers from the user and prints out their sum

#include <stdio.h>

int main()
{

int n, sum, avg;
int c = 1;

	while (c <= 10)
	{
		
	printf("Enter a number\n");

	scanf("%d", &n);
	
	sum = sum + n;
	
	c++;
	}

printf("sum = %d", sum);


		return 0;
}

