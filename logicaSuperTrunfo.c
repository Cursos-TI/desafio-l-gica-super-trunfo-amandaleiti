#include <stdio.h>

int main() {

    // ===== CARTA 1 PRE-CADASTRADA =====
    char estado1[30] = "AC";
    char codigo1[10] = "A01";
    char cidade1[50] = "Rio Branco";
    int populacao1 = 419452;
    float area1 = 8835.15;
    float pib1 = 10.90;
    int pontosTuristicos1 = 8;

    // ===== CARTA 2 PRE-CADASTRADA =====
    char estado2[30] = "AM";
    char codigo2[10] = "B02";
    char cidade2[50] = "Manaus";
    int populacao2 = 2063689;
    float area2 = 11401.09;
    float pib2 = 103.00;
    int pontosTuristicos2 = 15;

    // ===== CALCULOS DAS CARTAS =====
    // Densidade populacional = populacao / area
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // PIB per capita = PIB em reais / populacao
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Variaveis para guardar as escolhas do jogador
    int opcao1, opcao2;

    // Variaveis para guardar os nomes dos atributos escolhidos
    char atributo1[50];
    char atributo2[50];

    // Variaveis para guardar os valores dos atributos escolhidos
    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;

    // Variaveis usadas na soma final
    float somaCarta1, somaCarta2;

    // ===== EXIBICAO DAS CARTAS =====
    printf("===== CARTAS DISPONIVEIS =====\n\n");

    printf("Carta 1: %s (%s)\n", cidade1, estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f reais\n\n", pibPerCapita1);

    printf("Carta 2: %s (%s)\n", cidade2, estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f reais\n\n", pibPerCapita2);

    // ===== PRIMEIRO MENU =====
    printf("===== PRIMEIRO ATRIBUTO =====\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite a opcao escolhida: ");
    scanf("%d", &opcao1);

    // Aqui o switch pega os valores do primeiro atributo escolhido
    switch (opcao1) {
        case 1:
            sprintf(atributo1, "Populacao");
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            break;

        case 2:
            sprintf(atributo1, "Area");
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            break;

        case 3:
            sprintf(atributo1, "PIB");
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            break;

        case 4:
            sprintf(atributo1, "Pontos Turisticos");
            valor1Carta1 = pontosTuristicos1;
            valor1Carta2 = pontosTuristicos2;
            break;

        case 5:
            sprintf(atributo1, "Densidade Populacional");
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;
            break;

        case 6:
            sprintf(atributo1, "PIB per Capita");
            valor1Carta1 = pibPerCapita1;
            valor1Carta2 = pibPerCapita2;
            break;

        default:
            printf("\nOpcao invalida no primeiro atributo!\n");
            return 0;
    }

    // ===== SEGUNDO MENU DINAMICO =====
    // O atributo escolhido no primeiro menu nao aparece novamente
    printf("\n===== SEGUNDO ATRIBUTO =====\n");
    printf("Escolha o segundo atributo para comparar:\n");

    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Populacional\n");
    if (opcao1 != 6) printf("6 - PIB per Capita\n");

    printf("Digite a opcao escolhida: ");
    scanf("%d", &opcao2);

    // Aqui eu impeço o jogador de escolher o mesmo atributo duas vezes
    if (opcao2 == opcao1) {
        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Aqui o switch pega os valores do segundo atributo escolhido
    switch (opcao2) {
        case 1:
            sprintf(atributo2, "Populacao");
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            break;

        case 2:
            sprintf(atributo2, "Area");
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            break;

        case 3:
            sprintf(atributo2, "PIB");
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            break;

        case 4:
            sprintf(atributo2, "Pontos Turisticos");
            valor2Carta1 = pontosTuristicos1;
            valor2Carta2 = pontosTuristicos2;
            break;

        case 5:
            sprintf(atributo2, "Densidade Populacional");
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;
            break;

        case 6:
            sprintf(atributo2, "PIB per Capita");
            valor2Carta1 = pibPerCapita1;
            valor2Carta2 = pibPerCapita2;
            break;

        default:
            printf("\nOpcao invalida no segundo atributo!\n");
            return 0;
    }

    // ===== COMPARACAO INDIVIDUAL DOS ATRIBUTOS =====
    printf("\n===== COMPARACAO DOS ATRIBUTOS =====\n");

    printf("\nAtributo 1: %s\n", atributo1);
    printf("%s: %.2f\n", cidade1, valor1Carta1);
    printf("%s: %.2f\n", cidade2, valor1Carta2);

    // Operador ternario usado para mostrar quem venceu no primeiro atributo
    // Na densidade, vence o menor valor. Nos outros atributos, vence o maior valor.
    if (opcao1 == 5) {
        printf("Vencedor do atributo 1: %s\n", 
            valor1Carta1 < valor1Carta2 ? cidade1 : 
            valor1Carta2 < valor1Carta1 ? cidade2 : "Empate");
    } else {
        printf("Vencedor do atributo 1: %s\n", 
            valor1Carta1 > valor1Carta2 ? cidade1 : 
            valor1Carta2 > valor1Carta1 ? cidade2 : "Empate");
    }

    printf("\nAtributo 2: %s\n", atributo2);
    printf("%s: %.2f\n", cidade1, valor2Carta1);
    printf("%s: %.2f\n", cidade2, valor2Carta2);

    // Operador ternario usado para mostrar quem venceu no segundo atributo
    if (opcao2 == 5) {
        printf("Vencedor do atributo 2: %s\n", 
            valor2Carta1 < valor2Carta2 ? cidade1 : 
            valor2Carta2 < valor2Carta1 ? cidade2 : "Empate");
    } else {
        printf("Vencedor do atributo 2: %s\n", 
            valor2Carta1 > valor2Carta2 ? cidade1 : 
            valor2Carta2 > valor2Carta1 ? cidade2 : "Empate");
    }

    // ===== SOMA DOS ATRIBUTOS =====
    // Para densidade populacional, usei o inverso na soma,
    // porque nesse atributo vence quem tem o menor valor.
    if (opcao1 == 5) {
        valor1Carta1 = 1 / valor1Carta1;
        valor1Carta2 = 1 / valor1Carta2;
    }

    if (opcao2 == 5) {
        valor2Carta1 = 1 / valor2Carta1;
        valor2Carta2 = 1 / valor2Carta2;
    }

    somaCarta1 = valor1Carta1 + valor2Carta1;
    somaCarta2 = valor1Carta2 + valor2Carta2;

    // ===== RESULTADO FINAL =====
    printf("\n===== RESULTADO FINAL =====\n");
    printf("Carta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    printf("\nAtributos escolhidos:\n");
    printf("1 - %s\n", atributo1);
    printf("2 - %s\n", atributo2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade1, somaCarta1);
    printf("%s: %.2f\n", cidade2, somaCarta2);

    // Operador ternario para mostrar o resultado final
    somaCarta1 > somaCarta2 ? 
        printf("\nResultado final: Carta 1 (%s) venceu!\n", cidade1) :
        somaCarta2 > somaCarta1 ? 
            printf("\nResultado final: Carta 2 (%s) venceu!\n", cidade2) :
            printf("\nResultado final: Empate!\n");

    return 0;
}