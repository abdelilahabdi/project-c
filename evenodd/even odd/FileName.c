#pragma warning(disable:4996)

#include<stdio.h>

int main() {

	int num1;
	printf("enter num1 \n");
	scanf("%d", &num1);



	if (num1 % 2 == 0) {
		printf("num1 is %d even \n", num1);

	}

	else {
		printf("num1 is %d odd \n");
	}

	return 0;

}