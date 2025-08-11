#include <stdio.h>

int main () {
    char estado; //Char da variável do 1° estado
    int pib; //Int do 1° pib
    double km2; //double da primeira variável de km²
    int pop; //int para armazenar a população da 1° carta
    int pontos; //int para armazenar a quantidade de pontos turísticos na 1° carta
    char cod[3]; //Char para poder digitar somente a quantidade de dígitos necessária para o código da carta

    char estado2;//Char da variável do 2° estado
    int pib2;//Int do 2° pib
    double km22;//double da primeira variável de km² da 2° carta
    int pop2;//int para armazenar a população da 2° carta
    int pontos2; //int para armazenar a quantidade de pontos turísticos na 2° carta
    char cod2[3];  //Char para poder digitar somente a quantidade de dígitos necessária para o código da 2° carta


    //todos os printf necessários para dar uma instrução clara e objetiva para o usuário, seguida dos scanf
    //para poder armazenar todas as respostas nas respectivas variáveis

    printf("Vamos jogar! - Vamos fazer o cadastro da primeira carta!\n");

    printf("\nDigite a letra do estado (A a H): ");
    scanf(" %c", &estado); 

    printf("\nDigite o código da carta (01 - 04): ");
    scanf("%2s", cod);     

    printf("\nAgora, digite o PIB do estado: ");
    scanf("%d", &pib);

    printf("\nDigite a população: ");
    scanf("%d", &pop);

    printf("\nLança a área em km²: ");
    scanf("%lf", &km2);

    printf("\nDigite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos);
//exibição da 1° carta
    printf("\nCarta n° 1:\n");
    printf("Estado: %c\n", estado);
    printf("PIB: %d\n", pib);
    printf("População: %d\n", pop);
    printf("Pontos Turísticos: %d\n", pontos);
    printf("Km²: %.2f\n", km2);
    printf("Código: %c%s\n", estado, cod);

//todos os printf necessários para dar uma instrução clara e objetiva para o usuário, seguida dos scanf
//para poder armazenar todas as respostas nas respectivas variáveis
printf(" Vamos fazer a segunda carta!\n");

  printf("\nDigite a letra do estado (A a H): ");
    scanf(" %c", &estado2); 

    printf("\nDigite o código da carta (01 - 04): ");
    scanf("%2s", cod2);     

    printf("\nAgora, digite o PIB do estado: ");
    scanf("%d", &pib2);

    printf("\nDigite a população: ");
    scanf("%d", &pop2);

    printf("\nLança a área em km²: ");
    scanf("%lf", &km22);

    printf("\nDigite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);
//exibição da 2° carta

       printf("\nCarta n° 2:\n");
    printf("Estado: %c\n", estado2);
    printf("PIB: %d\n", pib2);
    printf("População: %d\n", pop2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Km²: %.2f\n", km22);
    printf("Código: %c%s\n", estado2, cod2);

//comparação (visual) das 2 cartas
    printf("\n vamos comparar as duas cartas!");
    printf("\n Carta n°1 --------------- Carta n°2");
    printf("\n Estado: %c --------------- ", estado);
    printf("Estado: %c", estado2);
    printf("\nPIB: %d --------------- ", pib);
    printf("PIB: %d", pib2);
    printf("\nPopulação: %d --------------- ", pop);
    printf("População: %d", pop2);
    printf("\nPontos T.: %d --------------- ", pontos);
    printf("Pontos T.: %d", pontos2);
    printf("\nKm²: %.2f --------------- ", km2);
    printf("Km²: %.2f", km22);
    printf("\nCódigo: %c%s --------------- ", estado, cod);
    printf("Código: %c%s", estado2, cod2);
    return 0;
}
