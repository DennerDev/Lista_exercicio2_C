// 4º Jogo da Memoría

#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h>   // srand(time(NULL))
#include <unistd.h> // limpa tela e sleep
int main(void)
{
    srand(time(NULL));
    int x1, x2, x3, x4;
    int n1, n2, n3, n4;
    int vidas = 3;
    int soma = 0;

    while (vidas > 0)
    {
        soma = 0;
        x1 = rand() % 51; // restos de 0 até 50
        x2 = rand() % 51; // restos de 0 até 50
        x3 = rand() % 51; // restos de 0 até 50
        x4 = rand() % 51; // restos de 0 até 50

        system("clear");  // system("cls");
        printf("MEMORIZANDO.....");

        printf("\n%d \t %d \t %d \t %d", x1, x2, x3, x4);
        printf("\n");
        sleep(5);

        system("clear"); // system("cls");
        printf("Agora é sua vez.....");

        printf("\nDigite os números apresentados na sequência correta\n\n");

        printf("Digite o 1º número: ");
        scanf("%d", &n1);

        printf("Digite o 2º número: ");
        scanf("%d", &n2);

        printf("Digite o 3º número: ");
        scanf("%d", &n3);

        printf("Digite o 4º número: ");
        scanf("%d", &n4);

        if (x1 == n1)
            soma++;
        if (x2 == n2)
            soma++;
        if (x3 == n3)
            soma++;
        if (x4 == n4)
            soma++;
        if (soma == 4)
        {
            vidas = vidas + 2;
            printf("\n\nParabéns!!! Vc acertou TODOS os números");
            printf("\nVc ganhou 2 vidas");

            printf("\nAgora, vc tem %d vidas", vidas);

            printf("\nPressione uma tecla para continuar\n");

            getchar();
            getchar();
        }
        if (soma == 3)
        {
            vidas = vidas + 1;
            printf("\n\nParabéns!!! Vc acertou 3 números");

            printf("\nVc ganhou 1 vidas");

            printf("\nAgora, vc tem %d vidas", vidas);

            printf("\nPressione uma tecla para continuar\n");

            getchar();
            getchar();
        }
        if (soma == 2)
        {
            printf("\n\nVc acertou 2 números");

            printf("\no jogador não ganhará nem perderá vidas");

            printf("\nAgora, vc tem %d vidas", vidas);

            printf("\nPressione uma tecla para continuar: ");

            getchar();
            getchar();
        }
        if (soma == 1)
        {
            vidas--;
            printf("\n\nVc acertou 1 número");
            printf("\no jogador perderá 1 vida");
            printf("\nAgora, vc tem %d vidas", vidas);
            printf("\nPressione uma tecla para continuar: ");

            getchar();
            getchar();
        }
        if (soma == 0)
        {
            vidas = 0;
            printf("\n\nQue pena!!! Vc errou TODOS os números");
            printf("\nXiiiiii, vc perdeu suas vidas");
            printf("\nGAME OVER");
            printf("\nPressione uma tecla para continuar\n");
            
            getchar();
            getchar();
        }
    } // fim while
    return 0;
}