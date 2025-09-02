#pragma warning (disable:4996)


#include<stdio.h>

int main() {

	float ceisius, kelvin;

	printf("enter ceisius \n");
	scanf("%f", &ceisius);


	kelvin = ceisius + 273.15;
	printf("kelvin = %.2f \n", kelvin);
	return 0;
}

