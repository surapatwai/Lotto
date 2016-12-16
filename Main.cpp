
#include <iostream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
int main()
{
  srand (time(NULL));
  int first = rand() % 1000000;
  int last2 = rand() % 100;
  int last3 = rand()%1000;

  std::cout << first << std::endl;
  std::cout<< last2 << std::endl;
  std::cout<< last3 << std::endl;
  
}
