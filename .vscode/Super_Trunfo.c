#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Informe o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo de densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 * 1000000000 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 * 1000000000 / populacao2;

    int opcao1, opcao2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    // Primeiro menu de atributos
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao1);

    // Segundo menu de atributos (sem repetir o primeiro)
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != opcao1) {
            switch(i) {
                case 1: printf("%d - População\n", i); break;
                case 2: printf("%d - Área\n", i); break;
                case 3: printf("%d - PIB\n", i); break;
                case 4: printf("%d - Número de pontos turísticos\n", i); break;
                case 5: printf("%d - Densidade populacional\n", i); break;
                case 6: printf("%d - PIB per capita\n", i); break;
            }
        }
    }
    printf("Digite a opção: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("\nErro: o segundo atributo não pode ser igual ao primeiro!\n");
        return 1;
    }

    printf("\nComparação entre %s e %s\n\n", nomeCidade1, nomeCidade2);

    // Função de comparação dos atributos escolhidos
    for (int i = 1; i <= 2; i++) {
        int opcao = (i == 1) ? opcao1 : opcao2;
        printf("Atributo %d: ", i);

        switch(opcao) {
            case 1: // População
                printf("População\n");
                valor1_carta1 = (i == 1) ? populacao1 : valor1_carta1;
                valor1_carta2 = (i == 1) ? populacao2 : valor1_carta2;
                valor2_carta1 = (i == 2) ? populacao1 : valor2_carta1;
                valor2_carta2 = (i == 2) ? populacao2 : valor2_carta2;
                printf("%s: %d habitantes\n", nomeCidade1, populacao1);
                printf("%s: %d habitantes\n\n", nomeCidade2, populacao2);
                break;

            case 2: // Área
                printf("Área\n");
                valor1_carta1 = (i == 1) ? area1 : valor1_carta1;
                valor1_carta2 = (i == 1) ? area2 : valor1_carta2;
                valor2_carta1 = (i == 2) ? area1 : valor2_carta1;
                valor2_carta2 = (i == 2) ? area2 : valor2_carta2;
                printf("%s: %.2f km²\n", nomeCidade1, area1);
                printf("%s: %.2f km²\n\n", nomeCidade2, area2);
                break;

            case 3: // PIB
                printf("PIB\n");
                valor1_carta1 = (i == 1) ? pib1 : valor1_carta1;
                valor1_carta2 = (i == 1) ? pib2 : valor1_carta2;
                valor2_carta1 = (i == 2) ? pib1 : valor2_carta1;
                valor2_carta2 = (i == 2) ? pib2 : valor2_carta2;
                printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
                printf("%s: %.2f bilhões\n\n", nomeCidade2, pib2);
                break;

            case 4: // Número de pontos turísticos
                printf("Número de Pontos Turísticos\n");
                valor1_carta1 = (i == 1) ? pontosTuristicos1 : valor1_carta1;
                valor1_carta2 = (i == 1) ? pontosTuristicos2 : valor1_carta2;
                valor2_carta1 = (i == 2) ? pontosTuristicos1 : valor2_carta1;
                valor2_carta2 = (i == 2) ? pontosTuristicos2 : valor2_carta2;
                printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
                printf("%s: %d pontos\n\n", nomeCidade2, pontosTuristicos2);
                break;

            case 5: // Densidade populacional
                printf("Densidade Populacional\n");
                valor1_carta1 = (i == 1) ? densidade1 : valor1_carta1;
                valor1_carta2 = (i == 1) ? densidade2 : valor1_carta2;
                valor2_carta1 = (i == 2) ? densidade1 : valor2_carta1;
                valor2_carta2 = (i == 2) ? densidade2 : valor2_carta2;
                printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
                printf("%s: %.2f hab/km²\n\n", nomeCidade2, densidade2);
                break;

            case 6: // PIB per capita
                printf("PIB per Capita\n");
                valor1_carta1 = (i == 1) ? pibPerCapita1 : valor1_carta1;
                valor1_carta2 = (i == 1) ? pibPerCapita2 : valor1_carta2;
                valor2_carta1 = (i == 2) ? pibPerCapita1 : valor2_carta1;
                valor2_carta2 = (i == 2) ? pibPerCapita2 : valor2_carta2;
                printf("%s: R$ %.2f\n", nomeCidade1, pibPerCapita1);
                printf("%s: R$ %.2f\n\n", nomeCidade2, pibPerCapita2);
                break;

            default:
                printf("Opção inválida.\n");
                return 1;
        }
    }

    // Regra especial para densidade: menor vence
    float soma_carta1 = (opcao1 == 5 ? -valor1_carta1 : valor1_carta1) + (opcao2 == 5 ? -valor2_carta1 : valor2_carta1);
    float soma_carta2 = (opcao1 == 5 ? -valor1_carta2 : valor1_carta2) + (opcao2 == 5 ? -valor2_carta2 : valor2_carta2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma_carta1);
    printf("%s: %.2f\n", nomeCidade2, soma_carta2);

    printf("\nResultado final:\n");
    (soma_carta1 > soma_carta2) ? printf("%s venceu!\n", nomeCidade1) :
    (soma_carta2 > soma_carta1) ? printf("%s venceu!\n", nomeCidade2) :
    printf("Empate!\n");

    return 0;
}