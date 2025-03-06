#include <stdio.h>

int main() {
    char estado[2], cod[3], nomecidade[20], nomecidade2[20], estado2[2], cod2[3];
    int pntturis, pntturis2;
    float superP1, superP2, areakm, pib, areakm2, pib2, densipop, densipop2, pibcap, pibcap2;
    unsigned long int populacao, populacao2;

    printf("Digite o primeiro estado (de A ate H): ");
    scanf("%1s", estado);

    printf("Digite o codigo (de 1 a 4): ");
    scanf("%2s", cod);

    printf("Digite o nome da primeira cidade: ");
    scanf("%19s", nomecidade);

    printf("Qual a quantidade de habitantes?: ");
    scanf("%lu", &populacao);

    printf("Digite o tamanho da cidade (em km2): ");
    scanf("%f", &areakm);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    
    printf("Quantos pontos turisticos?: ");
    scanf("%d", &pntturis);

    densipop = (populacao/areakm);
    pibcap = (pib/populacao);

    superP1 = (float)(populacao + areakm + pib + pntturis + pibcap) - densipop; 

    printf("\nPrimeira cidade cadastrada com sucesso \n");

    // cidade dois
    printf("\nDigite o segundo estado (de A ate H): ");
    scanf("%1s", estado2);

    printf("Digite o codigo (de 1 a 4): ");
    scanf("%2s", cod2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%19s", nomecidade2);

    printf("Qual a quantidade de habitantes?: ");
    scanf("%lu", &populacao2);
    
    printf("Digite o tamanho da cidade (em km2): ");
    scanf("%f", &areakm2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2); 

    printf("Quantos pontos turisticos?: ");
    scanf("%d", &pntturis2); 

    densipop2 = (populacao2/areakm2);
    pibcap2 = (pib2/populacao2);
    
    superP2 = (float)((populacao2 + areakm2 + pib2 + pntturis2 + pibcap2) - densipop2); 

     /*

    // resultados carta 1 

    printf("\n- Carta1 -\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s0%s\n", estado, cod);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km2\n", areakm);
    printf("Pib: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pntturis);
    printf("Pib per Capta: %.2f\n", pibcap);
    printf("Densidade Populacional: %.2f\n",densipop);
    printf("super poder 1: %.2f\n",superP1);

    // resultados carta 2
    printf("\n- Carta 2 -\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s0%s\n", estado2, cod2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km2\n", areakm2);
    printf("Pib: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pntturis2);
    printf("Pib per Capta: %.2f\n", pibcap2);
    printf("Densidade Populacional: %.2f\n",densipop2);
    printf("super poder 2: %.2f\n",superP2);
    
    */

    printf("\n - Resultado do Duelo -\n");
    printf("\nPopulacao: Carta %d venceu (%d)\n", (populacao < populacao2)+1,populacao > populacao2);
    printf("Area: carta %d venceu(%d)\n", (areakm < areakm2)+1, areakm > areakm2);
    printf("Pib: %d venceu (%d)\n",(pib < pib2)+1, pib > pib2);
    printf("Pontos turisticos: %d venceu (%d)\n", (pntturis < pntturis2)+1, pntturis > pntturis2);
    printf("Densidade Populacional: %d venceu (%d)\n", (densipop > densipop2)+1, densipop < densipop2);
    printf("Pib per Capta: %d venceu (%d)\n", (pibcap < pibcap2)+1, pibcap > pibcap2);
    printf("Super Poder: %d venceu (%d)\n", (superP1 < superP2)+1, superP1 > superP2);

    return 0;
}
