/*
Write a program that reads two integers and prints the sum of the
integers, the difference of the integers, the product of the integers,
the quotient of the first integer divided by the second (discarding the
remainder), the remainder of the first integer divided by the second,
the smaller integer, and the larger integer. Your program must print
these results in the order listed here. You may assume that the integers
are between 1 and 1000.

For example, if the user types 10 3, your program will print 13 7 30 3 1
3 10, in that order.
*/

int main ()
{

int i, num1, num2, sum, difference, product, quotient, remainder, smaller, larger;

printf("Enter two integers: ");
scanf("%d%d", &num1,&num2);

  sum = num1 + num2;
  difference = num1 - num2;
  product = num1 * num2;
  quotient = num1 / num2;·
  remainder = num1 % num2;·
  smaller = (num1 < num2) ? num1 : num2;
  larger = (num2 > num1) ? num2 : num1;·

printf("%d %d %d %d %d %d %d",sum,difference,product,quotient,remainder,smaller, larger);
printf("\n");

return 0;
}
