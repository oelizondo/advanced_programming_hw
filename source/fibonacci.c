// Oscar Elizondo
// Thu Jan 12 17:08:18 CST 2017

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num)
{
  int acum = 0;
  int first = 1;
  int second = 1;
  int temp;

  printf("%d \n", first);
  printf("%d \n", second);
  while(num-2)
  {
    acum = first + second;
    temp = first;
    first = acum;
    second = temp;
    printf("%d \n", acum);
    num--;
  }

  return acum;
}

int main(int argc, char *argv[])
{
  int num;
  puts("Enter fibonacci stopper: \n");
  scanf("%d", &num);
  fibonacci(num);
  return 0;
}
