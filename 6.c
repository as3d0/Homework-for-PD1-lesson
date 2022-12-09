//  convert the length in feet to centimeter

#include <stdio.h>

int main()
{
	
float inch, cm;

printf("Enter a number\n");

scanf("%f", &inch);

	cm = inch * 2.54 ;
	
	printf("%.2f in cm will be %.2f", inch , cm);


		return 0;
}

