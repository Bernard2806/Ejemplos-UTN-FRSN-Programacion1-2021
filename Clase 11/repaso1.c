#include <stdio.h>


int main(int argc, char const *argv[])
{
  
  float division = 0;
  int num1 = 100; 
  int num2 = 3; 

  division = num1 / num2; 
  printf("division: %.2f\n", division); // 33.00

  // casteo 
  division = (float) num1 / num2; 
  printf("division: %.2f\n", division); // 33.33

  return 0;
}
