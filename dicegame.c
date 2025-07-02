#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int number1 = rand() % 7, number2 = rand() % 7;
	int sum;
	char name[100];
	printf("What is your name?\n>");
	scanf("%s", name);
	printf("Hello name!\n", name);
	printf("Rolling dice...\n");
	printf("1: %d\n", number1);
	printf("2: %d\n", number2);
	sum = number1 + number2;
	printf("Total value: %d\n", sum);
	if (sum > 7) printf("%s wom!\n",name);
	else printf("%s lost!\n",name);
	return 0;
}