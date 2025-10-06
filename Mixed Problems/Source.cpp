//this program will be made to read the radius of a circle (as a float) and prints the circles diameter, circumference and area. Use constant value 3.14159 for π.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float radius, diameter, circumference, area;
	const float pi = 3.14159;
	// Ask the user to enter the radius
	printf_s("Enter the radius of the circle: ");
	scanf_s("%f", &radius);
	// Calculate diameter, circumference and area
	diameter = 2 * radius;
	circumference = 2 * pi * radius;
	area = pi * radius * radius;
	// Print the results
	printf_s("Diameter: %.2f\n", diameter);
	printf_s("Circumference: %.2f\n", circumference);
	printf_s("Area: %.2f\n", area);
	return 0;
}