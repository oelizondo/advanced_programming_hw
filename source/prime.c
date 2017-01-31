// Oscar Elizondo
// Thu Jan 12 17:08:18 CST 2017

#include <stdio.h>
#include <stdlib.h>

void prime(int num)
{
    int i;
    int flag = 0;
    for(i=2; i<=num/2; ++i)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag)
        puts("not prime \n");
    else
        puts("prime number \n");
}

int main(int argc, char *argv[])
{
  int num;
  puts("Enter an integer: \n");
  scanf("%d", &num);
  prime(num);
  return 0;
}
