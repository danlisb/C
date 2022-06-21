//----------------------------------------------//
// Autores: Daniel Lisboa & Henrique Rodrigues  //
// Disciplina: Programa��o de Computadores (PC) //
//----------------------------------------------//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define BLANK ' '
#define OBSTACLE '@'
#define PLAYER 'O'

void imprimeArena(char ARENA[10][10]);
void movePlayer(char ARENA[10][10], int choice, int *posX, int *posY, char *flag, char OBSTACULOS[10][10]);


int main()
{
    setlocale(LC_ALL, "Portuguese"); //Deixa o monstro em portugu�s

    //Declara��o de vari�veis
    char ARENA[10][10], OBSTACULOS[10][10];
    char c, flag = 0;
    int posX = 4, posY = 4; // Esses caras guardam a posi��o do personagem
    int choice;

    //Limpa o vetor de obst�culos
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            OBSTACULOS[i][j] = 0;

    //Cria��o dos obst�culos
    OBSTACULOS[5][6] = 1;
    OBSTACULOS[0][8] = 1;

    //Inicializa��o da Arena (preenche toda a matriz com espa�os em branco)
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
        {
            if(OBSTACULOS[i][j])
                ARENA[i][j] = OBSTACLE;
            else
                ARENA[i][j] = BLANK;
        }

    ARENA[4][4] = PLAYER; //Desenha o personagem no centro da arena

    //La�o de intera��o com o usu�rio
    while(1)
    {
        imprimeArena(ARENA);

        if(flag == 1)
            printf("\nBah, voc� n�o pode se mover nessa dire��o n�o...");
        else if(flag == 2)
            printf("\nValor inv�lido!");

        printf("\n\n<1> CIMA <2> BAIXO <3> ESQUERDA <4> DIREITA <5> SAIR\n");

        if(!scanf("%d", &choice) || choice > 5 || choice == 0)
        {
            flag = 2;
            while((c = getchar()) != '\n');
            system("cls");
        }
        else
        {
            c = getchar(); //Elimina a quebra de linha no buffer que sobrou da linha 59
            flag = 0;

            switch(choice)
            {
            case 5:
                printf("\nDesejas mesmo sair? (s/n) ");
                c = getchar();
                switch(c)
                {
                case '\n':
                case 's':
                case 'S':
                    return 0; //Se o usu�rio inserir "s" ou "S" ou "\n", o programa encerra
                    break;

                default:
                    while((c = getchar()) != '\n'); //Caso contr�rio, o programa s� limpa o buffer e vida que segue
                }

            default:
                ARENA[posY][posX] = BLANK;                                  //Coloca um espa�o em branco na posi��o atual
                movePlayer(ARENA, choice, &posX, &posY, &flag, OBSTACULOS); //Chama a fun��o de movimenta��o
                ARENA[posY][posX] = PLAYER;                                 //Move o personagem para a dire��o desejada
            }

            system("cls");
        }
    }

    return 0;
}

void imprimeArena(char ARENA[10][10])   //Apenas desenha a arena na tela
{
    printf("*** Super Arena Bros. ***\n\n"); //Titulo

    for(int j=0; j<12; j++)             //Barreira superior
        printf("*");
    printf("\n");

    for(int i=9; i>=0; i--)             //Escreve as linhas de "baixo pra cima"
    {
        printf("*");
        for(int j=0; j<=9; j++)
            printf("%c", ARENA[i][j]);  //Exibe a arena na tela
        printf("*\n");
    }

    for(int j=0; j<12; j++)             //Barreira inferior
        printf("*");
    printf("\n");
}

void movePlayer(char ARENA[10][10], int choice, int *posX, int *posY, char *flag, char OBSTACULOS[10][10]) //Fun��o de movimenta��o
{
    char bellow_obs = 0, above_obs = 0, left_obs = 0, right_obs = 0;

    //Aqui o programa verifica se o jogador est� acima, abaixo, � esquerda ou � direita de um obst�culo
    if(OBSTACULOS[*posY + 1][*posX])
        bellow_obs = 1;

    if(OBSTACULOS[*posY - 1][*posX])
        above_obs = 1;

    if(OBSTACULOS[*posY][*posX + 1])
        left_obs = 1;

    if(OBSTACULOS[*posY][*posX - 1])
        right_obs = 1;

    //Movimenta��o
    switch(choice)
    {
    case 1: //Ir para cima
        if(*posY != 9 && !bellow_obs)
            (*posY)++;
        else
            *flag = 1;
        break;

    case 2: //Ir para baixo
        if(*posY != 0 && !above_obs)
            (*posY)--;
        else
            *flag = 1;
        break;

    case 3: //Ir para a esquerda
        if(*posX != 0 && !right_obs)
            (*posX)--;
        else
            *flag = 1;
        break;

    case 4: //Ir para a direita
        if(*posX != 9 && !left_obs)
            (*posX)++;
        else
            *flag = 1;
        break;
    }
}
