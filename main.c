// Author: Laith Hayajneh lbh5303@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int main(void) {
  char *tempstr = readline("Enter tempretur in celsius: ");
  double temp = atof(tempstr);
  printf("%f° in Celsius is equivalent to %d° Fahrenheit.\n", temp, 100000);
  return 0;
}