#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[]) {

  double altura, base, area;
  
  printf("Insira a base do triângulo-> ");
  scanf("%lf",&base);
  printf("Insira a altura do triângulo-> ");
  scanf("%lf",&altura);
  area = (base*altura)/2;
  printf("A área é: %.2lf\n",area);
  

  return EXIT_SUCCESS;
  
}