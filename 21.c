// find first and last digit of a number

#include <stdio.h>

int main()
{
	
int n;

printf("Enter a number \n");

scanf("%d", &n);

printf("the last digit is: %d \n", n % 10);

	while(n > 10)
	n = n / 10;
printf("the first digit is %d \n", n);	



		return 0;
}

