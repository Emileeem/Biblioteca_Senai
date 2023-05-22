#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
    char limpa[2];
    int i, j, op, quantidade = 0;
    int flagQuiz = 1,flagCliente = 1;
    int generos[9];
    int num_Esc;


    setlocale(LC_ALL,"Portuguese");

    while(flagQuiz != 0)
    {
        memset(generos, 0, sizeof(generos));
        //indices de cada genero para melhor localiza��o
        //[0] =  A��o e Aventura
        //[1] =  Classicos
        //[2] =  Com�dia Romantica
        //[3] =  Drama
        //[4] =  Policial
        //[5] =  Suspense e Terror
        //[6] =  Romance
        //[7] =  Fic��o e Fantasia
        //[8] =  Biografia

        system("cls"); //cabe�alho do quiz
        puts("|==============================================================================|");
        puts("|                        Ol�, bem vindo ao nosso Quiz!                         |");
        puts("|==============================================================================|");
        puts("|                                                                              |");
        puts("|   Sinta-se � vontade para responder as perguntas com calma, para que assim   |");
        puts("|   possamos fazer com que voc� descubra o g�nero liter�rio ideal para voc�    |");
        puts("|                                                                              |");
        puts("|==============================================================================|");
        sleep(5);
        system("cls");

        //primeira pergunta
        puts("                   |==========================|                  ");
        puts(" |=================|        Pergunta 1        |=================|");
        puts("                   |==========================|                  \n");

        printf("Entre os filmes abaixo, qual lhe chamou mais aten��o?(Digite o n�mero referente)\n1. Avatar: O Caminho da �gua\n2. Clube da Luta\n3. O Mapa das Pequenas Coisas Perfeitas\n4. Interestelar\n5. O Dia do Atentado\n6. Sorria\n7. A Cinco Passos de Voc�\n8. Harry Potter e a Pedra Filosofal\n9. O Jogo da Imita��o\n: ");
        scanf("%d", &num_Esc);

        if(num_Esc == 1){
            generos[0] +=2;
        }
        else if(num_Esc == 2){
            generos[1] +=2;
        }
        else if(num_Esc == 3){
            generos[2] +=2;
        }
        else if(num_Esc == 4){
            generos[3] +=2;
        }
        else if (num_Esc == 5){
            generos[4] +=2;
        }
        else if (num_Esc == 6){
            generos[5] +=2;
        }
        else if (num_Esc == 7){
            generos[6] +=2;
        }
        else if (num_Esc == 8){
            generos[7] +=2;
        }
        else if (num_Esc == 9){
            generos[8] +=2;
        }

        system("cls"); //segunda pergunta
        puts("                   |==========================|                  ");
        puts(" |=================|        Pergunta 2        |=================|");
        puts("                   |==========================|                  \n");
        printf("Qual o motivo principal de sua leitura?(Digite o n�mero referente)\n1. Para sentir emo��es\n2. Para sentir medo ou curiosidade\n3. Para me distrair desse mundo\n4. Apenas para n�o perder o h�bito\n5. Apenas leio em casos de querer aprender algo\n6. Gosto de me sentir como se investigasse alguma coisa\n7. Consigo me imaginar no livro, fazendo com que ame ler a adrenalina e as aventuras\n8. Adoro uma hist�ria de amor com muitos dramas e reflex�es\n9. Gosto de rir, al�m de me prender a hist�ria\n: ");
        scanf("%d", &num_Esc);

        if (num_Esc == 1)
        {
            generos[3] += 3; //Drama
            generos[6] += 2; //Romance
            generos[2] += 1; //Com�dia Romantica

        }
        else if (num_Esc == 2)
        {
            generos[5] += 3; //Suspense e terror
            generos[4] += 2; //Policial
            generos[7] += 1; //Fic��o e Fantasia
        }
        else if(num_Esc == 3)
        {
            generos[7] += 3; //Fic��o e Fantasia
            generos[0] += 2; //A��o e Aventura
            generos[1] += 1; //Cl�ssicos
        }
        else if(num_Esc == 4)
        {
            generos[1] += 3; //Cl�ssicos
            generos[7] += 2; //Fic��o e Fantasia
            generos[3] += 1; //Drama
        }
        else if(num_Esc == 5)
        {
            generos[8] += 3; //Biografia
            generos[4] += 1; //Policial
        }
        else if(num_Esc == 6)
        {
            generos[4] += 3; //Policial
            generos[5] += 2; //Suspense e terror
            generos[8] += 1; //Biografia
        }
        else if(num_Esc == 7)
        {
            generos[0] += 3; //A��o e Aventura
            generos[2] += 2; //Com�dia Romantica
            generos[5] += 1; //Suspense e terror
        }
        else if(num_Esc == 8)
        {
            generos[6] += 3; //Romance
            generos[3] += 2; //Drama
            generos[0] += 1; //A��o e Aventura
        }
        else if(num_Esc == 9)
        {
            generos[2] += 3; //Com�dia Romantica
            generos[1] += 2; //Cl�ssicos
            generos[6] += 1; //Romance
        }
        system("cls"); // terceira pergunta
        puts("                   |==========================|                  ");
        puts(" |=================|        Pergunta 3        |=================|");
        puts("                   |==========================|                  \n");
        printf("Qual o sentimento que voc� acha que combina mais com voc�?(Digite o n�mero referente)\n1. Ci�ncias e Humor inteligente\n2. Sentimentos e Psicologia\n3. Magia e Sobrenatural\n: ");
        scanf("%d", &num_Esc);

        if(num_Esc == 1)
        {
            generos[8] += 2; //Biografia
            generos[4] += 2; //Policial
            generos[6] += 2; //Romance
        }
        else if(num_Esc == 2)
        {
            generos[3] += 2; //Drama
            generos[2] += 2; //Com�dia Romantica
            generos[5] += 2; //Suspense e terror
        }
        else if(num_Esc == 3)
        {
            generos[7] += 2; //Fic��o e Fantasia
            generos[0] += 2; //A��o e Aventura
            generos[1] += 2; //Cl�ssicos
        }
        //system("cls"); //Resultado:
        system("cls");
        puts("Pronto para o seu resultado?");
        sleep(2);
        system("cls");
        int maior = generos[0];
        int maior2;
        for (int i = 0; i < 9; i++)
        {
           if (generos[i] >= maior)
               {
                   if(generos[i]!= maior)
                    {
                        maior = generos[i];
                    }
                   else
                    {
                        maior2 = generos[i];
                    }

                }
        }

        //Resultado respostas caso seja o genero;

        if(maior == maior2)
        {
            printf("Uau! Os resultados do quiz foram \n");
            if(generos[0] == maior)
            {
                printf("\nParece que voc� gosta de adrenalina e para isso n�s recomendamos o g�nero: A��o e aventura\n");

                if(generos[1] == maior2)
                {
                    printf("\nVoc� � do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Cl�ssicos");
                }
                else if(generos[2] == maior2)
                {
                    printf("\nN�o larga a m�o de uma boa hist�ria de amor e gosta muito de dar risada, n�o �? Seu g�nero do dia �: Com�dia Rom�ntica");
                }
                else if(generos[3] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva � tomar um chocolate quente e ler um livro, que tal o g�nero: Drama");
                }
                else if(generos[4] == maior2)
                {
                    printf("\nAdora um suspense no ar, mas o clima de investiga��o � muito bom para racionalidade, vamos sugerir: Policial");
                }
                else if(generos[5] == maior2)
                {
                    printf("\nUm toque de suspense n�o pode falhar, mas tudo fica ainda melhor quando o terror est� logo ali, que tal o g�nero: Suspense e Terror");
                }
                else if(generos[6] == maior2)
                {
                    printf("\nUma hist�ria bem trabalhada, talvez de �poca � o melhor do que voc� pode pedir hoje, o g�nero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugest�o do dia �: Fic��o e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que n�o seja passado para tr�s, mas tamb�m pode ser considerado muito inteligente por seus pr�ximos, o g�nero escolhido para voc� �: Biografia");
                }
            }
            if(generos[1] == maior)
            {
                if(generos[2] == maior2)
                {
                    printf("\nVoc� � do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Cl�ssicos");

                    printf("\nN�o larga a m�o de uma boa hist�ria de amor e gosta muito de dar risada, n�o �? Seu g�nero do dia �: Com�dia Rom�ntica");
                }
                else if(generos[3] == maior2)
                {
                    printf("\nVoc� � do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Cl�ssicos");

                    printf("\nA melhor coisa para se fazer em um dia de chuva � tomar um chocolate quente e ler um livro, que tal o g�nero: Drama");
                }
                else if(generos[4] == maior2)
                {
                    printf("\nVoc� � do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Cl�ssicos");

                    printf("\nAdora um suspense no ar, mas o clima de investiga��o � muito bom para racionalidade, vamos sugerir: Policial");
                }
                else if(generos[5] == maior2)
                {
                    printf("\nVoc� � do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Cl�ssicos");

                    printf("\nUm toque de suspense n�o pode falhar, mas tudo fica ainda melhor quando o terror est� logo ali, que tal o g�nero: Suspense e Terror");
                }
                else if(generos[6] == maior2)
                {
                    printf("\nVoc� � do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Cl�ssicos");

                    printf("\nUma hist�ria bem trabalhada, talvez de �poca � o melhor do que voc� pode pedir hoje, o g�nero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nVoc� � do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Cl�ssicos");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugest�o do dia �: Fic��o e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nVoc� � do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Cl�ssicos");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que n�o seja passado para tr�s, mas tamb�m pode ser considerado muito inteligente por seus pr�ximos, o g�nero escolhido para voc� �: Biografia");
                }
            }
            if(generos[2] == maior)
            {
                if(generos[3] == maior2)
                {
                    printf("\nN�o larga a m�o de uma boa hist�ria de amor e gosta muito de dar risada, n�o �? Seu g�nero do dia �: Com�dia Rom�ntica");

                    printf("\nA melhor coisa para se fazer em um dia de chuva � tomar um chocolate quente e ler um livro, que tal o g�nero: Drama");
                }
                else if(generos[4] == maior2)
                {
                    printf("\nN�o larga a m�o de uma boa hist�ria de amor e gosta muito de dar risada, n�o �? Seu g�nero do dia �: Com�dia Rom�ntica");

                    printf("\nAdora um suspense no ar, mas o clima de investiga��o � muito bom para racionalidade, vamos sugerir: Policial");
                }
                else if(generos[5] == maior2)
                {
                    printf("\nN�o larga a m�o de uma boa hist�ria de amor e gosta muito de dar risada, n�o �? Seu g�nero do dia �: Com�dia Rom�ntica");

                    printf("\nUm toque de suspense n�o pode falhar, mas tudo fica ainda melhor quando o terror est� logo ali, que tal o g�nero: Suspense e Terror");
                }
                else if(generos[6] == maior2)
                {
                    printf("\nN�o larga a m�o de uma boa hist�ria de amor e gosta muito de dar risada, n�o �? Seu g�nero do dia �: Com�dia Rom�ntica");

                    printf("\nUma hist�ria bem trabalhada, talvez de �poca � o melhor do que voc� pode pedir hoje, o g�nero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nN�o larga a m�o de uma boa hist�ria de amor e gosta muito de dar risada, n�o �? Seu g�nero do dia �: Com�dia Rom�ntica");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugest�o do dia �: Fic��o e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nN�o larga a m�o de uma boa hist�ria de amor e gosta muito de dar risada, n�o �? Seu g�nero do dia �: Com�dia Rom�ntica");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que n�o seja passado para tr�s, mas tamb�m pode ser considerado muito inteligente por seus pr�ximos, o g�nero escolhido para voc� �: Biografia");
                }
            }
            if(generos[3] == maior)
            {
                if(generos[4] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva � tomar um chocolate quente e ler um livro, que tal o g�nero: Drama");

                    printf("\nAdora um suspense no ar, mas o clima de investiga��o � muito bom para racionalidade, vamos sugerir: Policial");
                }
                else if(generos[5] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva � tomar um chocolate quente e ler um livro, que tal o g�nero: Drama");

                    printf("\nUm toque de suspense n�o pode falhar, mas tudo fica ainda melhor quando o terror est� logo ali, que tal o g�nero: Suspense e Terror");
                }
                else if(generos[6] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva � tomar um chocolate quente e ler um livro, que tal o g�nero: Drama");

                    printf("\nUma hist�ria bem trabalhada, talvez de �poca � o melhor do que voc� pode pedir hoje, o g�nero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva � tomar um chocolate quente e ler um livro, que tal o g�nero: Drama");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugest�o do dia �: Fic��o e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva � tomar um chocolate quente e ler um livro, que tal o g�nero: Drama");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que n�o seja passado para tr�s, mas tamb�m pode ser considerado muito inteligente por seus pr�ximos, o g�nero escolhido para voc� �: Biografia");
                }
            }
            if(generos[4] == maior)
            {

                if(generos[5] == maior2)
                {
                    printf("\nAdora um suspense no ar, mas o clima de investiga��o � muito bom para racionalidade, vamos sugerir: Policial");

                    printf("\nUm toque de suspense n�o pode falhar, mas tudo fica ainda melhor quando o terror est� logo ali, que tal o g�nero: Suspense e Terror");
                }
                else if(generos[6] == maior2)
                {
                    printf("\nAdora um suspense no ar, mas o clima de investiga��o � muito bom para racionalidade, vamos sugerir: Policial");

                    printf("\nUma hist�ria bem trabalhada, talvez de �poca � o melhor do que voc� pode pedir hoje, o g�nero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nAdora um suspense no ar, mas o clima de investiga��o � muito bom para racionalidade, vamos sugerir: Policial");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugest�o do dia �: Fic��o e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nAdora um suspense no ar, mas o clima de investiga��o � muito bom para racionalidade, vamos sugerir: Policial");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que n�o seja passado para tr�s, mas tamb�m pode ser considerado muito inteligente por seus pr�ximos, o g�nero escolhido para voc� �: Biografia");
                }
            }
            if(generos[5] == maior)
            {
                if(generos[6] == maior2)
                {
                    printf("\nUm toque de suspense n�o pode falhar, mas tudo fica ainda melhor quando o terror est� logo ali, que tal o g�nero: Suspense e Terror");

                    printf("\nUma hist�ria bem trabalhada, talvez de �poca � o melhor do que voc� pode pedir hoje, o g�nero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nUm toque de suspense n�o pode falhar, mas tudo fica ainda melhor quando o terror est� logo ali, que tal o g�nero: Suspense e Terror");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugest�o do dia �: Fic��o e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nUm toque de suspense n�o pode falhar, mas tudo fica ainda melhor quando o terror est� logo ali, que tal o g�nero: Suspense e Terror");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que n�o seja passado para tr�s, mas tamb�m pode ser considerado muito inteligente por seus pr�ximos, o g�nero escolhido para voc� �: Biografia");
                }
            }
            if(generos[6] == maior)
            {
                if(generos[7] == maior2)
                {
                    printf("\nUma hist�ria bem trabalhada, talvez de �poca � o melhor do que voc� pode pedir hoje, o g�nero que te escolheu foi: Romance");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugest�o do dia �: Fic��o e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nUma hist�ria bem trabalhada, talvez de �poca � o melhor do que voc� pode pedir hoje, o g�nero que te escolheu foi: Romance");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que n�o seja passado para tr�s, mas tamb�m pode ser considerado muito inteligente por seus pr�ximos, o g�nero escolhido para voc� �: Biografia");
                }
            }
            if(generos[7] == maior)
            {
                if(generos[8] == maior2)
                {
                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugest�o do dia �: Fic��o e Fantasia");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que n�o seja passado para tr�s, mas tamb�m pode ser considerado muito inteligente por seus pr�ximos, o g�nero escolhido para voc� �: Biografia");
                }
            }
        }

        if(maior > maior2) //valida��o de apenas um
        {
            if(generos[0] == maior)
            {
                printf("\nParece que voc� gosta de adrenalina e para isso n�s recomendamos o g�nero: A��o e aventura\n");
            }
            else if(generos[1] == maior)
            {
                printf("\nVoc� � do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Cl�ssicos\n");
            }
            else if(generos[2] == maior)
            {
                printf("\nN�o larga a m�o de uma boa hist�ria de amor e gosta muito de dar risada, n�o �? Seu g�nero do dia �: Com�dia Rom�ntica\n");
            }
            else if(generos[3] == maior)
            {
                printf("\nA melhor coisa para se fazer em um dia de chuva � tomar um chocolate quente e ler um livro, que tal o g�nero: Drama\n");
            }
            else if(generos[4] == maior)
            {
                printf("\nAdora um suspense no ar, mas o clima de investiga��o � muito bom para racionalidade, vamos sugerir: Policial\n");
            }
            else if(generos[5] == maior)
            {
                printf("Um toque de suspense n�o pode falhar, mas tudo fica ainda melhor quando o terror est� logo ali, que tal o g�nero: Suspense e Terror\n");
            }
            else if(generos[6] == maior)
            {
                printf("Uma hist�ria bem trabalhada, talvez de �poca � o melhor do que voc� pode pedir hoje, o g�nero que te escolheu foi: Romance\n");
            }
            else if(generos[7] == maior)
            {
                printf("Vive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugest�o do dia �: Fic��o e Fantasia\n");
            }
            else if(generos[8] == maior)
            {
                printf("Quer aprender com o conhecimento dos outros, talvez para que n�o seja passado para tr�s, mas tamb�m pode ser considerado muito inteligente por seus pr�ximos, o g�nero escolhido para voc� �: Biografia\n");
            }
        }

        if(maior2 > maior)//validacao de apenas um
        {
            if(generos[0] == maior2)
            {
                printf("Parece que voc� gosta de adrenalina e para isso n�s recomendamos o g�nero: A��o e aventura\n");
            }
            else if(generos[1] == maior2)
            {
                printf("Voc� � do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Cl�ssicos\n");
            }
            else if(generos[2] == maior2)
            {
                printf("N�o larga a m�o de uma boa hist�ria de amor e gosta muito de dar risada, n�o �? Seu g�nero do dia �: Com�dia Rom�ntica\n");
            }
            else if(generos[3] == maior2)
            {
                printf("A melhor coisa para se fazer em um dia de chuva � tomar um chocolate quente e ler um livro, que tal o g�nero: Drama\n");
            }
            else if(generos[4] == maior2)
            {
                printf("Adora um suspense no ar, mas o clima de investiga��o � muito bom para racionalidade, vamos sugerir: Policial\n");
            }
            else if(generos[5] == maior2)
            {
                printf("Um toque de suspense n�o pode falhar, mas tudo fica ainda melhor quando o terror est� logo ali, que tal o g�nero: Suspense e Terror\n");
            }
            else if(generos[6] == maior2)
            {
                printf("Uma hist�ria bem trabalhada, talvez de �poca � o melhor do que voc� pode pedir hoje, o g�nero que te escolheu foi: Romance\n");
            }
            else if(generos[7] == maior2)
            {
                printf("Vive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugest�o do dia �: Fic��o e Fantasia\n");
            }
            else if(generos[8] == maior2)
            {
                printf("Quer aprender com o conhecimento dos outros, talvez para que n�o seja passado para tr�s, mas tamb�m pode ser considerado muito inteligente por seus pr�ximos, o g�nero escolhido para voc� �: Biografia\n");
            }
        }
        flagQuiz = 0;
        printf("\n\t\t\t\t\t\t\t\t\t\t\tDigite < 0 > para voltar ao menu.\n");
        scanf("%d", &op);
        //Volta para a pagina anterior
        switch(op)
        {
            case 0:
                system("cls");
                system("menuCliente.exe");
                flagQuiz = 0;
            break;
        }
    }
}
