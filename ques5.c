/*
Write a program that reads a series of printing commands and follows
the commands. A printing command is an integer followed by a character;
following the command means printing the character several times, the
number of times being qiven by the integer. Your program must stop if
the integer is 0, or if no integer is available,or if no character is available.

For example, if the user types 1H1e2l1o00x, your program will print
Hello. If the user types 13x0-5y, your program will print xxxxxxxxxxxxx.
*/


#include <stdio.h>
#include <stdlib.h>


int main (void)
{
        int num;
        char ch;

        printf("Enter a printing command (eg 1H): ");
        while(scanf("%d%c", &num, &ch) == 2) 
        {
                if (num == 0) 
                {
                        break;
                }

        for (int i = 0; i < num; i++)
        {
                printf("%c", ch);
                printf("\n"); 
        }
        }
        return 0;
}
