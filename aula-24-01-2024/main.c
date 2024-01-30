// comentário
/*
  comentário 
  multilinha 
*/

#include <stdio.h>
int main(int argc, char const *argv[0]) {
  
  // puts escreve no ecran e da uma linha, printf não
  puts("Hello, World 1!"); // Put String (da logo um enter)
  printf("Hello, World 2!"); // printf (não da logo um enter, é preciso o newline character /n no fim)
  puts("Hello, World 3!");
  
  int n=50;
  printf("Um inteiro: %d, outro inteiro: %d\n", n, 7-4);
  
  return 0;
}