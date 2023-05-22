#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL,"Portuguese");
  char limpa[2];
  int i, j, op, flagCliente = 1;

  while(flagCliente != 0)
  {
        system("cls");
        printf("|=========================================================|\n");
        printf("|                                                         |\n");
        printf("|                     Menu de Clientes                    |\n");
        printf("|                                                         |\n");
        printf("|=========================================================|\n");
        printf("|                                                         |\n");
        printf("|   Digite < 1 > para entrar na aba de pesquisa.          |\n");
        printf("|                                                         |\n");
        printf("|   Digite < 2 > se ainda esta em duvida do que ler.      |\n");
        printf("|                                                         |\n");
        printf("|   Digite < 0 > para sair.                               |\n");
        printf("|                                                         |\n");
        printf("|=================== DIGITE A SUA OPÇÃO ==================|\n\n> ");
        scanf("%d", &op);

        switch(op)
        {
            case 0:
                system("cls");
                printf("Programa finalizado.");
                flagCliente=0;
            break;

            case 1:
                system("cls");
                system("pesquisa.exe");
            break;

            case 2:
                system("cls");
                system("quiz.exe");
            break;
        }
    break;

   return 0;
  }
}

