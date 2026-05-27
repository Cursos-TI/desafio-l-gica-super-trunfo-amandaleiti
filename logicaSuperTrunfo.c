#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código serve para desenvolver a lógica de comparação de cartas.
// O programa cadastra duas cartas, calcula os dados e compara um atributo escolhido.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Aqui eu cadastrei os dados da primeira carta
    char estado1[30] = "AC";
    char codigo1[10] = "A01";
    char cidade1[50] = "Rio Branco";
    int populacao1 = 419452;
    float area1 = 8835.15;
    float pib1 = 10.9; // PIB em bilhões de reais
    int pontosTuristicos1 = 8;

    // Aqui eu cadastrei os dados da segunda carta
    char estado2[30] = "AM";
    char codigo2[10] = "B02";
    char cidade2[50] = "Manaus";
    int populacao2 = 2063689;
    float area2 = 11401.09;
    float pib2 = 103.0; // PIB em bilhões de reais
    int pontosTuristicos2 = 15;

    // Cadastro das Cartas:
    // Neste nível, as duas cartas foram cadastradas diretamente no código.
    // Usei os dados das cidades para fazer a comparação entre elas.

    // Aqui eu calculei a densidade populacional de cada carta
    // Fórmula: população dividida pela área
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Aqui eu calculei o PIB per capita de cada carta
    // Como o PIB está em bilhões, multipliquei por 1 bilhão antes de dividir pela população
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Comparação de Cartas:
    // Desenvolvi a lógica de comparação entre duas cartas.
    // Utilizei estruturas de decisão if, else if e else para comparar o atributo população.

    // Neste desafio eu escolhi comparar as cartas pelo atributo população
    printf("Comparacao de cartas - Atributo: Populacao\n\n");

    // Aqui eu mostro o atributo escolhido para comparação nas duas cartas
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", cidade2, estado2, populacao2);

    printf("Dados completos das cartas:\n\n");

    // Aqui eu exibo todos os dados da primeira carta
    printf("Carta 1: %s (%s)\n", cidade1, estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f reais\n\n", pibPerCapita1);

    // Aqui eu exibo todos os dados da segunda carta
    printf("Carta 2: %s (%s)\n", cidade2, estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f reais\n\n", pibPerCapita2);

    printf("Resultado da comparacao:\n");

    // Exemplo:
    // if (populacao1 > populacao2) {
    //     printf("Carta 1 tem maior população.\n");
    // } else {
    //     printf("Carta 2 tem maior população.\n");
    // }

    // Aqui eu comparo a população das duas cartas
    // Como o atributo escolhido foi população, vence a carta com o maior valor
    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}