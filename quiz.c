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
        //indices de cada genero para melhor localização
        //[0] =  Ação e Aventura
        //[1] =  Classicos
        //[2] =  Comédia Romantica
        //[3] =  Drama
        //[4] =  Policial
        //[5] =  Suspense e Terror
        //[6] =  Romance
        //[7] =  Ficção e Fantasia
        //[8] =  Biografia

        system("cls"); //cabeçalho do quiz
        puts("|==============================================================================|");
        puts("|                        Olá, bem vindo ao nosso Quiz!                         |");
        puts("|==============================================================================|");
        puts("|                                                                              |");
        puts("|   Sinta-se à vontade para responder as perguntas com calma, para que assim   |");
        puts("|   possamos fazer com que você descubra o gênero literário ideal para você    |");
        puts("|                                                                              |");
        puts("|==============================================================================|");
        sleep(5);
        system("cls");

        //primeira pergunta
        puts("                   |==========================|                  ");
        puts(" |=================|        Pergunta 1        |=================|");
        puts("                   |==========================|                  \n");

        printf("Entre os filmes abaixo, qual lhe chamou mais atenção?(Digite o número referente)\n1. Avatar: O Caminho da Água\n2. Clube da Luta\n3. O Mapa das Pequenas Coisas Perfeitas\n4. Interestelar\n5. O Dia do Atentado\n6. Sorria\n7. A Cinco Passos de Você\n8. Harry Potter e a Pedra Filosofal\n9. O Jogo da Imitação\n: ");
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
        printf("Qual o motivo principal de sua leitura?(Digite o número referente)\n1. Para sentir emoções\n2. Para sentir medo ou curiosidade\n3. Para me distrair desse mundo\n4. Apenas para não perder o hábito\n5. Apenas leio em casos de querer aprender algo\n6. Gosto de me sentir como se investigasse alguma coisa\n7. Consigo me imaginar no livro, fazendo com que ame ler a adrenalina e as aventuras\n8. Adoro uma história de amor com muitos dramas e reflexões\n9. Gosto de rir, além de me prender a história\n: ");
        scanf("%d", &num_Esc);

        if (num_Esc == 1)
        {
            generos[3] += 3; //Drama
            generos[6] += 2; //Romance
            generos[2] += 1; //Comédia Romantica

        }
        else if (num_Esc == 2)
        {
            generos[5] += 3; //Suspense e terror
            generos[4] += 2; //Policial
            generos[7] += 1; //Ficção e Fantasia
        }
        else if(num_Esc == 3)
        {
            generos[7] += 3; //Ficção e Fantasia
            generos[0] += 2; //Ação e Aventura
            generos[1] += 1; //Clássicos
        }
        else if(num_Esc == 4)
        {
            generos[1] += 3; //Clássicos
            generos[7] += 2; //Ficção e Fantasia
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
            generos[0] += 3; //Ação e Aventura
            generos[2] += 2; //Comédia Romantica
            generos[5] += 1; //Suspense e terror
        }
        else if(num_Esc == 8)
        {
            generos[6] += 3; //Romance
            generos[3] += 2; //Drama
            generos[0] += 1; //Ação e Aventura
        }
        else if(num_Esc == 9)
        {
            generos[2] += 3; //Comédia Romantica
            generos[1] += 2; //Clássicos
            generos[6] += 1; //Romance
        }
        system("cls"); // terceira pergunta
        puts("                   |==========================|                  ");
        puts(" |=================|        Pergunta 3        |=================|");
        puts("                   |==========================|                  \n");
        printf("Qual o sentimento que você acha que combina mais com você?(Digite o número referente)\n1. Ciências e Humor inteligente\n2. Sentimentos e Psicologia\n3. Magia e Sobrenatural\n: ");
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
            generos[2] += 2; //Comédia Romantica
            generos[5] += 2; //Suspense e terror
        }
        else if(num_Esc == 3)
        {
            generos[7] += 2; //Ficção e Fantasia
            generos[0] += 2; //Ação e Aventura
            generos[1] += 2; //Clássicos
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
                printf("\nParece que você gosta de adrenalina e para isso nós recomendamos o gênero: Ação e aventura\n");

                if(generos[1] == maior2)
                {
                    printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");
                }
                else if(generos[2] == maior2)
                {
                    printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
                }
                else if(generos[3] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                }
                else if(generos[4] == maior2)
                {
                    printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                }
                else if(generos[5] == maior2)
                {
                    printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                }
                else if(generos[6] == maior2)
                {
                    printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                }
            }
            if(generos[1] == maior)
            {
                if(generos[2] == maior2)
                {
                    printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");

                    printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
                }
                else if(generos[3] == maior2)
                {
                    printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");

                    printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                }
                else if(generos[4] == maior2)
                {
                    printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");

                    printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                }
                else if(generos[5] == maior2)
                {
                    printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");

                    printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                }
                else if(generos[6] == maior2)
                {
                    printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");

                    printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                }
            }
            if(generos[2] == maior)
            {
                if(generos[3] == maior2)
                {
                    printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");

                    printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                }
                else if(generos[4] == maior2)
                {
                    printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");

                    printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                }
                else if(generos[5] == maior2)
                {
                    printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");

                    printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                }
                else if(generos[6] == maior2)
                {
                    printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");

                    printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                }
            }
            if(generos[3] == maior)
            {
                if(generos[4] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");

                    printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                }
                else if(generos[5] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");

                    printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                }
                else if(generos[6] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");

                    printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                }
            }
            if(generos[4] == maior)
            {

                if(generos[5] == maior2)
                {
                    printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");

                    printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                }
                else if(generos[6] == maior2)
                {
                    printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");

                    printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                }
            }
            if(generos[5] == maior)
            {
                if(generos[6] == maior2)
                {
                    printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");

                    printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                }
                else if(generos[7] == maior2)
                {
                    printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                }
            }
            if(generos[6] == maior)
            {
                if(generos[7] == maior2)
                {
                    printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");

                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                }
                else if(generos[8] == maior2)
                {
                    printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                }
            }
            if(generos[7] == maior)
            {
                if(generos[8] == maior2)
                {
                    printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");

                    printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                }
            }
        }

        if(maior > maior2) //validação de apenas um
        {
            if(generos[0] == maior)
            {
                printf("\nParece que você gosta de adrenalina e para isso nós recomendamos o gênero: Ação e aventura\n");
            }
            else if(generos[1] == maior)
            {
                printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos\n");
            }
            else if(generos[2] == maior)
            {
                printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica\n");
            }
            else if(generos[3] == maior)
            {
                printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama\n");
            }
            else if(generos[4] == maior)
            {
                printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial\n");
            }
            else if(generos[5] == maior)
            {
                printf("Um toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror\n");
            }
            else if(generos[6] == maior)
            {
                printf("Uma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance\n");
            }
            else if(generos[7] == maior)
            {
                printf("Vive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia\n");
            }
            else if(generos[8] == maior)
            {
                printf("Quer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia\n");
            }
        }

        if(maior2 > maior)//validacao de apenas um
        {
            if(generos[0] == maior2)
            {
                printf("Parece que você gosta de adrenalina e para isso nós recomendamos o gênero: Ação e aventura\n");
            }
            else if(generos[1] == maior2)
            {
                printf("Você é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos\n");
            }
            else if(generos[2] == maior2)
            {
                printf("Não larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica\n");
            }
            else if(generos[3] == maior2)
            {
                printf("A melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama\n");
            }
            else if(generos[4] == maior2)
            {
                printf("Adora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial\n");
            }
            else if(generos[5] == maior2)
            {
                printf("Um toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror\n");
            }
            else if(generos[6] == maior2)
            {
                printf("Uma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance\n");
            }
            else if(generos[7] == maior2)
            {
                printf("Vive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia\n");
            }
            else if(generos[8] == maior2)
            {
                printf("Quer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia\n");
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
