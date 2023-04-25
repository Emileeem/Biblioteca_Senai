#include <stdio.h>
#include <string.h>

int main(void) {

  // CPFs dos administradores
  char cpf1[11] = {"12345678912"};
  char cpf2[11] = {"98765432198"};
  char cpf3[11] = {"32165498732"};
  char cpfInserido[20];
  int i, j, op;
  
  printf("           ╔═════════╗          \n"
         " ╔═════════╣   Cpf   ╠═════════╗\n"
         "           ╚═════════╝          \n"
         "                                \n"
         "   Insira seu CPF: ");      
  scanf("%s", cpfInserido);

  // Validação dos CPFs (Administradores ou Clientes)
  if((strcmp(cpfInserido, cpf1) == 0) || 
     (strcmp(cpfInserido, cpf2) == 0) ||
     (strcmp(cpfInserido, cpf3) == 0))
  {
    system("clear");
    printf("                  ╔════════════════════╗                  \n"
           "╔═════════════════║ Menu Administrador ║═════════════════╗\n"
           "║                 ╚════════════════════╝                 ║\n"
           "║                                                        ║\n"
           "║ Digite < 1 > para cadastrar um livro.                  ║\n"
           "║ Digite < 2 > para verificar os dados da biblioteca.    ║\n"
           "╚════════════════════════════════════════════════════════╝\n"
  );
  }
  else
  { 
    system("clear");
    printf("                   ╔══════════════╗                     \n"
           "╔══════════════════║ Menu Cliente ║════════════════════╗\n"
           "║                  ╚══════════════╝                    ║\n"
           "║                                                      ║\n"
           "║ Digite < 1 > para entrar na aba de pesquisa.         ║\n"
           "║ Digite < 2 > se ainda está em dúvida do que ler.     ║\n"
           "╚══════════════════════════════════════════════════════╝\n"
  );
  }
  
  return 0;
}