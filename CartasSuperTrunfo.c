#include <stdio.h>

int main () {
    char estado; //Char da variável do 1° estado
    float pib; //Int do 1° pib
    double km2; //double da primeira variável de km²
    int pop; //int para armazenar a população da 1° carta
    int pontos; //int para armazenar a quantidade de pontos turísticos na 1° carta
    char cod[3]; //Char para poder digitar somente a quantidade de dígitos necessária para o código da carta

    char estado2;//Char da variável do 2° estado
    float pib2;//Int do 2° pib
    double km22;//double da primeira variável de km² da 2° carta
    int pop2;//int para armazenar a população da 2° carta
    int pontos2; //int para armazenar a quantidade de pontos turísticos na 2° carta
    char cod2[3];  //Char para poder digitar somente a quantidade de dígitos necessária para o código da 2° carta

   //Variaveis do 2° desafio, Densidade Populacional e PIB per Capta
    float dp;
    float ppc;
    float dp2;
    float ppc2;



    //todos os printf necessários para dar uma instrução clara e objetiva para o usuário, seguida dos scanf
    //para poder armazenar todas as respostas nas respectivas variáveis

    printf("Vamos jogar! - Vamos fazer o cadastro da primeira carta!\n");

    printf("\nDigite a letra do estado (A a H): ");
    scanf(" %c", &estado); 

    printf("\nDigite o código da carta (01 - 04): ");
    scanf(" %2s", cod);     

    printf("\nAgora, digite o PIB do estado: ");
    scanf(" %f", &pib);
while(getchar() != '\n'); 
    printf("\nDigite a população: ");
    scanf(" %d", &pop);

    printf("\nLança a área em km²: ");
    scanf(" %lf", &km2);
while(getchar() != '\n'); 
    printf("\nDigite a quantidade de pontos turísticos: ");
    scanf(" %d", &pontos);
    //cálculo do segundo desafio, densidade populacional e PIB per capta da primeira carta
    dp = pop / km2;
    
    ppc = pib / pop;
    
//exibição da 1° carta
    printf("\nCarta n° 1:\n");
    printf("Estado: %c\n", estado);
    printf("PIB: %.2f R$\n", pib);
    printf("População: %d\n", pop);
    printf("Pontos Turísticos: %d\n", pontos);
    printf("Km²: %.2lf\n", km2);
    printf("Código: %c%s\n", estado, cod);
    printf("Densidade populacional: %0.2f\n", dp);
    printf("PIB per capta: %.2f R$\n", ppc);


//todos os printf necessários para dar uma instrução clara e objetiva para o usuário, seguida dos scanf
//para poder armazenar todas as respostas nas respectivas variáveis
printf(" Vamos fazer a segunda carta!\n");

  printf("\nDigite a letra do estado (A a H): ");
    scanf(" %c", &estado2); 

    printf("\nDigite o código da carta (01 - 04): ");
    scanf(" %2s", cod2);     

    printf("\nAgora, digite o PIB do estado: ");
    scanf(" %f", &pib2);
while(getchar() != '\n'); 
    printf("\nDigite a população: ");
    scanf(" %d", &pop2);

    printf("\nLança a área em km²: ");
    scanf(" %lf", &km22);
while(getchar() != '\n'); 
    printf("\nDigite a quantidade de pontos turísticos: ");
    scanf(" %d", &pontos2);
//exibição e cálculo da 2° carta
dp2 = (float) pop2 / km22;
ppc2 = (float) pib2 / pop2;
       printf("\nCarta n° 2:\n");
    printf("Estado: %c\n", estado2);
    printf("PIB: %.2f R$\n", pib2);
    printf("População: %d\n", pop2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Km²: %.2lf\n", km22);
    printf("Código: %c%s\n", estado2, cod2);
    printf("Densidade populacional: %0.2f\n", dp2);
    printf("PIB per capta: %.2f R$\n", ppc2);

//comparação (visual) das 2 cartas
    printf("\n vamos comparar as duas cartas!");
    printf("\n Carta n°1 --------------- Carta n°2");
    printf("\n Estado: %c --------------- ", estado);
    printf("Estado: %c", estado2);
    printf("\nPIB: %.2f --------------- ", pib);
    printf("PIB: %.2f", pib2);
    printf("\nPopulação: %d --------------- ", pop);
    printf("População: %d", pop2);
    printf("\nPontos T.: %d --------------- ", pontos);
    printf("Pontos T.: %d", pontos2);
    printf("\nKm²: %.2lf --------------- ", km2);
    printf("Km²: %.2lf", km22);
    printf("\nCódigo: %c%s --------------- ", estado, cod);
    printf("Código: %c%s", estado2, cod2);
    printf("\n Densidade populacional: %.2f --------------- ", dp);
    printf("Densidade populacional: %0.2f", dp2);
    printf("\n PIB per capta: %0.2f R$ --------------- ", ppc);
    printf("PIB per capta: %0.2f R$", ppc2);
    return 0;
}
