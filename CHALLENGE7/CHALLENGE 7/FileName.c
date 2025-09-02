#pragma warning (disable:4996)
#include<stdio.h>

int main() {
	float num1, num2, num3, moyenne;

	printf("enter num1 \n");
	scanf("%f", &num1);
	printf("enter num2 \n");
	scanf("%f", &num2);
	printf("enter num3 \n");
	scanf("%f", &num3);

	moyenne = (num1 * 2 + num2 * 3 + num3 * 5) / 10;

	printf("moyenne = %.2f \n", moyenne);

	return 0;
}


