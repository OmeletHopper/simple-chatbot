#include <main.hpp>

int main()
{
  printf("Hello!\n");
  while(1) {
    fgets(line, MAX_LENGTH, stdin);
    for(int i = 0; line[i]; i++)
    {
      line[i] = tolower(line[i]);
    }
    printf("%s", Output(line));
    }
 return 0;
}
