void printAgent(struct Agent agent)
{
  printf("Agent Name: %s \n", agent.name);
  printf("Agent Lastname: %s \n", agent.lastName);
  printf("Agent Mission: %s \n", agent.mission);
  printf("Agent Gender: %c \n", agent.gender);
  printf("Agent Age: %d \n", agent.age);
  for(int i = 0; i < agent.assetCounter; i++)
  {
    puts("Agent\'s Assets: '");
    printf("Name: %s \n", agent.assets[i].name);
    printf("Lastname: %s \n", agent.assets[i].lastname);
    printf("ID: %s \n", agent.assets[i].id);
  }
  puts("------------------");
}

void viewAgents()
{
  for(int i = 0; i < AGENTCOUNTER; i++)
    printAgent(agentArray[i]);
}
