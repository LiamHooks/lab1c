//mlj5382@psu.edu
//sqj5386@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temp = (readline("Enter temperature in celsius: "));
  double dblTemp = strtod(temp, NULL);
  double convert = ((dblTemp * 1.8) + 32);
  
}