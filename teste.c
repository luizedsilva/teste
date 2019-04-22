// Acrescentado um comentario
#include <stdio.h>

int main (void) {
  int i;
  puts ("uma tabela de quadrados");
  for (i = 0; i < 10; i++) {
    printf ("%d x %d = %d\n", i, i, i*i);
  }
  puts("fim do programa!");
}
