#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char carta1[15], carta2[15];
    char estado1[15], estado2[15];
    char cidade1[15], cidade2[15];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float pt1, pt2;
    

     //cadastro da carta 1!!!!!!!!
    printf("vamos comecar, primeiro vamos cadastrar a carta 1!\n");
    printf("Informe as caracteristicas da sua carta\n");
    printf("Nome do estado: ");
    scanf("%s", &estado1);
    printf("Cidade de destaque: ");
    scanf("%s", &cidade1);
        
    printf("Populacao: "); 
          
    scanf("%f", &populacao1);
        
    printf("Area em km2: ");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%f", &pt1);

    
    //cadastro da carta 2!!!!!!!!!!
    printf("\nCadastro finalizado, vamos prosseguir e cadastrar a carta 2\n\n");
    printf("Informe as caracteristicas da sua carta\n");
    printf("estado: ");
    scanf("%s", &estado2);
    printf("cidade: ");
    scanf("%s", &cidade2);
                 
    printf("populacao: "); 
          
    scanf("%f", &populacao2);
        
    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%f", &pt2);
    

    //exibindo iformaçoes na tela

    printf("\nAqui estao as informacoes de cada carta\n");

    printf("\ncarta 1: \n\n");
    printf("pais: %s\n", estado1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %.2f\n", populacao1);
    printf("area: %.2fkm2\n", area1);
    printf("pib: R$%.2f\n", pib1);
    printf("pontos turisticos: %.2f\n", pt1);
    
    printf("\ncarta 2: \n\n");
    printf("pais: %s\n", estado2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %.2f\n", populacao2);
    printf("area: %.2fkm2\n", area2);
    printf("pib: R$%.2f\n", pib2);
    printf("pontos turisticos: %.2f\n", pt2);

    return 0;
}
