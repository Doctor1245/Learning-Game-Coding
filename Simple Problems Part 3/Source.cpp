// Write a program which take the height and base width of a triangle and prints the area.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float height, base, area;
	printf_s("Enter the height of the triangle: ");
	scanf_s("%f", &height);
	printf_s("Enter the base width of the triangle: ");
	scanf_("%f", &base);
	area = 0.5 * height * base;
	printf_s("The area of the triangle is: %.2f\n", area);
	return 0;
}