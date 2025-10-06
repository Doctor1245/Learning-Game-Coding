/*IO Libary for Printf and Scanf */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int a;
	int b;

	a = 5;

	printf_s("The value of a is: %d\n", a);
	printf_s("Pleae enter the value of b: \n");
	scanf_s("%d", &b);
	printf_s("The value of b is: %d\n", b);
	//write code to degine a variable called sum which adds a and b together
	int sum = a + b;
	printf_s("The sum of a and b is: %d\n", sum);
	//program ending
	exit(0);
}