#include <stdio.h>

int main() {

    // ===== DADOS DA CARTA 1 =====
    // Aqui eu deixei a primeira carta já cadastrada no código
    char estado1[30] = "AC";
    char codigo1[10] = "A01";
    char cidade1[50] = "Rio Branco";
    int populacao1 = 419452;
    float area1 = 8835.15;
    float pib1 = 10.90;
    int pontosTuristicos1 = 8;

    // ===== DADOS DA CARTA 2 =====
    // Aqui eu deixei a segunda carta já cadastrada no código
    char estado2[30] = "AM";
    char codigo2[10] = "B02";
    char cidade2[50] = "Manaus";
    int populacao2 = 2063689;
    float area2 = 11401.09;
    float pib2 = 103.00;
    int pontosTuristicos2 = 15;

    // ===== CÁLCULOS DAS CARTAS =====
    // Aqui eu calculo a densidade populacional de cada carta
    // Fórmula: população dividida pela área
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Aqui eu calculo o PIB per capita de cada carta
    // Multipliquei o PIB por 1 bilhão porque o PIB está em bilhões de reais
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Esta variável vai guardar a opção escolhida pelo usuário no menu
    int opcao;

    // ===== EXIBIÇÃO DAS CARTAS =====
    // Aqui eu mostro os dados completos das duas cartas antes da comparação
    printf("===== Dados das Cartas =====\n\n");

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

    // ===== MENU INTERATIVO =====
    // Aqui o usuário escolhe qual atributo quer comparar
    printf("===== Menu de Comparacao =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite a opcao escolhida: ");
    scanf("%d", &opcao);

    printf("\n===== Resultado da Comparacao =====\n");

    // ===== SWITCH =====
    // O switch verifica qual opção o usuário escolheu
    switch (opcao) {

        case 1:
            // Comparação por população
            // Neste atributo, vence a carta com maior valor
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            // Comparação por área
            // Neste atributo, vence a carta com maior valor
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f km2\n", cidade1, area1);
            printf("%s: %.2f km2\n", cidade2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            // Comparação por PIB
            // Neste atributo, vence a carta com maior valor
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhoes de reais\n", cidade1, pib1);
            printf("%s: %.2f bilhoes de reais\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            // Comparação por pontos turísticos
            // Neste atributo, vence a carta com maior valor
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d pontos turisticos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos turisticos\n", cidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            // Comparação por densidade populacional
            // Neste atributo, a regra é diferente: vence a carta com MENOR valor
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("%s: %.2f hab/km2\n", cidade1, densidade1);
            printf("%s: %.2f hab/km2\n", cidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            // O default é executado se o usuário digitar uma opção inválida
            printf("Opcao invalida! Escolha uma opcao de 1 a 5.\n");
            break;
    }

    return 0;
}