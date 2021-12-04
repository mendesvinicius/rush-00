#include "ft_putchar.c"
#include <stdio.h>

void rush(int x, int y) {
  char Caracter[3] = {'A', 'B', 'C'};
  int contadorLinha = 1;
  int contadorX;
  while (contadorLinha <= y) {
    contadorX = 1;
    while (contadorX <= x) { 
        if (contadorX == 1 && (contadorLinha == 1 || contadorLinha == y)) {
                ft_putchar(Caracter[0]);
      } else if (contadorX == x && (contadorLinha == 1 || contadorLinha == y)) {
        ft_putchar(Caracter[2]);
      } else if (contadorX == 1 || contadorX == x || contadorLinha == 1 || contadorLinha == y) {
        ft_putchar(Caracter[1]);
      } else {
        ft_putchar(' ');
      }
      ++contadorX;
    }
    ft_putchar('\n');
    ++contadorLinha;
  }
}