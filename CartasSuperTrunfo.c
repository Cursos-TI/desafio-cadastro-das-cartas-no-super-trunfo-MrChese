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
    int opcao, opcao2;

    printf(" seja bem vindo ao jogo Super Trunfo \n");
    printf("para começar digite a primeira letra do seu estado:\n ");
    scanf("%c", &estado);

    printf("agora escolha um numero para sua carta:\n");
    scanf("%f", &numero);

    printf("digite o nome da sua cidade: \n");
    scanf("%s", &cidade);

    printf("digite quantos km² sua cidade tem:\n");
    scanf("%f", &area);

    printf("digite o numero da população da sua cidade:\n");
    scanf("%d", &populacao);

    printf("digite o PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("para finalizar digite o numero de pontos turisticos da sua cidade:\n");
    scanf("%d", &turismo);

    pibPerCapito = (pib / (float)populacao);
    
    densidade = ((float)populacao / area);
    
    densidadeInvertida = (1 / densidade);
    
    resultado = (populacao / 1000.0) + (area / 100.0) +(pib / 1000000.0) + densidadeInvertida + turismo + (pibPerCapito / 1000.0);



    printf(" no final sua carta ficou:\n");
    
    printf("Letra que representa o seu estado: %c \n", estado);

    printf("codigo da carta: %c %0.1f \n", estado ,numero);

    printf("cidade: %s \n", cidade);

    printf("área: %f \n", area);

    printf("população: %d \n", populacao);

    printf("PIB: %0.2f \n", pib);

    printf("Pontos turisticos: %d \n", turismo);

    printf("o Pib Per Capito é igual a: %f \n", pibPerCapito);

    printf("a densidade populacional é de %0.2f hab/km²: \n", densidade);

    printf("o super poder é de %ld : \n", resultado);

    printf(" agora iremos iniciar a segunda carta \n");
    printf("para começar digite a primeira letra do seu estado:\n ");
    scanf(" %c", &estado2);

    printf("agora escolha um numero para sua carta:\n");
    scanf("%f", &numero2);

    printf("digite o nome da sua cidade: \n");
    scanf("%s", &cidade2);

    printf("digite quantos km² sua cidade tem:\n");
    scanf("%f", &area2);

    printf("digite o numero da população da sua cidade:\n");
    scanf("%d", &populacao2);

    printf("digite o PIB da sua cidade: \n");
    scanf("%f", &pib2);

    printf("para finalizar digite o numero de pontos turisticos da sua cidade:\n");
    scanf("%d", &turismo2);

    pibPerCapito2 = (pib2 / (float)populacao2);
    
    densidade2 = ((float)populacao2 / area2);
    
    densidadeInvertida2 = (1 / densidade2);
    
    resultado2 = (populacao2 / 1000.0) + (area2 / 100.0) +(pib2 / 1000000.0) + densidadeInvertida2 + turismo2 + (pibPerCapito2 / 1000.0);


    printf(" no final sua carta ficou:\n");
    
    printf("Letra que representa o seu estado: %c \n", estado2);

    printf("codigo da carta: %c %0.1f \n", estado2 ,numero2);

    printf("cidade: %s \n", cidade2);

    printf("área: %f \n", area2);

    printf("população: %d \n", populacao2);

    printf("PIB: %0.2f \n", pib2);

    printf("Pontos turisticos: %d \n", turismo2);

    printf("o Pib Per Capito é igual a: %f \n", pibPerCapito2);

    printf("a densidade populacional é de %0.2f hab/km²: \n", densidade2);

    printf("o super poder é de %ld : \n", resultado2);

    
    printf("Agora você pode escolher dois atributos da carta para comparar e escolher o vencedor:\n");
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
            printf("O primeiro atributo escolhido foi a População.\n");

            printf(" Escolha a segunda opção:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n");

            scanf("%d", &opcao2);

            switch (opcao2) {

                case 1:
                
                printf(" A segunda opção escolida foi a População\n ");

                populacao > populacao2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 2:

            printf(" A segunda opção escolida foi a Àrea\n ");

                populacao > area2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 3:
                
                printf(" A segunda opção escolida foi o Pib\n ");

                populacao > pib2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 4:

            printf(" A segunda opção escolida foi os pontos Turísticos\n ");

                populacao > turismo2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 5:

            printf(" A segunda opção escolida foi a Densidade demográfica\n ");

                populacao > densidade2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            }
            break;

        case 3:
        printf("O primeiro atributo escolhido foi a Àrea.\n");

        printf(" Escolha a segunda opção:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n");

            scanf("%d", &opcao2);

            switch (opcao2) {

                case 1:
                
                printf(" A segunda opção escolida foi a População\n ");

                area > populacao2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 2:

            printf(" A segunda opção escolida foi a Àrea\n ");

                area > area2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 3:
                
                printf(" A segunda opção escolida foi o Pib\n ");

                area > pib2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 4:

            printf(" A segunda opção escolida foi os pontos Turísticos\n ");

                area > turismo2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 5:

            printf(" A segunda opção escolida foi a Densidade demográfica\n ");

                area > densidade2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;
            
        }
            break;

        case 4:
        printf("O primeiro atributo escolhido foi o PIB.\n");

        printf(" Escolha a segunda opção:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade demográfica\n");

        scanf("%d", &opcao2);

        switch (opcao2) {

            case 1:
            
            printf(" A segunda opção escolida foi a População\n ");

            pib > populacao2 ? printf(" A carta vencedora é %s. \n ", cidade) 
        : printf(" A carta vencedora é %s. \n", cidade2);
        break;

        case 2:

        printf(" A segunda opção escolida foi a Àrea\n ");

            pib > area2 ? printf(" A carta vencedora é %s. \n ", cidade) 
        : printf(" A carta vencedora é %s. \n", cidade2);
        break;

        case 3:
            
            printf(" A segunda opção escolida foi o Pib\n ");

            pib > pib2 ? printf(" A carta vencedora é %s. \n ", cidade) 
        : printf(" A carta vencedora é %s. \n", cidade2);
        break;

        case 4:

        printf(" A segunda opção escolida foi os pontos Turísticos\n ");

            pib > turismo2 ? printf(" A carta vencedora é %s. \n ", cidade) 
        : printf(" A carta vencedora é %s. \n", cidade2);
        break;

        case 5:

        printf(" A segunda opção escolida foi a Densidade demográfica\n ");

            pib > densidade2 ? printf(" A carta vencedora é %s. \n ", cidade) 
        : printf(" A carta vencedora é %s. \n", cidade2);
        break;
    
    }
        break;

        case 5:
        printf("O primeiro atributo escolhido foi o Numero de pontos Turísticos.\n");

        printf(" Escolha a segunda opção:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n");

            scanf("%d", &opcao2);

            switch (opcao2) {

                case 1:
                
                printf(" A segunda opção escolida foi a População\n ");

                turismo > populacao2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 2:

            printf(" A segunda opção escolida foi a Àrea\n ");

                turismo > area2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 3:
                
                printf(" A segunda opção escolida foi o Pib\n ");

                turismo > pib2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 4:

            printf(" A segunda opção escolida foi os pontos Turísticos\n ");

                turismo > turismo2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 5:

            printf(" A segunda opção escolida foi a Densidade demográfica\n ");

                turismo > densidade2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;
           }
            break;

        case 6:
        printf("O primeiro atributo escolhido foi a Densidade demográfica.\n");

        printf(" Escolha a segunda opção:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de pontos turísticos\n");
            printf("5. Densidade demográfica\n");

            scanf("%d", &opcao2);

            switch (opcao2) {

                case 1:
                
                printf(" A segunda opção escolida foi a População\n ");

                densidade > populacao2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 2:

            printf(" A segunda opção escolida foi a Àrea\n ");

                densidade > area2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 3:
                
                printf(" A segunda opção escolida foi o Pib\n ");

                densidade > pib2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 4:

            printf(" A segunda opção escolida foi os pontos Turísticos\n ");

                densidade > turismo2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            case 5:

            printf(" A segunda opção escolida foi a Densidade demográfica\n ");

                densidade > densidade2 ? printf(" A carta vencedora é %s. \n ", cidade) 
            : printf(" A carta vencedora é %s. \n", cidade2);
            break;

            }
            break;

        default:
            printf("A opção não é válida.\n");
            break;
    } 

    return 0;
}