#include <stdio.h>

int main() {
    char estado, estado2; 
    float numero, numero2;
    char cidade[20], cidade2[20];
    float area, area2;
    int populacao, populacao2;
    float pib, pib2;
    int turismo, turismo2;
    float densidade, densidade2;
    float pibPerCapito, pibPerCapito2;
    long double resultado, resultado2;
    float densidadeInvertida, densidadeInvertida2;
    int opcao;

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
    scanf("%d", &populacao);

    printf("digite o PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("para finalizar digite o numero de pontos turisticos da sua cidade:\n");
    scanf("%d", &turismo);

    pibPerCapito = (pib / (float)populacao);
    
    densidade = (populacao / area);
    
    densidadeInvertida = (1 / densidade);
    
    resultado = ( populacao + area + pib + densidadeInvertida + turismo + pibPerCapito );


    printf(" no final sua carta ficou:\n");
    
    printf("Letra que representa o seu estado: %c \n", estado);

    printf("codigo da carta: %c %0.1f \n", estado ,numero);

    printf("cidade: %s \n", cidade);

    printf("area: %f \n", area);

    printf("populacao: %d \n", populacao);

    printf("PIB: %0.2f \n", pib);

    printf("Pontos turisticos: %d \n", turismo);

    printf("o Pib Per Capito é igual a: %f \n", pibPerCapito);

    printf("a densidade populacional é de %0.2f hab/km²: \n", densidade);

    printf("o super poder é de %ld : \n", resultado);

    printf(" agora iremos iniciar a segunda carta \n");
    printf("para começar digite a primeira letra do seu estado:\n ");
    scanf(" %c", &estado2);

    printf("agora digite escolha um numero para sua carta:\n");
    scanf("%f", &numero2);

    printf("digite o nome da sua cidade: \n");
    scanf("%s", &cidade2);

    printf("digite quantos km sua cidade tem:\n");
    scanf("%f", &area2);

    printf("digite o numero da população da sua cidade:\n");
    scanf("%d", &populacao2);

    printf("digite o PIB da sua cidade: \n");
    scanf("%f", &pib2);

    printf("para finalizar digite o numero de pontos turisticos da sua cidade:\n");
    scanf("%d", &turismo2);

    pibPerCapito2 = (pib2 / (float)populacao2);
    
    densidade2 = (populacao2 / area2);
    
    densidadeInvertida2 = (1 / densidade2);
    
    resultado2 = ( populacao2 + area2 + pib2 + densidadeInvertida2 + turismo2 + pibPerCapito2 );


    printf(" no final sua carta ficou:\n");
    
    printf("Letra que representa o seu estado: %c \n", estado2);

    printf("codigo da carta: %c %0.1f \n", estado2 ,numero2);

    printf("cidade: %s \n", cidade2);

    printf("area: %f \n", area2);

    printf("populacao: %d \n", populacao2);

    printf("PIB: %0.2f \n", pib2);

    printf("Pontos turisticos: %d \n", turismo2);

    printf("o Pib Per Capito é igual a: %f \n", pibPerCapito2);

    printf("a densidade populacional é de %0.2f hab/km²: \n", densidade2);

    printf("o super poder é de %ld : \n", resultado2);

    
    printf("Agora você pode escolher um dos atributos da carta para comparar e escolher o vencedor:\n");
    printf("1. Antes de começar, que tal ler as regras?\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");

    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("As regras são as seguintes: vence a carta que tiver o maior valor no atributo escolhido.\n");
            printf("Exceto se o atributo for densidade demográfica — nesse caso, vence o menor.\n");
            break;

        case 2:
            printf("O atributo escolhido foi a população.\n");
            if (populacao > populacao2) {
                printf("A carta vencedora é %s.\n", cidade);
            } else {
                printf("A carta vencedora é %s.\n", cidade2);
            }
            break;

        case 3:
            printf("O atributo escolhido foi a área.\n");
            if (area > area2) {
                printf("A carta vencedora é %s.\n", cidade);
            } else {
                printf("A carta vencedora é %s.\n", cidade2);
            }
            break;

        case 4:
            printf("O atributo escolhido foi o PIB.\n");
            if (pib > pib2) {
                printf("A carta vencedora é %s.\n", cidade);
            } else {
                printf("A carta vencedora é %s.\n", cidade2);
            }
            break;

        case 5:
            printf("O atributo escolhido foi o número de pontos turísticos.\n");
            if (turismo > turismo2) {
                printf("A carta vencedora é %s.\n", cidade);
            } else {
                printf("A carta vencedora é %s.\n", cidade2);
            }
            break;

        case 6:
            printf("O atributo escolhido foi a densidade demográfica.\n");
            if (densidade < densidade2) {
                printf("A carta vencedora é %s.\n", cidade);
            } else {
                printf("A carta vencedora é %s.\n", cidade2);
            }
            break;

        default:
            printf("A opção não é válida.\n");
            break;
    }

    return 0;
}