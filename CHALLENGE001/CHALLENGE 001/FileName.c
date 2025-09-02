#pragma warning (disable:4996)
#include<stdio.h>

int main() {
	char nom[20];
	char prenom[20];
	int age;
	char sexe;
	char adress_email[20];


	printf("enter nom \n");
	scanf("%s", nom);
	printf("enter prenom \n");
	scanf("%s", prenom);
	printf("enter age \n");
	scanf("%d",&age); 
	printf("enter sexe \n");
	scanf(" %c",&sexe);
	printf("enter adress email \n");
	scanf("%s", adress_email);


	printf("**************************************** \n");

	printf("nom is %s \n", nom);
	printf("prenom is %s \n", prenom);
	printf("age is %d \n", age);
	printf("sexe is %c \n", sexe);
	printf("adress email is %s \n", adress_email);


	return 0;



}