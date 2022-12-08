/*
Write a program that reads a sequence of integers and prints the last
5 integers. You may assume that each integer is between 0 and 99. You
may assume that there are at least 5 integers.

For example, if the user types 37 82 59 84 87 26 1 x, your program will display 59 84 87 26 1.
*/


#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main (void)
{
        int a,i = 0,array[SIZE];
        printf("Enter a sequence of integers: ");
        while(scanf("%d", &a)== 1)
        {
                printf("%d\n",a);
                array[i] = a;
                i++;
                if (i == SIZE)
                {
                        i = 0;
                }
        }
                for (i = 0; i < SIZE; i++)
                {
                         printf("%d ", array[i]);
                         printf("\n");
                }
        return 0;
}

