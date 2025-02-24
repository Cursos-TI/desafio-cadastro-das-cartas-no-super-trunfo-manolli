#include <stdio.h>

int main() {
    // ------------ Declaração das variáveis (Carta 1) ------------
    char estado1;              // Estado (A-H)
    char codigo1[5];           // Ex.: "A01"
    unsigned long int pop1;    // População
    float area1;               // Área (em km²)
    float pib1;                // PIB (em bilhões)
    int pontosTur1;            // Número de Pontos Turísticos

    // Variáveis calculadas (Carta 1)
    float dens1;               // Densidade Populacional = pop1 / area1
    float ppc1;                // PIB per Capita = pib1 / pop1
    float superPoder1;         // Soma de todos os atributos, com 1/dens1

    // ------------ Declaração das variáveis (Carta 2) ------------
    char estado2;
    char codigo2[5];
    unsigned long int pop2;
    float area2;
    float pib2;
    int pontosTur2;

    // Variáveis calculadas (Carta 2)
    float dens2;
    float ppc2;
    float superPoder2;

    // ------------ Entrada de dados (Carta 1) ------------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (Ex.: A01): ");
    scanf(" %4s", codigo1);

    printf("Digite a Populacao: ");
    scanf("%lu", &pop1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTur1);

    // ------------ Entrada de dados (Carta 2) ------------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (Ex.: A01): ");
    scanf(" %4s", codigo2);

    printf("Digite a Populacao: ");
    scanf("%lu", &pop2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTur2);

    // ------------ Cálculo dos atributos derivados (Carta 1) ------------
    // Cast para float em pop1/pop2 para evitar divisão truncada
    dens1 = (float)pop1 / area1;      // Densidade Populacional
    ppc1  = pib1 / (float)pop1;       // PIB per Capita
    superPoder1 = (float)pop1 + area1 + pib1 + (float)pontosTur1
                  + ppc1 + (1.0f / dens1);

    // ------------ Cálculo dos atributos derivados (Carta 2) ------------
    dens2 = (float)pop2 / area2;
    ppc2  = pib2 / (float)pop2;
    superPoder2 = (float)pop2 + area2 + pib2 + (float)pontosTur2
                  + ppc2 + (1.0f / dens2);

    // ------------ Exibição dos dados de cada carta ------------
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", pop1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTur1);
    printf("Densidade Populacional: %.2f hab/km2\n", dens1);
    printf("PIB per Capita: %.2f bilhoes/hab\n", ppc1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", pop2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTur2);
    printf("Densidade Populacional: %.2f hab/km2\n", dens2);
    printf("PIB per Capita: %.2f bilhoes/hab\n", ppc2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ------------ Comparacao (Carta 1 vs Carta 2) ------------
    // A expressão lógica (pop1 > pop2) resulta em 1 se verdadeiro, 0 se falso
    // Para a Densidade Populacional, vence a menor densidade (dens1 < dens2)
    // Para os demais, vence a maior.

    int compPop   = (pop1 > pop2);
    int compArea  = (area1 > area2);
    int compPib   = (pib1 > pib2);
    int compTur   = (pontosTur1 > pontosTur2);
    int compDens  = (dens1 < dens2);   // Menor densidade vence
    int compPpc   = (ppc1 > ppc2);
    int compSuper = (superPoder1 > superPoder2);

    // ------------ Exibindo resultados da comparação ------------
    // "1" se a Carta 1 vence, "0" se a Carta 2 vence
    printf("\n=== Comparacao das Cartas (1 se Carta 1 vence, 0 se Carta 2 vence) ===\n");
    printf("Populacao (maior vence): %d\n", compPop);
    printf("Area (maior vence): %d\n", compArea);
    printf("PIB (maior vence): %d\n", compPib);
    printf("Pontos Turisticos (maior vence): %d\n", compTur);
    printf("Densidade (menor vence): %d\n", compDens);
    printf("PIB per Capita (maior vence): %d\n", compPpc);
    printf("Super Poder (maior vence): %d\n", compSuper);

    return 0;
}
