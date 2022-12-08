/* SECOND IMPLEMENTATION OF QUESTION 2 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define MAX_LINE_LENGTH 10000

int main(void)
{
        char inputBuffer[MAX_LINE_LENGTH];
        char *ptr;
        long sum = 0;

        printf("Enter a sequence of integers: ");
        fgets(inputBuffer, MAX_LINE_LENGTH, stdin);

        ptr = inputBuffer;
        while (true)
        {
                errno = 0;
                long n = strtol(ptr, &ptr, 10);// sets errno to non-zero number on failure
                if (errno != 0){
                        break;
                }
                else if (n > 0){
                sum += n;
                }
        }
        printf("The sum is: %ld\n", sum)
        return 0;
}
