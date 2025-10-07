/* Selection Constructs
* if example
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    const int LIMIT = 5;

    int myNumber;          /* create variable */
	printf_s("Enter a number: "); /* prompt for input */
    scanf_s("%d", &myNumber); /* read in number */

    if (myNumber > LIMIT)   /* if condition */
    {
        /* multi-line statement surrounded by {} */
        printf_s("bigger than five \n");
        printf_s("I need another line\n");
        printf_s("just to make a point\n");
    }
    else
        /* single line statement no need for {} */
        printf_s("not bigger than five\n");

    // Error Checking
    if (myNumber < 0)
    {
        printf_s("SubZero"); 
    }

    exit(0);
}
