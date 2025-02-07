#include <stdio.h>

int main() {

    char codigo[3], estado[20], cidade[25];
    int populacao, turisticos;
    float pib, area; 
   
    printf("** JOGO SUPER TRUNFO ** \n\n");

    printf("CADASTRAR CARTAS: \n\n");
    printf("Regra de cadastro das cartas: \n\n");
    printf("Serão oito estados, identificados pelas letras de A a H.\n");
    printf("Cada estado terá quatro cidades, numeradas de 1 a 4.\n");
    printf("A combinação da letra do estado e o número da cidade\n");
    printf("define o código da carta (por exemplo, A01, A02, B01, B02).\n");
    printf("Vamos começar? \n");
    
    printf("Digite o código da cidade: ");
    scanf("%s",codigo);

    printf("Digite o nome do estado: ");
    scanf(" %20[^\n]",estado);

    printf("Digite o nome da cidade: ");
    scanf(" %25[^\n]",cidade);
    
    printf("Digite a população: ");
    scanf("%d", &populacao);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib);
   
    printf("Digite a área: ");
    scanf("%f", &area);
    
    printf("Digite o número de pontos turistícos:");
    scanf("%d", &turisticos);
   
    printf("\n");
    
    printf(" Código da carta: %s \n Estado: %s \n Cidade: %s \n População: %d milhões \n PIB: %.2f bilhões \n Área: %.3f km quadrados \n Pontos turísticos: %d \n ",codigo,estado,cidade,populacao,pib,area,turisticos);

    return 0;
}
