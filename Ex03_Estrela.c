// 3º Jogo da Estrela 

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int magico, n1, teste, teste2, tent = 0;
    srand(time(NULL));

    magico = (rand() % 97 + 32);

    printf("%i Bem vindo ao jogo da estrela ", magico);

    while (n1 != magico)
    {
        printf("\nDigite o numero: ");
        scanf("%d", &n1);

        tent++;

        teste = n1 - magico;
        teste2 = magico - n1;

        if (n1 == magico)
            printf("Acertou na Tentativa%i", tent);
        else if ((teste >= 64) || (teste2 >= 64))
            printf("*");

        else if ((teste >= 32) || (teste2 >= 32))
            printf("**");
            
        else if ((teste >= 16) || (teste2 >= 16))
            printf("***");

        else if ((teste >= 8) || (teste2 >= 8))
            printf("****");

        else if ((teste >= 4) || (teste2 >= 4))
            printf("*****");

        else if ((teste >= 2) || (teste2 >= 2))
            printf("******");

        else if ((teste >= 1) || (teste2 >= 1))
            printf("*******");
    }

    return 0;
}