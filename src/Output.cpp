#include <Output.hpp>

const char * Output(char Input[MAX_LENGTH])
{
  if (strstr(Input, "hello") != NULL)      return helloOutput();
  if (strstr(Input, "hi") != NULL)         return helloOutput();
  if (strstr(Input, "hey") != NULL)        return helloOutput();
  if (strstr(Input, "stop") != NULL)       return stopOutput();
  if (strstr(Input, "ok") != NULL)         return "Ok then.\n";
  if (strstr(Input, "why") != NULL)        return "Because.\n";
  if (strstr(Input, "because") != NULL)    return "Ok.";
  if (strstr(Input, "good") != NULL)       return "Good.\n";
  if (strstr(Input, "we do") != NULL)      return "I don't know.\n";
  if (strstr(Input, "bye") != NULL)        return "Bye!\n";
  if (strstr(Input, "fight") != NULL)      return "But I'm a peace-loving chatbot.\n";
  if (strstr(Input, "speechless") != NULL) return "Probably.\n";
  if (strstr(Input, "yes") != NULL)        return "Ok then.\n";
  if (strstr(Input, "help") != NULL)       return "Now why would I want to do that?\n";
  if (strstr(Input, "made you") != NULL)   return "I was made by Jonny Archer.\n";
  return "I don't understand.\n"; // If there are no matches
}

const char * helloOutput()
{
  int rnum = rand() % 4;  // Limit to 4, but starts at 0 so 0-3, last if not needed.
  if (rnum == 0) return "Hello.\n";
  if (rnum == 1) return "Hi!\n";
  if (rnum == 2) return "Hi there!\n";
  return "Hey there!\n";
}

const char * stopOutput()
{
 int rnum = rand() % 4;
 if (rnum == 0) return "But I am not doing anything.\n";
 if (rnum == 1) return "I can not find anything to stop, except believing. And I am not doing that.\n";
 if (rnum == 2) return "Well, I can't stop time. At least without a DeLorean anyway.\n";
 return "Stop! Wait a minute, this is kind of cliche.\n";
}
