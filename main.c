#include <stdio.h>

int main() {
  //EXERCÍCIO 1
  int n = 8;
  
  printf("Exercício 1\n\n");
  printf("A variável n é iniciada com o valor: %d\n", n);
  
  int *p_n = &n;
  *p_n = 0;
  
  printf("Após manipulação com o ponteiro, a variável n se tornou: %d\n\n", n);
  //EXERCÍCIO 2
  
  int x = 8, y = 2; 
  
  printf("Exercício 2\n\n");
  printf("As variáveis x e y são iniciadas com o valor: %d e %d respectivamente\n", x, y);
  
  int *p_x = &x;
  *p_x = y;
  
  printf("Após manipulação com o ponteiro, o valor das variáveis são: x = %d e y = %d\n\n", x, y);

    //EXERCÍCIO 3

  int a = 8, b = 2; 
  
  printf("Exercício 3\n\n");
  printf("As variáveis a e b são iniciadas com o valor: %d e %d respectivamente\n", a, b);
  
  int *p_a = &a;
  int temp;
  temp = *p_a;
  *p_a = b;
  p_a = &b;
  *p_a = temp;
  
  printf("Após manipulação com o ponteiro, o valor das variáveis são: a = %d e b = %d\n\n", a, b);
  return 0;
}