#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[30];
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1; // PIB em bilhões
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis da Carta 2
    char estado2[30];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2; // PIB em bilhões
    float densidade2, pibPerCapita2, superPoder2;

    // ===== Entrada Carta 1 =====
    printf("Digite o estado da Carta 1: ");
    scanf(" %s", estado1);

    printf("Digite o codigo da Carta 1: ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao da Carta 1: ");
    scanf(" %lu", &populacao1);

    printf("Digite a area da Carta 1 (em km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB da Carta 1 (em bilhoes de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // PIB em reais
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // ===== Entrada Carta 2 =====
    printf("\nDigite o estado da Carta 2: ");
    scanf(" %s", estado2);

    printf("Digite o codigo da Carta 2: ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao da Carta 2: ");
    scanf(" %lu", &populacao2);

    printf("Digite a area da Carta 2 (em km²): ");
    scanf(" %f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhoes de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; // PIB em reais
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // ===== Comparações =====
    int vitoriaPopulacao = (populacao1 > populacao2);
    int vitoriaArea = (area1 > area2);
    int vitoriaPib = (pib1 > pib2);
    int vitoriaPontos = (pontosTuristicos1 > pontosTuristicos2);
    int vitoriaDensidade = (densidade1 < densidade2); // menor vence
    int vitoriaPibPerCapita = (pibPerCapita1 > pibPerCapita2);
    int vitoriaSuperPoder = (superPoder1 > superPoder2);

    // ===== Saída Comparações =====
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", vitoriaPopulacao);
    printf("Area: Carta 1 venceu (%d)\n", vitoriaArea);
    printf("PIB: Carta 1 venceu (%d)\n", vitoriaPib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", vitoriaPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vitoriaDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vitoriaPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vitoriaSuperPoder);

    return 0;
}
