#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(void) {

  char limpa[2];
  int i, j, op, quantidade = 0;
  int flagCadastro = 1,flagAdm = 1;
  char titulo[99], autor[99], genero[99], livro[99], ano[4],sinopse[800];
  START:

  setlocale(LC_ALL,"Portuguese");

  while(flagCadastro != 0)
  {
            system("cls");
            puts("                   |==========================|                  \n"
                 " |=================| Cadastro de novos livros |=================|\n"
                 "                   |==========================|                  \n"
                 "                                                                 \n");
            printf("   Titulo do livro: ");
            fgets(titulo, 99, stdin);
            int pos = strcspn(titulo, "\n");
            titulo[pos] = '\0';
            printf("   Autor do livro: ");
            fgets(autor, 99, stdin);
            pos = strcspn(autor, "\n");
            autor[pos] = '\0';
            printf("   Ano do livro: ");
            scanf("%s", &ano);
            fgets(limpa, 2, stdin);
            // printf("Editora do livro: ");
            printf("   Genero do livro: ");
            fgets(genero, 99, stdin);
            pos = strcspn(genero, "\n");
            genero[pos] = '\0';
            printf("   Sinopse do livro: ");
            fgets(sinopse, 800, stdin);
            pos = strcspn(sinopse, "\n");
            sinopse[pos] = '\0';
            system("cls");
            FILE *arquivo;
            arquivo = fopen("livros.txt", "a");
            fprintf(arquivo, "%s;%s;%s;%s;%s;Disponível\n", titulo, autor, ano, genero, sinopse);
            printf("\n");
            fclose(arquivo);
            printf("|===========================================================================|\n");
            printf("|                                                                           |\n");
            printf("|                  Seu livro foi cadastrado com sussesso!!                  |\n");
            printf("|                                                                           |\n");
            printf("|===========================================================================|\n");
            printf("\n   Titulo: %s", titulo);
            printf("   Autor: %s", autor);
            printf("\n   Genero: %s", genero);
            printf("   Ano: %s", ano);
            printf("\n\n   Sinopse: %s\n\n   ", sinopse);
            //Volta para a pagina anterior
            system("pause");
            flagCadastro = 0;
            system("cls");
        }
}



