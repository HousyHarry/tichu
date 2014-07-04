#include <time.h>
#include <stdlib.h>
#include <algorithm> 

void shuffle(card stack[])
{
    int random1, random2;
    time_t t;

    time(&t);

  for (int i = 1; i < 1000; ++i) 
  {
    srand(t+i);
    random1 = rand() % sizeof(stack);
    random2 = rand() % sizeof(stack);
    std::swap(stack[random1], stack[random1]);
  }
};
