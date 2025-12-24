#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // ===== ENTRADA CARTA 1 =====
    printf("Cadastro da Carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pibPerCapita1 + (1.0 / densidade1);

    // ===== ENTRADA CARTA 2 =====
    printf("\nCadastro da Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pibPerCapita2 + (1.0 / densidade2);

    // ===== EXIBIÇÃO DAS CARTAS =====
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhões\nPontos Turisticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, densidade1, pibPerCapita1, superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhões\nPontos Turisticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibPerCapita2, superPoder2);

    // ===== COMPARAÇÃO DE ATRIBUTOS =====
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta %s venceu (%d)\n", (populacao1 > populacao2) ? "1" : "2", (populacao1 > populacao2) ? 1 : 0);
    printf("Area: Carta %s venceu (%d)\n", (area1 > area2) ? "1" : "2", (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %s venceu (%d)\n", (pib1 > pib2) ? "1" : "2", (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turisticos: Carta %s venceu (%d)\n", (pontos1 > pontos2) ? "1" : "2", (pontos1 > pontos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %s venceu (%d)\n", (densidade1 < densidade2) ? "1" : "2", (densidade1 < densidade2) ? 1 : 0);
    printf("PIB per Capita: Carta %s venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? "1" : "2", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);
    printf("Super Poder: Carta %s venceu (%d)\n", (superPoder1 > superPoder2) ? "1" : "2", (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}
