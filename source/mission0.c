// Oscar Elizondo
// Mon Jan 16 17:14:48 CST 2017

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int AGENTCOUNTER = 0;

#include "../includes/asset.h"
#include "../includes/agent.h"
#include "../includes/creates.h"
#include "./display.c"
#include "../includes/prints.h"
#include "../includes/edits.h"
#include "../includes/menu.h"

int main(int argc, char *argv[])
{
  int answer;

  while(1)
  {
    printMenu();
    scanf("%d", &answer);
    mainSelection(answer);
  }
  return 0;
}
