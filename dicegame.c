#include<stdio.h>
#include<stdlib.h>
int main() {
	int number1 = rand() % 7, number2 = rand() % 7;
	int sum;
	printf("Rolling dice...\n");
	printf("1: %d\n", number1);
	printf("2: %d\n", number2);
	sum = number1 + number2;
	printf("Total value: %d\n", sum);
	return 0;
}