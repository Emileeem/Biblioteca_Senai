#include <stdio.h>
#include <locale.h>
#include <time.h>

main(){

    int op,flagAdm=1;

    setlocale(LC_ALL,"Portuguese");

    while(flagAdm!=0){ ///menu inicial
   printf("|=========================================================|\n");
        printf("|                                                         |\n");
        printf("|                  Menu de Administradores                |\n");
        printf("|                                                         |\n");
        printf("|=========================================================|\n");
        printf("|                                                         |\n");
        printf("|   Digite < 1 > para cadastrar um livro.                 |\n");
        printf("|                                                         |\n");
        printf("|   Digite < 2 > para verificar os dados da biblioteca.   |\n");
        printf("|                                                         |\n");
        printf("|   Digite < 0 > para sair.                               |\n");
        printf("|                                                         |\n");
        printf("|=================== DIGITE A SUA OPÇÃO ==================|\n\n> ");
        scanf("%d",&op);
        system("cls");

    switch(op){ /// Interação com o menu

    case 0: ///Finalizar Programa
    flagAdm=0;
    printf("Programa finalizado.");
    break;

    case 1: /// Produtos
        system("cadastro.exe");
    break;

    case 2: /// Produtos
    system("dados.exe");
    break;


    default:
    printf("erro no programs");
    sleep(2);
    break;




}
}
}




























