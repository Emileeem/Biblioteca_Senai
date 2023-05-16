#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

void devolver( char titulo_para_emprestar [99], int tamanhotxt)
{
    char emprestar_titulos[tamanhotxt][100];
    char emprestar_autores[tamanhotxt][100];
    char emprestar_anos[tamanhotxt][100];
    char emprestar_generos[tamanhotxt][100];
    char emprestar_sinopses[tamanhotxt][2000];
    char emprestar_status[tamanhotxt][20];
    int index_emprestar = 0, i;
    char livro[2000];
    char * filename = "livros.txt";
    char * possui;
    FILE * arquivo = fopen(filename, "r");

    while (fgets(livro, 2000, arquivo) != NULL)
    {
        setlocale(LC_ALL,"Portuguese");
        strcpy(emprestar_titulos[index_emprestar], strtok(livro,";"));
        possui = strstr(emprestar_titulos[index_emprestar], titulo_para_emprestar);
        for (i = 1; i < 6; i++)
            {
                if(i == 1)
                    {
                        strcpy(emprestar_autores[index_emprestar], strtok(NULL,";"));
                    }
                else if(i == 2)
                    {
                        strcpy(emprestar_anos[index_emprestar], strtok(NULL,";"));
                    }
                else if(i == 3)
                    {
                        strcpy(emprestar_generos[index_emprestar], strtok(NULL,";"));
                    }
                else if(i == 4)
                    {
                        strcpy(emprestar_sinopses[index_emprestar], strtok(NULL,";"));
                    }
                else if (i == 5)
                    {
                        strcpy(emprestar_status[index_emprestar],strtok(NULL,";"));
                        if(possui)
                            {
                                strcpy(emprestar_status[index_emprestar],"Disponível\n");
                            }
                    }
            }
        index_emprestar = index_emprestar+1;
    }
    fclose(arquivo);
    arquivo = fopen("livros.txt", "w");
    for(i=0; i!=index_emprestar; i++)
        {
            fprintf(arquivo, "%s;%s;%s;%s;%s;%s", emprestar_titulos[i], emprestar_autores[i], emprestar_anos[i], emprestar_generos[i], emprestar_sinopses[i], emprestar_status[i]);
        }
    fclose(arquivo);
    return;
}

void emprestimo( char titulo_para_emprestar [99], int tamanhotxt)
{
    setlocale(LC_ALL,"Portuguese");
    char emprestar_titulos[tamanhotxt][100];
    char emprestar_autores[tamanhotxt][100];
    char emprestar_anos[tamanhotxt][100];
    char emprestar_generos[tamanhotxt][100];
    char emprestar_sinopses[tamanhotxt][2000];
    char emprestar_status[tamanhotxt][20];
    int index_emprestar = 0, i;
    char livro[2000];
    char * filename = "livros.txt";
    char * possui;
    FILE * arquivo = fopen(filename, "r");

    while (fgets(livro, 2000, arquivo) != NULL)
    {
        strcpy(emprestar_titulos[index_emprestar], strtok(livro,";"));
        possui = strstr(emprestar_titulos[index_emprestar], titulo_para_emprestar);
        for (i = 1; i < 6; i++)
            {
                if(i == 1)
                    {
                        strcpy(emprestar_autores[index_emprestar], strtok(NULL,";"));
                    }
                else if(i == 2)
                    {
                        strcpy(emprestar_anos[index_emprestar], strtok(NULL,";"));
                    }
                else if(i == 3)
                    {
                        strcpy(emprestar_generos[index_emprestar], strtok(NULL,";"));
                    }
                else if(i == 4)
                    {
                        strcpy(emprestar_sinopses[index_emprestar], strtok(NULL,";"));
                    }
                else if (i == 5)
                    {
                        strcpy(emprestar_status[index_emprestar],strtok(NULL,";"));
                        if(possui)
                            {
                                strcpy(emprestar_status[index_emprestar],"Indisponível\n");
                            }
                    }
            }
        index_emprestar = index_emprestar+1;
    }
    fclose(arquivo);
    arquivo = fopen("livros.txt", "w");
    for(i=0; i!=index_emprestar; i++)
        {
            fprintf(arquivo, "%s;%s;%s;%s;%s;%s", emprestar_titulos[i], emprestar_autores[i], emprestar_anos[i], emprestar_generos[i], emprestar_sinopses[i], emprestar_status[i]);
        }
    fclose(arquivo);
    return;
}

int main (void)
{
    int opcao = 0, i, contador_print=0;
    int flagCliente = 1,flagPesquisa = 1;
    const unsigned MAXIMO = 2000;
    char limpa[2];
    char * emprestar;
    char * possui;
    char * filename = "livros.txt";
    char * verifica_status;
    char * print_sinopse;
    START:
    while(flagPesquisa != 0)
        {
            setlocale(LC_ALL,"Portuguese");
            //system("chcp 65001");
            char procurado[99], procuradocpy[99], limpa[2], livro[MAXIMO], detalhes[MAXIMO];
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
            puts("                   |==========================|                  \n"
                 " |=================|     Faça sua pesquisa    |=================|\n"
                 "                   |==========================|                  \n"
                 "                                                                 \n");
            printf(": ");
            fgets(procurado, 99, stdin);

            posicao = strcspn(procurado, "\n");
            procurado[posicao] = '\0';
            strcpy(procuradocpy, procurado);
            for(i = 0; i < strlen(procurado); i++)
            {
                procurado[i] = toupper(procurado[i]);
            }

            while (fgets(livro, MAXIMO, arquivo) != NULL)
            {
                strcpy(detalhes,livro);
                for(i = 0; i < strlen(livro); i++)
                    {
                        detalhes[i] = toupper(detalhes[i]);
                    }

                possui = strstr(detalhes, procurado);
                if (possui)
                    {
                        strcpy(titulos[achados], strtok(livro,";"));
                        for (i = 1; i < 6; i++)
                        {
                            if(i == 1)
                                strcpy(autores[achados], strtok(NULL,";"));
                            if(i == 2)
                                strcpy(anos[achados], strtok(NULL,";"));
                            if(i == 3)
                                strcpy(generos[achados], strtok(NULL,";"));
                            if(i == 4)
                                strcpy(sinopses[achados], strtok(NULL,";"));
                            if(i == 5)
                                strcpy(status[achados], strtok(NULL,";"));
                        }
                        achados ++;
                    }
            }

            fclose(arquivo);
            for(i=1; i<strlen(procurado); i++)
                procurado[i] = tolower(procurado[i]);

            LIVROSACHADOS:

            system("cls");
            printf("Sua pesquisa: %s\n", procuradocpy);

            if (achados == 0)
                {
                    printf("\nPoxa...Sua busca não foi encontrada =/\n");
                    sleep(2);
                    system("cls");
                }

            else
                {
                    for(i=0; i!=achados; i++)
                        {
                            printf("\n%d. %s",i+1,titulos[i]);
                        }
                            printf("\n\n\t\t\t\t\t\t\t\t\tDigite o Número Correspondente do Livro para ver os detalhes.");
                            printf("\n\t\t\t\t\t\t\t\t\tDigite < 0 > para voltar ao menu.");
                            puts("\n");
                            scanf("%d", &escolha);
                            switch(escolha)
                            {
                                case 0:
                                    system("cls");
                                    system("menuCliente.exe");
                                    flagPesquisa = 0;
                                default:
                                    if (escolha > achados)
                                        {
                                            system("cls");
                                            printf("Escolha um livro válido!!\n");
                                            sleep(1);
                                            goto LIVROSACHADOS;
                                        }
                                    else if(escolha != 0)
                                        {
                                            system("cls");
                                            printf("Título: %s    Ano: %s\nAutor: %s    Gênero: %s    Status: %s\n", titulos[escolha-1], anos[escolha-1], autores[escolha-1], generos[escolha-1], status[escolha-1]);
                                            print_sinopse = strtok(sinopses[escolha-1], " ");
                                            while( print_sinopse != NULL ){
                                                        if( contador_print%17 == 0 )
                                                        {
                                                            printf("\n");
                                                        }
                                                        printf("%s ", print_sinopse);
                                                        print_sinopse = strtok(NULL, " ");
                                                        contador_print++;}
                                            verifica_status = strstr(status[escolha-1], "Disponível\n");
                                            if (verifica_status)
                                                {
                                                    printf("\n\n\t\t\t\t\t\t\t\t\tDigite < 0 > para voltar.\n\t\t\t\t\t\t\t\t\tDigite < 1 > para emprestar o livro.\n");
                                                }
                                            else
                                                {
                                                    printf("\n\t\t\t\t\t\t\t\t\tDigite < 0 > para voltar.\n\t\t\t\t\t\t\t\t\tDigite < 1 > para devolver o livro.\n");
                                                }
                                            scanf("%d", &opcao);
                                            switch(opcao)
                                            {
                                                case 0:
                                                    system("cls");
                                                    goto LIVROSACHADOS;
                                                    break;
                                                case 1:
                                                    if (verifica_status)
                                                        {
                                                            emprestimo(titulos[escolha-1], tamanhotxt);
                                                            system("cls");
                                                            printf("Seu livro foi emprestado com sucesso.\n");
                                                        }
                                                    else
                                                        {
                                                            devolver(titulos[escolha-1], tamanhotxt);
                                                            system("cls");
                                                            printf("Seu livro foi devolvido com sucesso.\n");
                                                        }
                                                    sleep(2);
                                                    system("menuCliente.exe");
                                                    flagPesquisa = 0;
                                                    break;
                                            }
                                        }
                            }
                }
        }
}
