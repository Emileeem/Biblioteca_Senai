#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL,"Portuguese");
  // CPFs dos administradores
  system("color 0f");
  char cpf1[12] = {"12345678912"};
  char cpf2[12] = {"98765432198"};
  char cpf3[12] = {"32165498732"};
  char cpfInserido[20], limpa[2];
  int i, j, selecaoAdm, selecaoCliente, op, flagMain = 1,flagAdm = 1, FlagCadastro = 1;

  while(flagMain != 0)
  {
    printf("|=======================================|\n");
    printf("|                                       |\n");
    printf("|          TAFELDROS LIBRARY            |\n");
    printf("|                                       |\n");
    printf("|=======================================|\n");
    printf("                              <0> Sair     \n\n");
    printf("    Insira seu Cpf: ");
    scanf("%s", cpfInserido);

  // Validação dos CPFs (Administradores ou Clientes)
  if ((strcmp(cpfInserido, cpf1) == 0) ||
      (strcmp(cpfInserido, cpf2) == 0) ||
      (strcmp(cpfInserido, cpf3) == 0))
    {
    system("cls");
    system("menuAdm.exe");
    flagMain = 0;
    }
    else
    {
        system("cls");
        system("menuCliente.exe");
        flagMain = 0;
    }

  }
  return 0;
}

