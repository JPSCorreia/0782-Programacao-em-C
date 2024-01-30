#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[]) {

  /* code */
  int numero;
  printf("Insira um numero: ");
  scanf("%d",&numero);
  printf("%d\n", numero%2);
  

  return EXIT_SUCCESS;
}