// 2º ARMADILHA

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    int magic, n1, n2, tent = 0;

    srand(time(NULL));

    magic = (rand() % 100) + 1;
    printf("%i descubra um numero de 1 a 100 digitando\ndois numeros ate chegar no numero correto", magic);

    while (n1 != magic || n2 != magic)
        {
            printf("\n\ndigite o primeiro numero: ");
            scanf("%i", &n1);

            tent++;

            printf("digite o primeiro numero: ");
            scanf("%i", &n2);
            if (n1 == magic && n2 == magic)
                printf("\nACERTOU!!!\nVoce conseguiu na Tentativa %i ", tent);

            else if ((n1 <= magic && n2 >= magic) || (n1 >= magic && n2 <= magic))
                printf("\nSim esta entre eles! ");

            else
                printf("\nNao esta entre eles! ");
        }
        return 0;
    }