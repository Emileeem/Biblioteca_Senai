#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED

char Quiz(char Genero)
{
    int generos[9];
    int num_Esc;

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

    system("Clear"); //cabeçalho do quiz
    puts("\n                                                _____________________________________");
    puts("                                                ||  Olá, bem vindo ao nosso Quiz!  ||");
    puts("                                                _____________________________________\n");
    puts("====================================================================================================================================================");
    puts("||Sinta-se à vontade para responder as perguntas com calma, para que assim possamos fazer com que você descubra o gênero literário ideal para você||");
    puts("====================================================================================================================================================");
    puts("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

    puts("                                                 ==================================");
    puts("\n                                                 ==========||PERGUNTAS||===========\n"); //Primeira pergunta
    puts("                                                 ==================================");

    puts("==========================================================================================================================\n");
    printf("Entre os filmes abaixo, qual lhe chamou mais atenção?(Digite o número referente)\n1 - Avatar: O Caminho da Água\n____________________________________\n2 - Clube da Luta\n____________________________________\n3 - O Mapa das Pequenas Coisas Perfeitas\n____________________________________\n4 - Interestelar\n____________________________________\n5 - O Dia do Atentado\n____________________________________\n6 - Sorria\n____________________________________\n7 - A Cinco Passos de Você\n____________________________________\n8 - Harry Potter e a Pedra Filosofal\n____________________________________\n9 - O Jogo da Imitação\n____________________________________\n :");
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
    system("Clear"); //segunda pergunta
    puts("==========================================================================================================================\n");
    printf("Qual o motivo principal de sua leitura?(Digite o número referente)\n1 - Para sentir emoções\n____________________________________\n2 - Para sentir medo ou curiosidade\n____________________________________\n3 - Para me distrair desse mundo\n____________________________________\n4 - Apenas para não perder o hábito\n____________________________________\n5 - Apenas leio em casos de querer aprender algo\n____________________________________\n6 - Gosto de me sentir como se investigasse alguma coisa\n____________________________________\n7 - Consigo me imaginar no livro, fazendo com que ame ler a adrenalina e as aventuras\n____________________________________\n8 - Adoro uma história de amor com muitos dramas e reflexões\n____________________________________\n9 - Gosto de rir, além de me prender a história\n____________________________________\n :  ");
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
    system("Clear"); // terceira pergunta
    puts("==========================================================================================================================\n");
    printf("Qual o sentimento que você acha que combina mais com você?(Digite o número referente)\n____________________________________\n1 - Ciências e Humor inteligente\n____________________________________\n2 - Sentimentos e Psicologia\n____________________________________\n3 - Magia e Sobrenatural\n____________________________________\n :  ");
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
    system("Clear"); //Resultado:
    puts("Pronto para o seu resultado?");

    int maior = generos[0];
    int maior2;
    for (int i = 0; i < 9; i++) {
       if (generos[i] >= maior)
           if(generos[i]!= maior){
                maior = generos[i];
           }
           else
                maior2 = generos[i];

    }

    //Resultado respostas caso seja o genero;

    if(maior == maior2)
    {
        printf("Uau! Os gêneros selecionados para você foram: ");
        if(generos[0] == maior)
        {
            puts("==========================================================================================================================\n");
            printf("\nParece que você gosta de adrenalina e para isso nós recomendamos o gênero: \nAção e aventura\n");
            puts("==========================================================================================================================\n");

            if(generos[1] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");
                puts("==========================================================================================================================\n");
            }
            else if(generos[2] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
                puts("==========================================================================================================================\n");
            }
            else if(generos[3] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                puts("==========================================================================================================================\n");
            }
            else if(generos[4] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                puts("==========================================================================================================================\n");
            }
            else if(generos[5] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                puts("==========================================================================================================================\n");
            }
            else if(generos[6] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                puts("==========================================================================================================================\n");
            }
            else if(generos[7] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                puts("==========================================================================================================================\n");
            }
            else if(generos[8] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                puts("==========================================================================================================================\n");
            }
        }
        if(generos[1] == maior)
        {
            if(generos[2] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
                puts("==========================================================================================================================\n");
            }
            else if(generos[3] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                puts("==========================================================================================================================\n");
            }
            else if(generos[4] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                puts("==========================================================================================================================\n");
            }
            else if(generos[5] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");
                puts("\n==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                puts("==========================================================================================================================\n");
            }
            else if(generos[6] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                puts("==========================================================================================================================\n");
            }
            else if(generos[7] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                puts("==========================================================================================================================\n");
            }
            else if(generos[8] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                puts("==========================================================================================================================\n");
            }
        }
        if(generos[2] == maior)
        {
            if(generos[3] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                puts("==========================================================================================================================\n");
            }
            else if(generos[4] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                puts("==========================================================================================================================\n");
            }
            else if(generos[5] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                puts("==========================================================================================================================\n");
            }
            else if(generos[6] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                puts("==========================================================================================================================\n");
            }
            else if(generos[7] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                puts("==========================================================================================================================\n");
            }
            else if(generos[8] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                puts("==========================================================================================================================\n");
            }
        }
        if(generos[3] == maior)
        {
            if(generos[4] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                puts("==========================================================================================================================\n");
            }
            else if(generos[5] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                puts("==========================================================================================================================\n");
            }
            else if(generos[6] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                puts("==========================================================================================================================\n");
            }
            else if(generos[7] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                puts("==========================================================================================================================\n");
            }
            else if(generos[8] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                puts("==========================================================================================================================\n");
            }
        }
        if(generos[4] == maior)
        {

            if(generos[5] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                puts("==========================================================================================================================\n");
            }
            else if(generos[6] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                puts("==========================================================================================================================\n");
            }
            else if(generos[7] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                puts("==========================================================================================================================\n");
            }
            else if(generos[8] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                puts("==========================================================================================================================\n");
            }
        }
        if(generos[5] == maior)
        {
            if(generos[6] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                puts("==========================================================================================================================\n");
            }
            else if(generos[7] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                puts("==========================================================================================================================\n");
            }
            else if(generos[8] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nUm toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                puts("==========================================================================================================================\n");
            }
        }
        if(generos[6] == maior)
        {
            if(generos[7] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                puts("==========================================================================================================================\n");
            }
            else if(generos[8] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nUma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                puts("==========================================================================================================================\n");
            }
        }
        if(generos[7] == maior)
        {
            if(generos[8] == maior2)
            {
                puts("==========================================================================================================================\n");
                printf("\nVive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
                puts("==========================================================================================================================\n");

                puts("\n==========================================================================================================================\n");
                printf("\nQuer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
                puts("==========================================================================================================================\n");
            }
        }
    }
    
    if(maior > maior2) //validação de apenas um 
    {
        if(generos[0] == maior)
        {
            puts("==========================================================================================================================\n");
            printf("\nParece que você gosta de adrenalina e para isso nós recomendamos o gênero: \nAção e aventura\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[1] == maior)
        {
            puts("==========================================================================================================================\n");
            printf("\nVocê é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[2] == maior)
        {
            puts("==========================================================================================================================\n");
            printf("\nNão larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[3] == maior)
        {
            puts("==========================================================================================================================\n");
            printf("\nA melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[4] == maior)
        {
            puts("==========================================================================================================================\n");
            printf("\nAdora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[5] == maior)
        {
            puts("==========================================================================================================================\n");
            printf("Um toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[6] == maior)
        {
            puts("==========================================================================================================================\n");
            printf("Uma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[7] == maior)
        {
            puts("==========================================================================================================================\n");
            printf("Vive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[8] == maior)
        {
            puts("==========================================================================================================================\n");
            printf("Quer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia\n");
            puts("==========================================================================================================================\n");
        }
    }
    
    if(maior2 > maior)//validacao de apenas um 
    {
        if(generos[0] == maior2)
        {
            puts("==========================================================================================================================\n");
            printf("Parece que você gosta de adrenalina e para isso nós recomendamos o gênero: \nAção e aventura\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[1] == maior2)
        {
            puts("==========================================================================================================================\n");
            printf("Você é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[2] == maior2)
        {
            puts("==========================================================================================================================\n");
            printf("Não larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[3] == maior2)
        {
            puts("==========================================================================================================================\n");
            printf("A melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[4] == maior2)
        {
            puts("==========================================================================================================================\n");
            printf("Adora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[5] == maior2)
        {
            puts("==========================================================================================================================\n");
            printf("Um toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[6] == maior2)
        {
            puts("==========================================================================================================================\n");
            printf("Uma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[7] == maior2)
        {
            puts("==========================================================================================================================\n");
            printf("Vive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia\n");
            puts("==========================================================================================================================\n");
        }
        else if(generos[8] == maior2)
        {
            puts("==========================================================================================================================\n");
            printf("Quer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia\n");
            puts("==========================================================================================================================\n");
        }
    }
}

