// Author: Laith Hayajneh lbh5303@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
  char *temp_str = readline("Enter temperature in celsius: ");
  double temp = atof(temp_str);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp, 101.30);
  return 0;
}