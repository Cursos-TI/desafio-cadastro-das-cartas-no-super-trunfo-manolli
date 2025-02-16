#include <stdio.h>
#include <string.h>

// Definindo uma estrutura para representar uma carta de cidade
typedef struct {
    char estado[3]; // Estado brasileiro (sigla, ex: SP, RJ)
    char codigo[5]; // Código da cidade (ex: SP01)
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void cadastrarCartas(Carta* cartas, int* totalCartas) {
    int numCartas;
    
    // Pergunta quantas cartas o usuário deseja cadastrar
    printf("\nQuantas cartas deseja cadastrar? ");
    scanf("%d", &numCartas);
    getchar(); // Limpar o buffer

    for (int i = 0; i < numCartas; i++) {
        printf("\nCadastro da carta %d:\n", *totalCartas + 1);
        
        // Lê a sigla do estado (2 caracteres) corretamente
        printf("Digite o estado (sigla de 2 letras, ex: SP): ");
        scanf("%2s", cartas[*totalCartas].estado);
        getchar(); // Limpa o buffer do teclado

        printf("Digite o código da carta (ex: SP01): ");
        scanf("%4s", cartas[*totalCartas].codigo);
        getchar();

        printf("Digite o nome da cidade: ");
        fgets(cartas[*totalCartas].nomeCidade, 50, stdin);
        strtok(cartas[*totalCartas].nomeCidade, "\n"); // Remove o '\n' do final

        printf("Digite a população: ");
        scanf("%d", &cartas[*totalCartas].populacao);
        getchar(); // Limpar o buffer após a leitura

        printf("Digite a área em km²: ");
        scanf("%f", &cartas[*totalCartas].area);
        getchar(); // Limpar o buffer após a leitura

        printf("Digite o PIB: ");
        scanf("%f", &cartas[*totalCartas].pib);
        getchar(); // Limpar o buffer após a leitura

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cartas[*totalCartas].pontosTuristicos);
        getchar(); // Limpar o buffer após a leitura

        // Exibe os dados cadastrados
        printf("\nCarta cadastrada com sucesso:\n");
        printf("Estado: %s\n", cartas[*totalCartas].estado);
        printf("Código: %s\n", cartas[*totalCartas].codigo);
        printf("Cidade: %s\n", cartas[*totalCartas].nomeCidade);
        printf("População: %d\n", cartas[*totalCartas].populacao);
        printf("Área: %.2f km²\n", cartas[*totalCartas].area);
        printf("PIB: %.2f\n", cartas[*totalCartas].pib);
        printf("Pontos turísticos: %d\n", cartas[*totalCartas].pontosTuristicos);

        (*totalCartas)++;
    }
}

int main() {
    Carta cartas[32]; // Array para armazenar até 32 cartas
    int totalCartas = 0;
    int opcao;

    do {
        // Menu inicial
        printf("\n===== Menu Inicial =====\n");
        printf("Total de cartas cadastradas: %d\n", totalCartas);
        printf("1. Cadastrar novas cartas\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpar o buffer após a leitura

        switch (opcao) {
            case 1:
                // Chama a função para cadastrar cartas
                cadastrarCartas(cartas, &totalCartas);
                break;

            case 2:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
