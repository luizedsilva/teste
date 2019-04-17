#include <stdio.h>


int main (void) {
  int i;
  for (i = 0; i < 10; i++) {
    printf ("%d x %d = %d\n", i, i, i*i);
  }
}
