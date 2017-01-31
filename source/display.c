#include <stdio.h>
#include <stdlib.h>

void displayCharsfromints(int integers[], int iSize)
{
  puts("Displaying Chars from Ints");
  for (int i = 0; i < iSize; i++)
  {
    printf("%c \n", integers[i] + '0');
  }
}

void displayIntsfromChars(char characters[], int iSize)
{
  // int i = c[0] - '0';
  puts("Displaying Ints from Chars");
  for (int i = 0; i < iSize; i++)
  {
    printf("%d \n", characters[i] - '0');
  }
}

void displayIntsfromInts(int integers[], int iSize)
{
  puts("Displaying Ints from Ints");
  for (int i = 0; i < iSize; i++)
  {
    printf("%d \n", integers[i]);
  }
}

void displayCharsfromChars(char characters[], int iSize)
{
  // int i = c[0] - '0';
  puts("Displaying Chars from Chars");
  for (int i = 0; i < iSize; i++)
  {
    printf("%c \n", characters[i]);
  }
}
