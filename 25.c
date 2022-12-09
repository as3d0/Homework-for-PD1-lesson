// find HCF (Highest Common Factor) of two numbers

#include <stdio.h>

int main()
{
	
int n1,n2,hcf;
int c = 1;

printf("Enter two number\n");

scanf("%d %d", &n1, &n2);

	while(c <= n1 && c <= n2)
	{
		if(n1 % c == 0 && n2 % c == 0)
		{
			hcf = c;
		}
		c++;
	}

printf("HCF of %d and %d is %d \n", n1, n2, hcf);



		return 0;
}
