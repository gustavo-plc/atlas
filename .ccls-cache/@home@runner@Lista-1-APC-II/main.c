#include <stdio.h>

int main() {
  int n = 8;
  printf("A variável n é iniciada com o valor: %d\n", n);
  int *p_n = &n;
  *p_n = 0;
  printf("Após manipulação com o ponteiro, a variável n se tornou: %d\n", n);
  
  return 0;
}