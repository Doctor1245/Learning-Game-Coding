// this program will be made to caculate VAT (Value Added Tax) on a given price in (£) and print the total price including VAT. Use a constant value of 0.20 for VAT (20%).

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	float price, vat, totalPrice;
	const float vatRate = 0.20;
	// Ask the user to enter the price
	printf_s("Enter the price (£): ");
	scanf_s("%f", &price);
	// Calculate VAT and total price
	vat = price * vatRate;
	totalPrice = price + vat;
	// Print the results
	printf_s("VAT (20%%): £%.2f\n", vat);
	printf_s("Total Price including VAT: £%.2f\n", totalPrice);
	// exit the program
	return 0;

}