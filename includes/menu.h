void printMenu()
{
  puts("\t FAMM ");
  puts("Field Agent Management Menu");
  puts("+++++++++++++++++++++++++++");
  puts("");
  puts(" What would you like to do");
  puts("1) Create an Agent. ");
  puts("2) Edit an Agent. ");
  puts("3) View Agents. ");
  puts("4) Exit. ");
}



void mainSelection(int answer)
{
  switch(answer)
  {
    case 1:
      createAgent();
      break;
    case 2:
      editAgent();
      break;
    case 3:
      viewAgents();
      break;
    case 4:
      exit(0);
      break;
    default:
      exit(0);
  }

}