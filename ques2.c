/*
Write a program that reads a sequence of integers, discards the
negative integers, and prints the sum of the remaining integers. You may
assume that the integers are between -10000 and 10000, and that there
are at most 10000 integers.

For example, if the user types 3 -1 -4 1 -5 9 2 -6 ^D, your program will
print 15.
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define MAX_LINE_LENGTH 10000

int main()
{
    char inputBuffer[MAX_LINE_LENGTH];
    char *ptr;
    long n;
    int sum = 0;


    printf("Enter a sequence of integers: ");
    fgets(inputBuffer, MAX_LINE_LENGTH, stdin);

    ptr = inputBuffer;

    errno = 0;
    while ((n = strtol(ptr, &ptr, 10)))
    {
        if (n > 0 && errno != 0)
        {
            sum += n;
        }
        else
        {
           perror("strtol");
           exit(EXIT_FAILURE);
        }
    }

    printf("The sum is: %d\n", sum);
    return 0;
}

