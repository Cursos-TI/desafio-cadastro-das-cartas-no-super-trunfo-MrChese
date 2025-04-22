#include <stdio.h>

int main() {
    char estado; 
    float numero;
    char cidade[20];
    float area;
    float populacao;
    float pib;
    float turismo;
    float densidade;
    float PibPerCapito;
    long double resultado;
    float DensidadeInvertida;

    printf(" seja bem vindo ao jogo Super Trunfo \n");
    printf("para começar digite a primeira letra do seu estado:\n ");
    scanf("%c", &estado);

    printf("agora digite escolha um numero para sua carta:\n");
    scanf("%f", &numero);

    printf("digite o nome da sua cidade: \n");
    scanf("%s", &cidade);

    printf("digite quantos km sua cidade tem:\n");
    scanf("%f", &area);

    printf("digite o numero da população da sua cidade:\n");
    scanf("%f", &populacao);

    printf("digite o PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("para finalizar digite o numero de pontos turisticos da sua cidade:\n");
    scanf("%f", &turismo);

     DensidadeInvertida = (1 / densidade);

    resultado = ( populacao + area + pib + DensidadeInvertida + turismo + PibPerCapito );
    
    PibPerCapito = (pib / populacao);

    densidade = (populacao / area);

    printf(" no final sua carta ficou:\n");
    
    printf("Letra que representa o seu estado: %c \n", estado);

    printf("codigo da carta: %c %0.1f \n", estado ,numero);

    printf("cidade: %s \n", cidade);

    printf("area: %f \n", area);

    printf("populacao: %f \n", populacao);

    printf("PIB: %f \n", pib);

    printf("Pontos turisticos: %f \n", turismo);

    printf("o Pib Per Capito é igual a: %f \n", PibPerCapito);

    printf("a densidade populacional é de %0.2f hab/km²: \n", densidade);

    printf("o super poder é de %ld : \n", resultado);

    return 0;
}
