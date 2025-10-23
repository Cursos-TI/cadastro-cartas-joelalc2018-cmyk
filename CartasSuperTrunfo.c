#include <stdio.h>

int main() {

    char nomeCidade[50];
    char estado[3];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Digite o estado (UF): ");
    scanf("%s", estado);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n===== CARTA DA CIDADE =====\n");
    printf("Cidade: %s\n", nomeCidade);
    printf("Estado: %s\n", estado);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}


