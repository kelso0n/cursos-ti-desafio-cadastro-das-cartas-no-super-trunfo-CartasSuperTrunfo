
#include <stdio.h>

int main() {
    // Carta 1 - São Paulo
    int populacao1 = 12300000;         // ~12,3 milhões
    float area1 = 1521.0;             // km²
    float pib1 = 699.28;              // bilhões R$
    int pontos_turisticos1 = 25;      // número aproximado

    // Carta 2 - Rio de Janeiro
    int populacao2 = 6748000;         // ~6,7 milhões
    float area2 = 1200.3;             // km²
    float pib2 = 400.0;               // bilhões R$
    int pontos_turisticos2 = 30;      // número aproximado

    // Exibição das cartas
    printf("=== Carta 1 - São Paulo ===\n");
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões R$\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

    printf("\n=== Carta 2 - Rio de Janeiro ===\n");
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões R$\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

    // Comparações estilo Super Trunfo
    printf("\n=== Comparação dos Atributos ===\n");

    // População
    if (populacao1 > populacao2)
        printf("População: São Paulo vence!\n");
    else
        printf("População: Rio de Janeiro vence!\n");

    // Área
    if (area1 > area2)
        printf("Área: São Paulo vence!\n");
    else
        printf("Área: Rio de Janeiro vence!\n");

    // PIB
    if (pib1 > pib2)
        printf("PIB: São Paulo vence!\n");
    else
        printf("PIB: Rio de Janeiro vence!\n");

    // Pontos turísticos
    if (pontos_turisticos1 > pontos_turisticos2)
        printf("Pontos turísticos: São Paulo vence!\n");
    else
        printf("Pontos turísticos: Rio de Janeiro vence!\n");

    return 0;
}
