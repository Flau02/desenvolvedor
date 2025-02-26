#include <stdio.h>

int main() {

    char codigo_1[3], estado_1[20], cidade_1[25]; // Declaração de variáveis carta 1
    char codigo_2[3], estado_2[20], cidade_2[25]; // Declaração de variáveis carta 2
    int populacao_1, turisticos_1;
    int populacao_2, turisticos_2;
    float pib_1, area_1; 
    float pib_2, area_2;
   
    printf("** JOGO SUPER TRUNFO ** \n\n");
    
    //Imprime as orientações de cadastro das cartas

    printf("CADASTRAR CARTAS: \n\n"); 
    printf("Regra de cadastro das cartas: \n\n");
    printf("Serão oito estados, identificados pelas letras de A a H.\n");
    printf("Cada estado terá quatro cidades, numeradas de 1 a 4.\n");
    printf("A combinação da letra do estado e o número da cidade\n");
    printf("define o código da carta (por exemplo, A01, A02, B01, B02).\n");
    printf("Vamos começar? \n");

    //Entradas para cadastro das informações da carta 1
    
    printf("Digite o código da cidade da carta 1: "); 
    scanf("%s",codigo_1);

    printf("Digite o nome do estado da carta 1: ");
    scanf(" %20[^\n]",estado_1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %25[^\n]",cidade_1);
    
    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao_1);
    
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib_1);
   
    printf("Digite a área da carta 1: ");
    scanf("%f", &area_1);
    
    printf("Digite o número de pontos turistícos da carta 1:");
    scanf("%d", &turisticos_1);
   
    printf("\n");

    //Imprime as informações cadastradas da carta 1
    
    printf(" Código da carta 1: %s \n Estado 1: %s \n Cidade 1: %s \n População 1: %d milhões \n PIB 1: %.2f bilhões \n Área 1: %.3f km quadrados \n Pontos turísticos 1: %d \n ",codigo_1,estado_1,cidade_1,populacao_1,pib_1,area_1,turisticos_1);

    //Entradas para cadastro das informações da carta 2

    printf("Digite o código da cidade 2: "); 
    scanf("%s",codigo_2);

    printf("Digite o nome do estado: ");
    scanf(" %20[^\n]",estado_2);

    printf("Digite o nome da cidade: ");
    scanf(" %25[^\n]",cidade_2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao_2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib_2);
   
    printf("Digite a área: ");
    scanf("%f", &area_2);
    
    printf("Digite o número de pontos turistícos:");
    scanf("%d", &turisticos_2);
   
    printf("\n");

    //Imprime as informações cadastradas da carta 2
    
    printf(" Código da carta 2: %s \n Estado 2: %s \n Cidade 2: %s \n População 2: %d milhões \n PIB 2: %.2f bilhões \n Área 2: %.3f km quadrados \n Pontos turísticos 2: %d \n ",codigo_2,estado_2,cidade_2,populacao_2,pib_2,area_2,turisticos_2);










    return 0;
}
