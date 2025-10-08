/* Selection Constructs
* if example
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    const int LOOP_MAX = 100; /* Best practice for constants */

    int count;
    int loopStop;

    for (int i = LOOP_MAX; i > 0; i--)
    {
        printf("Loop counter: %d\n", i);
    }

    printf("Enter number to stop loop\n");
    scanf_s("%d", &loopStop);

    count = 0;

    while (count < loopStop && count >= 0)
    {
        printf("Loop counter: %d\n", count);
        count++;
    }

    exit(0);
}