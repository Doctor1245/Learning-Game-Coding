//this program will add two numbers and display the result that are input by the user using scanf_s and printf_s functions ising two questions
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int num1, num2, sum;
	printf("Enter first number: ");
	scanf_s("%d", &num1);
	printf("Enter second number: ");
	scanf_s("%d", &num2);
	sum = num1 + num2;
	printf("The sum of %d and %d is %d\n", num1, num2, sum);
	return 0;
}