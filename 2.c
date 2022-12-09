// the area of a circle 

#include <stdio.h>

int main()
{
	
int r;
float area;
float Pi = 3.14;

printf("Enter the radius\n");

scanf("%d", &r);

area = Pi * r * r;

printf("the area of the circle is: %.2f", area);

		return 0;
}

