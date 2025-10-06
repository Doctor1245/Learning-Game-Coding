// Write a program which takes a mark and a maximum mark from the user and outputs a percentage. Check the output of the program carefully to ensure your not getting truncation due to integer division.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int mark = 0;
	int maxMark = 0;
	float percentage = 0.0f;
	printf("Enter your mark: ");
	scanf_s("%d", &mark);
	printf("Enter the maximum mark: ");
	scanf_s("%d", &maxMark);
	percentage = ((float)mark / (float)maxMark) * 100.0f;
	printf("You scored %.2f%%\n", percentage);
	system("pause");
	exit(0);
