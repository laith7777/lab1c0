// Author: Laith Hayajneh lbh5303@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int main(void) {
  char *tempstr = readline("Enter temperature in celsius: ");
  double temp = atof(tempstr);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp,((9/5) * celsius) + 32; );
  return 0;
}