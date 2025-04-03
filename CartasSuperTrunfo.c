#include <stdio.h>

int main() {

    /* CARTA 1*/
    int numeroCarta = 1;
    char estado[50];
    char codigo[50];
    char nome_cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;



    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o código da Carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (populacao / area);
    PIB_per_capita = (PIB / populacao);


    printf("Carta: %d\n", numeroCarta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d", &populacao);
    printf("Área: %f\n", &area);
    printf("PIB: %f\n", &PIB);
    printf("Número de pontos turisticos: %d\n", &pontos_turisticos);
    printf("Densidade populacional: %f hab/km² \n",  &densidade_populacional);
    printf("PIB per capita: %f reais \n", &PIB_per_capita);

    /* CARTA 2*/
    int numeroCarta2 = 2;
    char estado2[50];
    char codigo2[50];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float PIB_per_capita2;


    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da Carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = (populacao2 / area2);
    PIB_per_capita2 = (PIB2 / populacao2);

    printf("Carta: %d\n", &numeroCarta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", &populacao2);
    printf("Área: %f\n", &area2);
    printf("PIB: %f\n", &PIB2);
    printf("Número de pontos turisticos: %d\n", &pontos_turisticos2);
    printf("Densidade populacional: %f hab/km² \n",  &densidade_populacional2);
    printf("PIB per capita: %f reais \n", &PIB_per_capita2);

    return 0;
}
