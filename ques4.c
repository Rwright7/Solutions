/*
Write a program that reads a sequence of integers and prints the last
5 integers. You may assume that each integer is between 0 and 99. You
may assume that there are at least 5 integers.

For example, if the user types 37 82 59 84 87 26 1 ^D, your program will display 59 84 87 26 1. If the user types 37 82 59 y, your program will display 37 82 59.

   (This is a more difficult version of the previous problem.)
*/

#define SIZE 5


int main (void)
{
        int num,k, i = 0;
        int array[SIZE] = { 0 };
        printf("Enter a sequence of integers between (0 - 99): ");
        while (scanf("%d", &num) == 1)
        {
                array[i % SIZE] = num;
                i++;
                printf("%d ", num);
                printf("\n");
        }

        printf(">>>> ");
        if (i < SIZE)
        {
                for (int j = 0; j < i; j++)
                {
                        printf(" %d", array[j]);
                }
        }else{
        k = (i < SIZE) ? 0 : i % SIZE;
        for (int j = k; j < k + SIZE; j++)
        {
                 printf(" %d", array[j  % SIZE]);
        }
        }
        printf("\n");
        return 0;
}
