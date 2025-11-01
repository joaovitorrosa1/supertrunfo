#include <stdio.h>

int main(){
    
    int opcao1, opcao2;
    //Variaveis que serão utilizadas pra carta 1:
    unsigned long int populacao_carta1;
    int pontos_turisticos_carta1;
    float area_carta1, pib_carta1, densidade_populacional_carta1, pib_per_capita_carta1;
    char estado_carta1;
    char codigo_carta1[4];
    char nome_cidade_carta1[50];

    //Variaveis que serão utilizadas pra carta 2:
    unsigned long int populacao_carta2;
    int pontos_turisticos_carta2;
    float area_carta2, pib_carta2, densidade_populacional_carta2, pib_per_capita_carta2;
    char estado_carta2;
    char codigo_carta2[4];
    char nome_cidade_carta2[50];

    //Inserir informações da carta 1:
    printf("Bem vindo ao Super Trunfo, digite as informações da carta 1\n");    

    printf("\nEstado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta1);

    printf("Código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A03, B04)): ");
    scanf("%s", &codigo_carta1);

    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade_carta1);

    printf("População da cidade: ");
    scanf("%lu", &populacao_carta1);

    printf("Área da cidade em quilômetros quadrados: ");
    scanf("%f", &area_carta1);

    printf("O PIB da cidade: ");
    scanf("%f", &pib_carta1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    //Inserir informações da carta 2:
    printf("\nDigite agora as informações da carta 2\n");    

    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta2);

    printf("Código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A03, B04)): ");
    scanf("%s", &codigo_carta2);

    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade_carta2);

    printf("População da cidade: ");
    scanf("%lu", &populacao_carta2);

    printf("Área da cidade em quilômetros quadrados: ");
    scanf("%f", &area_carta2);

    printf("O PIB da cidade: ");
    scanf("%f", &pib_carta2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // Calculo da densidade populacional e do pib per capita da carta 1
    densidade_populacional_carta1 = populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = pib_carta1 / populacao_carta1;
    
    // Calculo da densidade populacional e do pib per capita da carta 2
    densidade_populacional_carta2 = populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = pib_carta2 / populacao_carta2;

    // Comparação de resultados
    printf("\nComparação de cartas!\n");
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Digite a opção escolhida: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo para comparação:\n");
    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Número de pontos turísticos\n");
    if (opcao1 != 5) printf("5. Densidade populacional\n");
    printf("Digite a opção escolhida: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2){
        printf("Você escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma_c1 = 0, soma_c2 = 0;

    // Escolha do primeiro atributo
    switch (opcao1){
        case 1:
            valor1_c1 = populacao_carta1;
            valor1_c2 = populacao_carta2;
            break;
        case 2:
            valor1_c1 = area_carta1;
            valor1_c2 = area_carta2;
            break;
        case 3:
            valor1_c1 = pib_carta1;
            valor1_c2 = pib_carta2;
            break;
        case 4:
            valor1_c1 = pontos_turisticos_carta1;
            valor1_c2 = pontos_turisticos_carta2;
            break;
        case 5:
            valor1_c1 = densidade_populacional_carta1;
            valor1_c2 = densidade_populacional_carta2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Escolha do segundo atributo
    switch (opcao2){
        case 1:
            valor2_c1 = populacao_carta1;
            valor2_c2 = populacao_carta2;
            break;
        case 2:
            valor2_c1 = area_carta1;
            valor2_c2 = area_carta2;
            break;
        case 3:
            valor2_c1 = pib_carta1;
            valor2_c2 = pib_carta2;
            break;
        case 4:
            valor2_c1 = pontos_turisticos_carta1;
            valor2_c2 = pontos_turisticos_carta2;
            break;
        case 5:
            valor2_c1 = densidade_populacional_carta1;
            valor2_c2 = densidade_populacional_carta2;
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    printf("\n=== RESULTADO DAS COMPARAÇÕES ===\n\n");

    printf("Carta 1: %s (%s)\n", nome_cidade_carta1, codigo_carta1);
    printf("Carta 2: %s (%s)\n\n", nome_cidade_carta2, codigo_carta2);

    printf("Atributo 1 escolhido: %d\n", opcao1);
    printf("%s: %.2f\n%s: %.2f\n\n", nome_cidade_carta1, valor1_c1, nome_cidade_carta2, valor1_c2);

    printf("Atributo 2 escolhido: %d\n", opcao2);
    printf("%s: %.2f\n%s: %.2f\n\n", nome_cidade_carta1, valor2_c1, nome_cidade_carta2, valor2_c2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome_cidade_carta1, soma_c1);
    printf("%s: %.2f\n\n", nome_cidade_carta2, soma_c2);

    // Regras para vitoria
    if (soma_c1 > soma_c2) {
        printf(">>> %s venceu a rodada!\n", nome_cidade_carta1);
    } else if (soma_c2 > soma_c1) {
        printf(">>> %s venceu a rodada!\n", nome_cidade_carta2);
    } else {
        printf(">>> Empate!\n");
    }

    return 0;
}
