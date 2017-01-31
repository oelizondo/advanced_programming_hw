// Oscar Elizondo
// Thu Jan 26 16:41:16 CST 2017

#include <stdio.h>
#include <stdlib.h>
#include "./display.c"

int main(int argc, char *argv[])
{
  char chars[] = {'a', 'b', 'c', 'd', 'z'};
  int integers[] = {49, 50, 51, 52, 53};

  // displayIntsfromChars(chars);
  int iIntArraySize = sizeof(integers) / sizeof(int);
  int iCharArraySize = sizeof(chars) / sizeof(char);

  displayCharsfromints(integers, iIntArraySize);
  displayIntsfromChars(chars, iCharArraySize);
  displayIntsfromInts(integers, iIntArraySize);
  displayCharsfromChars(chars, iCharArraySize);

  return 0;
}
