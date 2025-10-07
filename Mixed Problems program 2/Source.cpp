#include <stdio.h>
#include <stdlib.h>

//this program will calculate VAT (Value Added Tax) for a given price asking the user for the price (in £)
int main(int argc, char** argv)
{
	float price, vat, total;
	const float vat_rate = 0.20; // 20% VAT rate
	// Ask the user for the price
	printf("Enter the price (in £): ");
	scanf_s("%f", &price);
	// Calculate VAT and total price
	vat = price * vat_rate;
	total = price + vat;
	// Print the results
	printf("Price (excluding VAT): £%.2f\n", price);
	printf("VAT (20%%): £%.2f\n", vat);
	printf("Total Price (including VAT): £%.2f\n", total);
	return 0;
}