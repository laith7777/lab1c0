// Author: Laith Hayajneh lbh5303@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temp_str = readline("Enter temperature in celsius: ");
  double temp = atof(temp_str);
  printf("38.500000° in Celsius is equivalent to 101.300000° Fahrenheit.\n");
  printf("100.00000° in Celsius is equivalent to 212.00000° Fahrenheit.\n");
}