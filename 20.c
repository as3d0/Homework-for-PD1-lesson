// count number of digits in a number

#include <stdio.h>

int main()
{
	
int n,c = 0;

printf("Enter a number \n");

scanf("%d", &n);

	while(n > 0)
	{
		n = n / 10;
		c++;
	}
	
printf("%d digits \n", c);	


		return 0;
}
