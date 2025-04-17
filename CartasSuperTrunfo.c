#include <stdio.h>

int main() {
    char estado; 
    int numero;
    char cidade[20];
    float area;
    float populacao;
    float pib;
    float turismo;

    printf(" seja bem vindo ao jogo Super Trunfo \n");
    printf("para começar digite a primeira letra do seu estado:\n ");
    scanf("%c", &estado);

    printf("agora digite escolha um numero para sua carta:\n");
    scanf("%i", &numero);

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

    printf(" no final sua carta ficou:\n");
    
    printf("Letra que representa o seu estado: %c \n", estado);

    printf("codigo da carta: %i \n", numero);

    printf("cidade: %s \n", cidade);

    printf("area: %f \n", area);

    printf("populacao: %f \n", populacao);

    printf("PIB: %f \n", pib);

    printf("Pontos turisticos %f \n", turismo);

    return 0;
}
