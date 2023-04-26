#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED

char Quiz(char Genero)
{
    
    system("Clear"); //cabeçalho do quiz
    puts("Olá, bem vindo ao nosso Quiz!\n");
    puts("Sinta-se à vontade para responder as perguntas com calma, para que assim possamos fazer com que você descubra o gênero literário ideal para você");

    int Drama, Sus_Terror, Fic_Fantas, Classicos, Biografia, Policial, Ac_Avent, Romance, Com_Rom, num_Esc;

    puts("\n====PERGUNTAS====\n"); //primeira pergunta
    printf("Entre os filmes abaixo, qual lhe chamou mais atenção?(Digite o número referente)\n1 - Avatar: O Caminho da Água\n2 - Clube da Luta\n3 - O Mapa das Pequenas Coisas Perfeitas\n4 - Interestelar\n5 - O Dia do Atentado\n6 - Sorria\n7 - A Cinco Passos de Você\n8 - Harry Potter e a Pedra Filosofal\n9 - O Jogo da Imitação\n :");
    scanf("%d", &num_Esc);

    if(num_Esc == 1){
        Ac_Avent +=2;
        }
    else if(num_Esc == 2){
        Classicos +=2;
        }
    else if(num_Esc == 3){
        Com_Rom +=2;
        }
    else if(num_Esc == 4){
        Drama +=2;
        }
    else if(num_Esc == 5){
        Policial +=2;
        }
    else if(num_Esc == 6){
        Sus_Terror +=2;
        }
    else if(num_Esc == 7){
        Romance +=2;
        }
    else if(num_Esc == 8){
        Fic_Fantas +=2;
        }
    else if(num_Esc == 9){
        Biografia +=2;
        }
    system("Clear"); //segunda pergunta
    printf("Qual o motivo principal de sua leitura?(Digite o número referente)\n1 - Para sentir emoções\n2 - Para sentir medo ou curiosidade\n3 - Para me distrair desse mundo\n4 - Apenas para não perder o hábito\n5 - Apenas leio em casos de querer aprender algo\n6 - Gosto de me sentir como se investigasse alguma coisa\n7 - Consigo me imaginar no livro, fazendo com que ame ler a adrenalina e as aventuras\n8 - Adoro uma história de amor com muitos dramas e reflexões\n9 - Gosto de rir, além de me prender a história\n :  ");
    scanf("%d", &num_Esc);

    if(num_Esc == 1){
        Drama +=3;
        Romance +=2;
        Com_Rom +=1;
    }
    if(num_Esc == 2){
        Sus_Terror +=3;
        Policial +=2;
        Fic_Fantas +=1;
    }
    if(num_Esc == 3){
        Fic_Fantas +=3;
        Ac_Avent +=2;
        Classicos +=1;
    }
    if(num_Esc == 4){
        Classicos +=3;
        Fic_Fantas +=2;
        Drama +=1;
    }
    if(num_Esc == 5){
        Biografia +=3;
        Policial +=1;
    }
    if(num_Esc == 6){
        Policial +=3;
        Sus_Terror +=2;
        Biografia +=1;
    }
    if(num_Esc == 7){
        Ac_Avent +=3;
        Com_Rom +=2;
        Sus_Terror +=1;
    }
    if(num_Esc == 8){
        Romance +=3;
        Drama +=2;
        Ac_Avent +=1;
    }
    if(num_Esc == 9){
        Com_Rom +=3;
        Classicos +=2;
        Romance +=1;
    }
    system("Clear"); // terceira pergunta
    printf("Qual o sentimento que você acha que combina mais com você?(Digite o número referente)\n1 - Ciências e Humor inteligente\n2 - Sentimentos e Psicologia\n3 - Magia e Sobrenatural\n :  ");
    scanf("%d", &num_Esc);

    if(num_Esc == 1){
        Biografia +=2;
        Policial +=2;
        Romance +=2;
    }
    if(num_Esc == 2){
        Drama +=2;
        Com_Rom +=2;
        Sus_Terror +=2;
    }
    if(num_Esc == 3){
        Fic_Fantas +=2;
        Ac_Avent +=2;
        Classicos +=2;
    }

    //resultado
    puts("\nPronto para o seu resultado?\n");

    if(Ac_Avent > Classicos && Ac_Avent > Com_Rom && Ac_Avent > Drama && Ac_Avent > Policial && Ac_Avent > Sus_Terror && Ac_Avent > Romance && Ac_Avent > Fic_Fantas && Ac_Avent > Biografia)
    {
        printf("Parece que você gosta de adrenalina e para isso nós recomendamos o gênero: \nAção e aventura\n");
    }
    if(Classicos > Ac_Avent && Classicos > Com_Rom && Classicos > Drama && Classicos > Policial && Classicos > Sus_Terror && Classicos > Romance && Classicos > Fic_Fantas && Classicos > Biografia)
    {
        printf("Você é do tipo que gosta de algo mais calmo, podemos recomendar os queridinhos da galera: Clássicos");
    }
    if(Com_Rom > Ac_Avent && Com_Rom > Classicos && Com_Rom > Drama && Com_Rom > Policial && Com_Rom > Sus_Terror && Com_Rom > Romance && Com_Rom > Fic_Fantas && Com_Rom > Biografia)
    {
        printf("Não larga a mão de uma boa história de amor e gosta muito de dar risada, não é? Seu gênero do dia é: Comédia Romântica");
    }
    if(Drama > Ac_Avent && Drama > Classicos && Drama > Com_Rom && Drama > Policial && Drama > Sus_Terror && Drama > Romance && Drama > Fic_Fantas && Drama > Biografia)
    {
        printf("A melhor coisa para se fazer em um dia de chuva é tomar um chocolate quente e ler um livro, que tal o gênero: Drama");
    }
    if(Policial > Ac_Avent && Policial > Classicos && Policial > Com_Rom && Policial > Drama && Policial > Sus_Terror && Policial > Romance && Policial > Fic_Fantas && Policial > Biografia)
    {
        printf("Adora um suspense no ar, mas o clima de investigação é muito bom para racionalidade, vamos sugerir: Policial");
    }
    if(Sus_Terror > Ac_Avent && Sus_Terror > Classicos && Sus_Terror > Com_Rom && Sus_Terror > Drama && Sus_Terror > Policial && Sus_Terror > Romance && Sus_Terror > Fic_Fantas && Sus_Terror > Biografia)
    {
        printf("Um toque de suspense não pode falhar, mas tudo fica ainda melhor quando o terror está logo ali, que tal o gênero: Suspense e Terror");
    }
    if(Romance > Ac_Avent && Romance > Classicos && Romance > Com_Rom && Romance > Drama && Romance > Policial && Romance > Sus_Terror && Romance > Fic_Fantas && Romance > Biografia)
    {
        printf("Uma história bem trabalhada, talvez de época é o melhor do que você pode pedir hoje, o gênero que te escolheu foi: Romance");
    }
    if(Fic_Fantas > Ac_Avent && Fic_Fantas > Classicos && Fic_Fantas > Com_Rom && Fic_Fantas > Drama && Fic_Fantas > Policial && Fic_Fantas > Sus_Terror && Fic_Fantas > Romance && Fic_Fantas > Biografia)
    {
        printf("Vive no mundo da lua e adora um mundo cheio de novas aventuras e seres diferentes para se descobrir, a sugestão do dia é: Ficção e Fantasia");
    }
    if(Biografia > Ac_Avent && Biografia > Classicos && Biografia > Com_Rom && Biografia > Drama && Biografia > Policial && Biografia > Sus_Terror && Biografia > Fic_Fantas && Biografia > Romance)
    {
        printf("Quer aprender com o conhecimento dos outros, talvez para que não seja passado para trás, mas também pode ser considerado muito inteligente por seus próximos, o gênero escolhido para você é: Biografia");
    }
}