#include <stdio.h>


int main(){


    //algumas variaveis iniciais
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
    
    //calculando algumas características
    float denspop1 = populacao1 / area1;
    float denspop2 = populacao2 / area2;
    float pibpc1 = pib1 / populacao1;
    float pibpc2 = pib2 / populacao2;
    float superpoder1 = populacao1 + area1 + pib1 + pt1;
    float superpoder2 = populacao2 + area2 + pib2 + pt2;

    //exibindo informações das cartas
    printf("\nAqui estao as informacoes de cada carta\n");

    //informaçoes da carta 1
    printf("\ncarta 1: \n\n");
    printf("estado: %s\n", estado1);
    printf("cidade: %s\n", cidade1);
    printf("populacao: %.2f\n", populacao1);
    printf("area: %.2fkm2\n", area1);
    printf("pib: R$%.2f\n", pib1);
    printf("pontos turisticos: %.2f\n", pt1);
    printf("densidade populacional: %.2fhab/km2\n", denspop1);
    printf("PIB per Capita: %.2f\n", pibpc1);
    printf("Potencia da carta: %.2f\n", superpoder1);
    
    //informaçoes da carta 2
    printf("\ncarta 2: \n\n");
    printf("estado: %s\n", estado2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %.2f\n", populacao2);
    printf("area: %.2fkm2\n", area2);
    printf("pib: R$%.2f\n", pib2);
    printf("pontos turisticos: %.2f\n", pt2);
    printf("densidade populacional: %.2fhab/km2\n", denspop2);
    printf("PIB per Capita: %.2f\n", pibpc2);
    printf("Potencia da carta: %.2f\n", superpoder2);

    //comparação das cartas
    int ResultPop = (populacao1 > populacao2);
    int resultarea = (area1 > area2);
    int resultpib = (pib1 > pib2);
    int resultpt = (pt1 > pt2);
    int resultdenspop = (denspop1 < denspop2);
    int resultpibpc = (pibpc1 > pibpc2);
    int resultpoder = (superpoder1 > superpoder2);

    printf("\nComparacao de cartas: \n");
    
    printf("Populacao: ");
    if (populacao1 > populacao2){
        printf("carta 1 venceu! (%s)\n", cidade1);
    } else{
        printf("carta 2 venceu! (%s)\n", cidade2);
    }

    printf("Area: ");
    if(area1 > area2){
        printf("Carta 1 venceu! (%s)\n", cidade1);
    } else{
        printf("Carta 2 venceu! (%s)\n", cidade2);
    }

    printf("PIB>: ");
    if(pib1 > pib2){
    printf("Carta 1 venceu! (%s)\n", cidade1);
    } else{
        printf("Carta 2 venceu! (%s)\n", cidade2);
    }

    printf("Pontos turisticos: ");
    if (pt1 > pt2){
        printf("Carta 1 venceu! (%s)\n", cidade1);
    } else{
        printf("Carta 2 venceu! (%s)\n", cidade2);
    }

    printf("Densidade populacional: ");
    if (denspop1 < denspop2){
        printf("Carta 1 venceu! (%s)\n", cidade1);
    } else{
        printf("Carta 2 venceu! (%s)\n", cidade2);
    }
    
    printf("Pib per capita: ");
    if (pibpc1 > pibpc2){
        printf("Carta 1 venceu! (%s)\n", cidade1);
    } else{
        printf("Carta 2 venceu! (%s)\n", cidade2);
    }
    
    printf("Potencia da carta: ");
    if (superpoder1 > superpoder2){
        printf("Carta 1 venceu! (%s)\n", cidade1);
    } else{
        printf("Carta 2 venceu! (%s)\n", cidade2);
    }
    

return 0;
} 