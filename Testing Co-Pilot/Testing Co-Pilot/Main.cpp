#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	// create a constant called ARRAY_SIZE and set it to 10
	const int ARRAY_SIZE = 10;
	// create an array of floats called Xcords with size ARRAY_SIZE
	float Xcords[ARRAY_SIZE];
	// write a for loop to fill the Xcords with values from keyboard input
	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("Enter value for Xcords[%d]: ", i);
		scanf_s("%f", &Xcords[i]);
		//write a loop to print the values in Xcords
		for (int j = 0; j <= i; j++) {
			printf("Xcords[%d] = %f\n", j, Xcords[j]);
		}
	}
	// write a loop to add up all the values in Xcords and print the total
	float total = 0;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		total += Xcords[i];
	}
	printf("Total = %f\n", total);
	// write a end program message
	printf("End of program.\n");

	exit(0);
}