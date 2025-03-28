#include <stdio.h>

int main() {

    /* CARTA 1*/
    int numeroCarta;
    char estado[50];
    char codigo[50];
    char nome_cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;


    printf("Digite o número da carta: \n");
    scanf("%d", &numeroCarta);

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o código da Carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%e", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", &populacao);
    printf("Área: %e\n", &area);
    printf("PIB: %f\n", &PIB);
    printf("Número de pontos turisticos: %d\n", &pontos_turisticos);

    return 0;
}
