#pragma warning (disable:4996)
#include<stdio.h>
#include<math.h>
int main() {

	float moyenne_geomtrique,num1,num2,num3,moyenne;

	printf("num1 \n");
	scanf("%f", &num1);
	printf("num2 \n");
	scanf("%f", &num2);
	printf("num3 \n");
	scanf("%f", &num3);

	moyenne = sqrt (num1 * num2 * num3);
	moyenne_geomtrique = pow (moyenne,1.0/3.0);

	 

	printf("moyenne_geomtrique = %.2f \n", moyenne_geomtrique);

	return 0;



}