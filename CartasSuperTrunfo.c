#include <stdio.h>


int main(){

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
    
    float denspop1 = populacao1 / area1;
    float denspop2 = populacao2 / area2;
    float pibpc1 = pib1 / populacao1;
    float pibpc2 = pib2 / populacao2;

    printf("\nAqui estao as informacoes de cada carta\n");

    printf("\ncarta 1: \n\n");
    printf("estado: %s\n", estado1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %.2f\n", populacao1);
    printf("area: %.2fkm2\n", area1);
    printf("pib: R$%.2f\n", pib1);
    printf("pontos turisticos: %.2f\n", pt1);
    printf("densidade populacional: %.2f\n", denspop1);
    printf("PIB per Capita: %.2f\n", pibpc1);
    
    printf("\ncarta 2: \n\n");
    printf("estado: %s\n", estado2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %.2f\n", populacao2);
    printf("area: %.2fkm2\n", area2);
    printf("pib: R$%.2f\n", pib2);
    printf("pontos turisticos: %.2f\n", pt2);
    printf("densidade populacional: %.2f\n", denspop2);
    printf("PIB per Capita: %.2f\n", pibpc2);

return 0;
} 