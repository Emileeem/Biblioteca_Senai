#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main (void)
{
    int opcao = 0, i, contador_print=0;
    int flagAdm = 0,flagDados = 1;
    const unsigned MAXIMO = 2000;
    char limpa[2];
    char * emprestar;
    char * possui;
    char * filename = "livros.txt";
    char * verifica_status;
    char * print_sinopse;
    while(flagDados != 0)
        {
            setlocale(LC_ALL,"Portuguese");
            //system("chcp 65001");
            char procurado[99], procuradocpy[99], livro[MAXIMO], detalhes[MAXIMO];
            int posicao, escolha, achados = 0;
            int tamanhotxt = 0;

            FILE *arquivo = fopen(filename, "r");
            while (fgets(livro, MAXIMO, arquivo) != NULL)
            {
                tamanhotxt++;
            }
            fclose(arquivo);

            char titulos [tamanhotxt][100];
            char autores [tamanhotxt][100];
            char anos [tamanhotxt][100];
            char generos [tamanhotxt][100];
            char sinopses [tamanhotxt][2000];
            char status [tamanhotxt][20];

            arquivo = fopen(filename, "r");
            while (fgets(livro, MAXIMO, arquivo) != NULL)
            {
                        strcpy(titulos[achados], strtok(livro,";"));
                            strtok(NULL,";");
                            strtok(NULL,";");
                            strtok(NULL,";");
                            strtok(NULL,";");
                            strcpy(status[achados], strtok(NULL,";"));
              achados++;
            }
            fclose(arquivo);
          printf("Nº\t%-10sTítulo\t%-73sStatus\n","","");
                    for(i=0; i!=achados; i++)
                        {
                            printf("%d\t%-90s\t%-80s\n",i+1,titulos[i], status[i]);
                        }
                            printf("\n\t\t\t\t\t\t\t\t\tDigite < 0 > para voltar ao menu.");
                            puts("\n");
                            scanf("%d", &escolha);
                            switch(escolha)
                            {
                                case 0:
                                    system("cls");
                                    //system("menuAdm.exe");
                                    flagDados = 0;
                                    break;
                                default:
                                    break;
                }
        }
}
