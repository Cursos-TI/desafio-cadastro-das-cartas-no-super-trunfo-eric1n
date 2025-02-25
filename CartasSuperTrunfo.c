#include <stdio.h>

int main() {
    char estado[2], cod[3], nomecidade[20], nomecidade2[20], estado2[2], cod2[3];
    int populacao, pntturis, populacao2, pntturis2;
    float areakm, pib, areakm2, pib2;

    printf("Digite o primeiro estado (de A ate H): ");
    scanf("%1s", estado);

    printf("Digite o codigo (de 1 a 4): ");
    scanf("%2s", cod);

    printf("Digite o nome da primeira cidade: ");
    scanf("%19s", nomecidade);

    printf("Qual a quantidade de habitantes?: ");
    scanf("%d", &populacao);

    printf("Quantos pontos turisticos?: ");
    scanf("%d", &pntturis);

    printf("Digite o tamanho da cidade (em km2): ");
    scanf("%f", &areakm);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("\nPrimeira cidade cadastrada com sucesso \n");

    // cidade dois
    printf("\nDigite o segundo estado (de A ate H): ");
    scanf("%1s", estado2);

    printf("Digite o codigo (de 1 a 4): ");
    scanf("%2s", cod2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%19s", nomecidade2);

    printf("Qual a quantidade de habitantes?: ");
    scanf("%d", &populacao2); 

    printf("Quantos pontos turisticos?: ");
    scanf("%d", &pntturis2);

    printf("Digite o tamanho da cidade (em km2): ");
    scanf("%f", &areakm2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    // resultados carta 1
    printf("\n- Carta1 -\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s0%s\n", estado, cod);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %f Km2\n", areakm);
    printf("Pib: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pntturis);

    // resultados carta 2
    printf("\n- Carta 2 -\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s0%s\n", estado2, cod2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f Km2\n", areakm2);
    printf("Pib: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pntturis2);

    return 0;
}