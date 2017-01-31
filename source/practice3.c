//
//  main.c
//  practice3
//
//  Created by Oscar Elizondo on 1/26/17.
//  Copyright © 2017 Oscar Elizondo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void multiplyMatrix(int iCol, int iRow, int iMatriz1[iRow][iCol], int iMatriz2[iRow][iCol])
{
  printf("%d", (iMatriz1[0][0] * iMatriz2[0][0]) + (iMatriz1[0][1] * iMatriz2[1][0]));
  printf("%d", (iMatriz1[0][0] * iMatriz2[0][1]) + (iMatriz1[0][1] * iMatriz2[1][1]));
  printf("%d", (iMatriz1[1][0] * iMatriz2[0][0]) + (iMatriz1[1][1] * iMatriz2[1][0]));
  printf("%d \n", (iMatriz1[1][0] * iMatriz2[0][1]) + (iMatriz1[1][1] * iMatriz2[1][1]));
}

void addMatrix(int iCol, int iRow, int iMatriz1[iRow][iCol], int iMatriz2[iRow][iCol])
{
  for (int i = 0; i < 4; i++)
  {
    printf("%d", iMatriz1[i/2][i%2] + iMatriz2[i/2][i%2]);
  }
  
}

void subtractMatrix(int iCol, int iRow, int iMatriz1[iRow][iCol], int iMatriz2[iRow][iCol])
{
  for (int i = 0; i < 4; i++)
  {
    printf("%d", iMatriz1[i/2][i%2] - iMatriz2[i/2][i%2]);
  }
}

int main(int argc, const char * argv[]) {
  
  int iMatriz1[2][2];
  int iMatriz2[2][2];
  
  for (int i = 0; i < 4; i++)
    scanf("%d", &iMatriz1[i/2][i%2]);
  
  for (int i = 0; i < 4; i++)
    scanf("%d", &iMatriz2[i/2][i%2]);
  
  addMatrix(2, 2, iMatriz1, iMatriz2);
  puts("");
  subtractMatrix(2, 2, iMatriz1, iMatriz2);
  puts("");
  multiplyMatrix(2, 2, iMatriz1, iMatriz2);

  return 0;
}
