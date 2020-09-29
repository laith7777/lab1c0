// Author: Laith Hayajneh lbh5303@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
  char *tempC_str = readline("Enter temperature in celsius: ");
  char *tempF_str = readline("Enter temperature in Fahrenheit: ");
  double temp = atof(tempF_str);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp, 212.0);
  return 0;
}