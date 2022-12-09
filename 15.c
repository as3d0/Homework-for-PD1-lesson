//  print all natural numbers in reverse (from n to 1).

#include <stdio.h>

int main()

{
	
	int n;
		
	printf("Enter a number \n");
	
	scanf("%d", &n);
	
	printf("natural numbers in reverse from 1 to %d are: \n", n);
	
	while (n)
		{
			printf("%d_", n);
			n-- ;
			}	
	
	
	
	
	
	
	
	
	
	
	
	
		return 0;
}
