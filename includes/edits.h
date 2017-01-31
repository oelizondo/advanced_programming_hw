
void printEditMenu()
{
  puts("What do you want to edit?");
  puts("1) Name. ");
  puts("2) Lastname. ");
  puts("3) Gender. ");
  puts("4) Mission. ");
  puts("5) Age. ");
  puts("6) Assets. ");
  puts("7) exit. ");
}

void printAssetEditMenu()
{
  puts("What do you want to edit?");
  puts("1) Name. ");
  puts("2) Lastname. ");
  puts("3) ID");
  puts("4) exit");
}

void editAssetFeature(int answer)
{
  switch(answer)
  {
  }  
}

void editName(struct Agent *currentAgentPointer)
{
    char name[50];
    puts("New name: ");
    scanf("%s", name);
    strcpy(currentAgentPointer->name, name);
}

void editLastName(struct Agent *currentAgentPointer)
{
    char lastName[50];
    puts("New lastName: ");
    scanf("%s", lastName);
    strcpy(currentAgentPointer->lastName, lastName);
}

void editGender(struct Agent *currentAgentPointer)
{
    char gender = '\0';
    puts("New gender: ");
    scanf("%s", &gender);
    currentAgentPointer->gender = gender;
}

void editMission(struct Agent *currentAgentPointer)
{
    char mission[50];
    puts("New mission: ");
    scanf("%s", mission);
    strcpy(currentAgentPointer->mission, mission);
}

void editAge(struct Agent *currentAgentPointer)
{
    int age;
    puts("New age: ");
    scanf("%d", &age);
    currentAgentPointer->age = age;
}

void editAssets(struct Agent *currentAgentPointer)
{
  char id[50];
  puts("Type ID of asset to edit: ");
  scanf("%s", id);

  for(int i = 0; i < currentAgentPointer->assetCounter; i++)
  {
    if(strcmp(currentAgentPointer->assets[i].id, id) == 0)
    {
      currentAgentPointer = &agentArray[i];
      printEditMenu();
      int answer;
      scanf("%d", &answer);
      editAssetFeature(answer);
    }
  }   
}

void editSelection(int answer, struct Agent *currentAgentPointer)
{
  switch(answer)
  {
    case 1:
      editName(currentAgentPointer);
      break;
    case 2:
      editLastName(currentAgentPointer);
      break;
    case 3:
      editGender(currentAgentPointer);
      break;
    case 4:
      editMission(currentAgentPointer);
      break;
    case 5:
      editAge(currentAgentPointer);
      break;
    case 6:
      editAssets(currentAgentPointer);
      break;
    case 7:
      break;
    default:
      break;
  }  
}

void editAgent()
{
  char name[50];
  char mission[50];
  struct Agent *currentAgentPointer;

  puts("Type name of Agent to edit: ");
  scanf("%s", name);
  puts("Type the mission of the Agent edit: ");
  scanf("%s", mission);

  for(int i = 0; i < AGENTCOUNTER; i++)
  {
    if(strcmp(agentArray[i].name, name) == 0 && strcmp(agentArray[i].mission,mission) == 0)
    {
      currentAgentPointer = &agentArray[i];
      printEditMenu();
      int answer;
      scanf("%d", &answer);
      editSelection(answer, currentAgentPointer);
    }
  }
}