#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED

char Quiz(char Genero)
{
    system("Clear");
    puts("Olá, bem vindo ao nosso Quiz!\n");
    puts("Sinta-se à vontade para responder as perguntas com calma, para que assim possamos fazer com que você descubra o gênero literário ideal para você");

    int Drama, Sus_Terror, Fic_Fantas, Classicos, Biografia, Policial, Ac_Avent, Romance, Com_Rom, num_Esc;

    puts("\n====PERGUNTAS====\n");
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
    system("Clear");
    printf("Qual o motivo principal de sua leitura?(Digite o número referente)\n1 - Para sentir emoções\n2 - Para sentir medo ou curiosidade\n3 - Para me distrair desse mundo\n4 - Apenas para não perder o hábito\n5 - Apenas leio em casos de querer aprender algo\n6- Gosto de me sentir como se investigasse alguma coisa\n7 - Consigo me imaginar no livro, fazendo com que ame ler a adrenalina e as aventuras\n8 - Adoro uma história de amor com muitos dramas e reflexões\n9 - Gosto de rir, além de me prender a história\n :  ");
    scanf("%d", &num_Esc)

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
        dramas +=1;
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

    printf("Qual o sentimento que você acha que combina mais com você?(Digite o número referente)\n1 - Ciências e Humor inteligente\n2 - Sentimentos e Psicologia\n3 - Magia e Sobrenatural\n :  ");
    scanf("%d" &num_Esc);
}