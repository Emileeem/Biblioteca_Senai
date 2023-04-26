#ifndef CADASTRAR_H_INCLUDED
#define CADASTRAR_H_INCLUDED

void Cadastrar()
{
  system("clear");
  char titulo[99], autor[99], genero[99], livro[99], ano[4], a[2];
  puts("    Cadastro de Novos Livros\n");
  printf("Título do livro: ");
  fgets(titulo, 99, stdin);
  int pos = strcspn(titulo, "\n"); 
  titulo[pos] = '\0';
  printf("Autor do livro: ");
  fgets(autor, 99, stdin);
  pos = strcspn(autor, "\n"); 
  autor[pos] = '\0';
  printf("Ano do livro: ");
  scanf("%s", &ano);
  fgets(a,2,stdin);
  // printf("Editora do livro: ");
  printf("Gênero do livro: ");
  fgets(genero, 99, stdin);
  pos = strcspn(genero, "\n"); 
  genero[pos] = '\0';
  FILE *arquivo;
  arquivo = fopen("livros.txt", "a");
  fprintf(arquivo, "%s;%s;%s;%s;\n", titulo, autor, ano, genero);
  fclose(arquivo);
}

#endif