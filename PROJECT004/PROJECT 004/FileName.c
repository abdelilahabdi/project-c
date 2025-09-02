#pragma warning (disable:4996)
#include<stdio.h>

int main() {
	float ms, kmh;

	printf("enter kmh \n");
	scanf("%f", &kmh);

	ms = kmh * 0.27778;

	printf("m/s = %.2f \n", ms);
	return 0;
}
	

