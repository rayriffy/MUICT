#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a;
  printf ("Input n: ");
  scanf ("%d", &a);
  a = (a + 1) / 2; // CALC ROW
  for (int i = 1 ; i <= a ; i++) {
    int k = 0;
    // SPACE
    for (int j = 0 ; j <= a - i ; j++) {
      printf (" ");
    }
    // STAR
    while (k != 2 * i - 1)  {
      printf ("*");
      k++;
    }
    printf ("\n");
  }
  return 0;
}
