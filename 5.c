// Convert Temperature from Fahrenheit to Celsius

#include <stdio.h>

int main()
{
	
float fh,c;

	printf("Enter temperature in fahrenheit \n");
	
	scanf("%f", &fh);
	
	c = (fh - 32) / 1.8 ;
	
	printf("The temperature in C will be %.2f", c);



		return 0;
}

