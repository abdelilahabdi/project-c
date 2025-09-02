#pragma warning (disable:4996)
#include<stdio.h>

int main() {
	float num1, num2;

	printf("enter num1 \n");
	scanf("%f", &num1);
	printf("enter num2 \n");
	scanf("%f", &num2);


	printf("addition = %.2f + %.2f = %.2f \n", num1, num2, num1 + num2);
	printf("soustraction = %.2f - %.2f = %.2f \n", num1, num2, num1 - num2);
	printf("multiplication = %.2f * %.2f = %.2f \n", num1, num2, num1 * num2);
	printf("division = %.2f / %.2f = %.2f \n", num1, num2, num1 / num2);
		return 0;
	}
