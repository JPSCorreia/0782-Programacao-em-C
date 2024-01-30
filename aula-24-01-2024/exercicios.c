
#include <stdio.h>
int main(int argc, char const *argv[0]) {
  
  // exemplo professor variáveis
  int a;
  a=9;
  int b=10;
  
  // exercicio 4 variáveis
  int exer4_inteiro;
  float exer4_float;
  double exer4_double;
  char exer4_char;
  
  // exercicio 1
  puts("");
  puts("exercicio 1:");
  puts("João Correia"); 
  
  
  // exercicio 2
  puts("");
  puts("exercicio 2:");
  puts("*****"); 
  puts("****"); 
  puts("***"); 
  puts("**"); 
  puts("*"); 
  puts("");
  printf("*****\n****\n***\n**\n*\n");
  
  // exemplo professor
  puts("");
  puts("exemplo professor:");
  printf("Valor de a=%d\nValor de b=%d\n", a,b);
  printf("Tamanho de a=%ld bytes\nTamanho de b=%lu bytes\n", sizeof(a), sizeof(b));
  
  // exercicio 3
  puts("");
  puts("exercicio 3:");
  printf("Tamanho de inteiro=%ld bytes\nTamanho de float=%ld bytes\nTamanho de double=%ld bytes\nTamanho de char=%ld bytes",sizeof(exer4_inteiro), sizeof(exer4_float), sizeof(exer4_double), sizeof(exer4_char));
  
  return 0;
}
