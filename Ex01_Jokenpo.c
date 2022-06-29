// 1º PEDRA, PAPEL E TESOURA (JOKENPÔ)

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int magic, num;
    srand(time(NULL));
    magic = rand() % 3;
    char sn = 's', sn2 = 'n';

    printf("jokenpô ");
    while (sn == 's' || sn == 'S')
    {
        printf("\n\nentao vamos jogar!!!");

        printf("\n0 sera pedra, 1 o papel e o 2 tesoura");

        printf("\njogue contra a maquina, digite <0/1/2>: ");
        scanf("%i", &num);

        if (num == magic)
            printf("\nEmpate! Ninguem ganhou a maquina jogou %i", magic);
        else if ((num == 0 && magic == 2) || (num == 1 && magic == 0) || (num == 2 && magic == 1))
            printf("\nJogador ganhou a maquina jogou %i", magic);
        else if (num != 1 && num != 0 && num != 2)
            printf("\nopção invalida");
        else
            printf("\nComputador ganhou a maquina jogou %i", magic);
            
        printf("\nVoce quer jogar divono ? Digite <S/s> para continuar\nou aperte qualquer tecla para sair: ");
        scanf("%s", &sn);
        if (sn != 's' && sn != 'S')
        {
            printf("\nObrigado por jogar, volte sempre!");
        }
    }
    return 0;
}