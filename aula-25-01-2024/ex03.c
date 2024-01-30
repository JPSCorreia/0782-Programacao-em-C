#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[]) {

  /* code */
  int lado;
  printf("Insira um lado: ");
  scanf("%d",&lado);
  printf("o quadrado tem uma area de: %d\n", lado*lado);
  

  return EXIT_SUCCESS;
}