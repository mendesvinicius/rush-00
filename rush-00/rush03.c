#include <stdio.h>
#include "ft_putchar.c"

void rush(int x, int y)
{
    char Caracter[3] = {'A', 'B', 'C'};

    int contadorLinha = 1;
    int contadorX;
    int contadorY;

    while (contadorLinha <= y)
    {
        if (contadorLinha != 1 && contadorLinha != y)
        {   
            contadorY = 1;
            while (contadorY <= x)
            {
                if (contadorY == 1 || contadorY == x)
                {
                    ft_putchar(Caracter[1]);
                }
                else
                {
                    ft_putchar(' ');
                }
                ++contadorY;
            }
        }
        else
        {  
            contadorX = 1;
            while (contadorX <= x)
            {
                if (contadorX == 1)
                {
                    ft_putchar(Caracter[0]);
                }
                else if (contadorX == x)
                {
                    ft_putchar(Caracter[2]);
                }
                else
                {
                    ft_putchar(Caracter[1]);
                }
                ++contadorX;
            }
        }
        ft_putchar('\n');
        ++contadorLinha;
    }
}