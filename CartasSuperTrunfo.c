#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[5];  // Ex.: "A01", "B03"
    char nome1[50];   // Armazena o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ---------- Leitura dos dados da primeira carta ----------
    printf("Digite o Estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (Ex.: A01) da Carta 1: ");
    scanf(" %4s", codigo1);

    printf("Digite o Nome da Cidade da Carta 1: ");
    scanf(" %[^\n]", nome1);  
    /*
       A leitura com " %[^\n]" permite capturar a string
       até encontrar uma quebra de linha.
    */

    printf("Digite a Populacao da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km²) da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais) da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // ---------- Leitura dos dados da segunda carta ----------
    printf("\nDigite o Estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (Ex.: A01) da Carta 2: ");
    scanf(" %4s", codigo2);

    printf("Digite o Nome da Cidade da Carta 2: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a Populacao da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km²) da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais) da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // ---------- Exibição dos dados da primeira carta ----------
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // ---------- Exibição dos dados da segunda carta ----------
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
