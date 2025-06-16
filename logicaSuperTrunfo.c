#include <stdio.h>
#include <string.h>

// Estrutura para representar uma cidade
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
} Cidade;

int main() {
    Cidade cidade1, cidade2;
    int pontos1 = 0, pontos2 = 0;

    // Cadastro da primeira cidade
    printf("Cadastro da primeira cidade:\n");
    printf("Nome: ");
    scanf(" %[^\n]", cidade1.nome);  // lê string com espaços
    printf("População: ");
    scanf("%d", &cidade1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &cidade1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade1.pib);

    // Cadastro da segunda cidade
    printf("\nCadastro da segunda cidade:\n");
    printf("Nome: ");
    scanf(" %[^\n]", cidade2.nome);
    printf("População: ");
    scanf("%d", &cidade2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &cidade2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Comparação de atributos
    printf("\nComparando as cidades:\n");

    if (cidade1.populacao > cidade2.populacao) {
        printf("População: %s vence\n", cidade1.nome);
        pontos1++;
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("População: %s vence\n", cidade2.nome);
        pontos2++;
    } else {
        printf("População: Empate\n");
    }

    if (cidade1.area > cidade2.area) {
        printf("Área: %s vence\n", cidade1.nome);
        pontos1++;
    } else if (cidade1.area < cidade2.area) {
        printf("Área: %s vence\n", cidade2.nome);
        pontos2++;
    } else {
        printf("Área: Empate\n");
    }

    if (cidade1.pib > cidade2.pib) {
        printf("PIB: %s vence\n", cidade1.nome);
        pontos1++;
    } else if (cidade1.pib < cidade2.pib) {
        printf("PIB: %s vence\n", cidade2.nome);
        pontos2++;
    } else {
        printf("PIB: Empate\n");
    }

    // Resultado final
    printf("\nResultado final:\n");
    if (pontos1 > pontos2) {
        printf("A cidade vencedora é: %s\n", cidade1.nome);
    } else if (pontos2 > pontos1) {
        printf("A cidade vencedora é: %s\n", cidade2.nome);
    } else {
        printf("Empate geral entre %s e %s!\n", cidade1.nome, cidade2.nome);
    }

    return 0;
}
