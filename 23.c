// check whether a number is palindrome or not.

#include <stdio.h>

int main()
{
	
int n,c,r;
int s = 0;

printf("Enter a number \n");

scanf("%d", &n);

c=n;

	while(n > 0)
	{
		r = n % 10;
		s = r + (s * 10);
		n = n / 10;
	}
	
	if( c == s)
	
	printf("Palindrome number \n");
	
	else
	
	printf("not palindrome number \n");

		
		return 0;
}

