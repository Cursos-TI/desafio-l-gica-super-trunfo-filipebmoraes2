#include <stdio.h>
int main() {
    //declaração das variáveis
    char estado1[2], codigo1[3], estado2[2], codigo2[3];
    char cidade1[30], cidade2[30];
    unsigned long int pop1, pop2;
    float area1, PIB1, area2, PIB2, densipop1, densipop2, PIBpercapita1, PIBpercapita2, superPoder1, superPoder2;
    int turismo1, turismo2;
    //declaração da variável de opção do switch
    int opcao;
    
    // Entrada das variáveis da carta1
    printf("Informe a letra do estado de SP:\n");
    scanf("%1s", estado1);
    printf("Informe o codigo do estado de SP (ex: 1):\n");
    scanf("%2s", codigo1);
    printf("Informe o nome da cidade:\n");
    scanf("%29s", cidade1);
    printf("Qual a populacao da cidade %s?\n", cidade1);
    scanf("%lu", &pop1);
    printf("Qual a area da cidade %s? (Em KM2):\n", cidade1);
    scanf("%f", &area1);
    printf("Qual o PIB da cidade %s? (Em R$):\n", cidade1);
    scanf("%f", &PIB1);
    printf("Quantos pontos turisticos a cidade %s possui?\n", cidade1);
    scanf("%d", &turismo1);
    
    // Entrada das variáveis da carta2
    printf("Informe a letra do estado do RJ:\n");
    scanf("%1s", estado2);
    printf("Informe o codigo do estado do RJ (ex: 2):\n");
    scanf("%2s", codigo2);
    printf("Informe o nome da cidade:\n");
    scanf("%29s", cidade2);
    printf("Qual a populacao da cidade %s?\n", cidade2);
    scanf("%lu", &pop2);
    printf("Qual a area da cidade %s? (Em KM2):\n", cidade2);
    scanf("%f", &area2);
    printf("Qual o PIB da cidade %s? (Em R$):\n", cidade2);
    scanf("%f", &PIB2);
    printf("Quantos pontos turisticos a cidade %s possui?\n", cidade2);
    scanf("%d", &turismo2);

    //Calculo da densidade populacional e da renda per capita, utilizando as variaveis densipop e PIPpercapita
    densipop1 = (float) pop1 / area1;
    densipop2 = (float) pop2 / area2;
    PIBpercapita1 = (float) PIB1 / pop1;
    PIBpercapita2 = (float) PIB2 / pop2;
    //Cálculo do super poder
    superPoder1 = (float) pop1 + area1 + PIB1 + turismo1 + PIBpercapita1 + (1 / densipop1);
    superPoder2 = (float) pop2 + area2 + PIB2 + turismo2 + PIBpercapita2 + (1 / densipop2);
    
    // Saídas das variáveis da carta1
    // printf("Carta1:\nLetra que representa o estado: %s\nCodigo do estado: %s\nCidade: %s\nPopulacao: %lu\nA cidade possui %.2f KM2\nPIB de R$ %.2f\nDensidade populacional: %.2f pessoas por km2\nRenda per capita: R$ %.2f por pessoa\nPossui %d pontos turisticos\nSuper Poder: %.2f\n\n", estado1, codigo1, cidade1, pop1, area1, PIB1, densipop1, PIBpercapita1, turismo1, superPoder1);
    
    // Saídas das variáveis da carta2
    // printf("Carta2:\nLetra que representa o estado: %s\nCodigo do estado: %s\nCidade: %s\nPopulacao: %lu\nA cidade possui %.2f KM2\nPIB de R$ %.2f\nDensidade populacional: %.2f pessoas por km2\nRenda per capita: R$ %.2f por pessoa\nPossui %d pontos turisticos\nSuper Poder: %.2f\n\n", estado2, codigo2, cidade2, pop2, area2, PIB2, densipop2, PIBpercapita2, turismo2, superPoder2);

    //switch e condicionais if.
    printf("Resultados:\nEscolha 1 - para atributo Populacao;\nEscolha 2 - para atributo Area Total;\nEscolha 3 - para atributo PIB;\nEscolha 4 - para atributo Pontos Turisticos;\nEscolha 5 - para atributo Densidade Populacional;\nEscolha 6 - para atributo PIP Per Capita;\nEscolha 7 - para Super Poder.\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Populacao:\n");
            if (pop1 > pop2) {
                printf("Carta 1 venceu!\n(%s: %lu > %s: %lu)\n", cidade1, pop1, cidade2, pop2);
            } else if (pop1 > pop2) {
                printf("Carta 2 venceu!\n(%s: %lu > %s: %lu)\n", cidade2, pop2, cidade1, pop1);
            } else {
                printf("Empate...\n(%s: %lu = %s: %lu)\n", cidade1, pop1, cidade2, pop2);
            }
            break;
        case 2:
            printf("Area total:\n");
            if (area1 > area2) {
                printf("Carta 1 venceu!\n(%s: %.2f > %s: %.2f)\n", cidade1, area1, cidade2, area2);
            } else if (area1 < area2) {
                printf("Carta 2 venceu!\n(%s: %.2f > %s: %.2f)\n", cidade2, area2, cidade1, area1);
            } else {
                printf("Empate...\n(%s: %.2f = %s: %.2f)\n", cidade1, area1, cidade2, area2);
            }
            break;
        case 3:
            printf("PIB:\n");
            if (PIB1 > PIB2) {
                printf("Carta 1 venceu!\n(%s: %.2f > %s: %.2f)\n", cidade1, PIB1, cidade2, PIB2);
            } else if (PIB1 < PIB2) {
                printf("Carta 2 venceu!\n(%s: %.2f > %s: %.2f)\n", cidade2, PIB2, cidade1, PIB1);
            } else {
                printf("Empate...\n(%s: %.2f = %s: %.2f)\n", cidade1, PIB1, cidade2, PIB2);
            }
            break;
        case 4:
            printf("Pontos turisticos:\n");
            if (turismo1 > turismo2) {
                printf("Carta 1 venceu!\n(%s: %d > %s: %d)\n", cidade1, turismo1, cidade2, turismo2);
            } else if (turismo1 < turismo2) {
                printf("Carta 2 venceu!\n(%s: %d > %s: %d)\n", cidade2, turismo2, cidade1, turismo1);
            } else {
                printf("Empate...\n(%s: %d = %s: %d)\n", cidade1, turismo1, cidade2, turismo2);
            }
            break;
        case 5:
            printf("Densidade Populacional:\n");
            if (densipop1 < densipop2) {
                printf("Carta 1 venceu!\n(%s: %.2f > %s: %.2f)\n", cidade1, densipop1, cidade2, densipop2);
            } else if (densipop1 > densipop2) {
                printf("Carta 2 venceu!\n(%s: %.2f > %s: %.2f)\n", cidade2, densipop2, cidade1, densipop1);
            } else {
                printf("Empate...\n(%s: %.2f = %s: %.2f)\n", cidade1, densipop1, cidade2, densipop2);
            }
            break;
        case 6:
            printf("PIB per capita:\n");
            if (PIBpercapita1 > PIBpercapita2) {
                printf("Carta 1 venceu!\n(%s: %.2f > %s: %.2f)\n", cidade1, PIBpercapita1, cidade2, PIBpercapita2);
            } else if (PIBpercapita1 < PIBpercapita2) {
                printf("Carta 2 venceu!\n(%s: %.2f > %s: %.2f)\n", cidade2, PIBpercapita2, cidade1, PIBpercapita1);
            } else {
                printf("Empate...\n(%s: %.2f = %s: %.2f)\n", cidade1, PIBpercapita1, cidade2, PIBpercapita2);
            }
            break;
        case 7:
            printf("Super poder:\n");
            if (superPoder1 > superPoder2) {
                printf("Carta 1 venceu!\n(%s: %.2f > %s: %.2f)\n", cidade1, superPoder1, cidade2, superPoder2);
            } else if (superPoder1 < superPoder2) {
                printf("Carta 2 venceu!\n(%s: %.2f > %s: %.2f)\n", cidade2, superPoder2, cidade1, superPoder1);
            } else {
                printf("Empate...\n(%s: %.2f = %s: %.2f)\n", cidade1, superPoder1, cidade2, superPoder2);
            }
            break;
        default:
            printf("Opcao invalida. Escolha entre 1 a 7.");
    }
    return 0;
}
