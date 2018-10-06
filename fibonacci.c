#include <stdio.h>
int fibo(int num)
{
  if (num == 0)
    return 0;
  else if (num == 1)
    return 1;
  else
    return(fibo(num - 1) + fibo(num - 2));
}
int main()
{
  int n;
  printf("Enter the nth number in fibonacci series:");
  scanf("%d", &n);
  if(n<0)
    printf("Fibonacci of negative number is not possible.");
  else
    printf("The %d number in fibonacci series is %d\n", n, fibo(n));
return 0;
}
