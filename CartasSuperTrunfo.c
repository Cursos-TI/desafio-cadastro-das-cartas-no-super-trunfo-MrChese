#include <stdio.h>

int main() {
    char estado; 
    char codigo[2];
    char cidade[20];
    float area;
    float populacao;
    float pib;
    float turismo;

    printf(" seja bem vindo ao jogo Super Trunfo \n");
    printf("para começar digite a primeira letra do seu estado:\n ");
    scanf("%c", &estado);

    printf("agora digite escolha um codigo de 2 digitos para sua carta:\n");
    scanf("%c", &codigo);

    printf("digite o nome da sua cidade: \n");
    scanf("%s", &cidade);

    printf("digite quantos km² sua cidade tem:\n");
    scanf("%f", &area);

    printf("digite o numero da população da sua cidade:\n");
    scanf("%f", &populacao);

    Printf("digit o PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("para finalizar digite o numero de pontos turisticos da sua cidade:\n");
    scanf("%f", &turismo);

    printf(" no final sua carta ficou:\n");

    printf("Estado: %c \n", estado);

    printf("Codigo da Carta: %s \n", codigo);

    printf("Area em km²: %s \n", area);

    printf("População da cidade: %s \n", populacao);

    printf("PIB: %f \n", pib);
    
    printf("Pontos turisticos %c \n", turismo);

    return 0;
}
