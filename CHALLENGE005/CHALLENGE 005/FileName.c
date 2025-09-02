#pragma warning (disable:4996)
#include<stdio.h>

int main() {
	int T;

	printf("enter etat de leau T \n");
	scanf("%d", &T);

	if (T < 0) {
		printf("solide \n");
	}
	else if (T >= 0 && T < 100) {

		printf("liquide \n");
	}

	else {
		printf("gaz \n");

	}
		return 0;
	}
		 

