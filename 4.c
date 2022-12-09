//Determine Whether a Temperature is Below or Above the Freezing Point.

#include <stdio.h>

int main()
{
	
int T;

	printf("Enter a temperature\n");
	
	scanf("%d", &T);
	
	if (T > 0 )
	{
		printf("%d is above the freezing point", T);
	}
	
	else
	if (T == 0 )
	{
		printf("%d is the freezing point", T);
	}	
	
	else
	{
		printf("%d is below the freezing point", T);
	}

		return 0;
}
