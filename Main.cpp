
#include <iostream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
int main()
{
  srand (time(NULL));

  int Lotto = rand() % 1000000;
  std::cout<< Lotto ;
}
