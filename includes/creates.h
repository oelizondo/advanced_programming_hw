struct Asset createAssetWizard()
{
  struct Asset temporalAsset;
  char name[50];
  char lastname[50];
  char id[50];

  puts("\t FAMM ");
  puts("Field Asset Management Menu");
  puts("+++++++++++++++++++++++++++");
  puts("");
  puts(" Creating an Asset");
  puts("Type name: ");
  scanf("%s", name);
  puts("Type lastname: ");
  scanf("%s", lastname);
  puts("Type id: ");
  scanf("%s", id);

  strcpy(temporalAsset.name, name);
  strcpy(temporalAsset.lastname, lastname);
  strcpy(temporalAsset.id, id);

  return temporalAsset;
}


struct Agent createAgentWizard()
{
  struct Agent temporalAgent;
  char name[50];
  char lastname[50];
  char gender = '\0';
  char mission[50];
  int age;

  puts("\t FAMM ");
  puts("Field Agent Management Menu");
  puts("+++++++++++++++++++++++++++");
  puts("");
  puts(" Creating an agent");
  puts("Type name: ");
  scanf("%s", name);
  puts("Type lastname: ");
  scanf("%s", lastname);
  puts("Type age: ");
  scanf("%d", &age);
  puts("Type gender: ");
  scanf("%s", &gender);
  puts("Type mission: ");
  scanf("%s", mission);

  strcpy(temporalAgent.name, name);
  strcpy(temporalAgent.lastName, lastname);
  strcpy(temporalAgent.mission, mission);
  temporalAgent.gender = gender;
  temporalAgent.age = age;

  return temporalAgent;
}

void createAgent()
{
  struct Agent newAgent = createAgentWizard();
  agentArray[AGENTCOUNTER] = newAgent;
  AGENTCOUNTER++;
}
