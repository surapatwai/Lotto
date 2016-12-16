
#include <iostream>
#include <string>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     
#include <time.h>
int main()
{
  srand (time(NULL));
  int N9 = rand() % 100000;
  N9= N9*10+9;


  std::cout << N9 << std::endl;

  
}
