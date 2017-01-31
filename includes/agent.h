struct Agent
{
  char name[20];
  char lastName[20];
  char gender;
  struct Asset assets[100];
  char mission[20];
  int age;
  int assetCounter;
};

struct Agent agentArray[100];