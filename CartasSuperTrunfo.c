#include <stdio.h>
#include <locale.h>

int main(){

    //variaveis inicias para atributos de cartas.
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
    scanf("%s", estado1);
    
    printf("Cidade de destaque: ");
    scanf("%s", cidade1);
        
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
    scanf("%s", estado2);
    
    printf("cidade: ");
    scanf("%s", cidade2);
                 
    printf("populacao: "); 
    scanf("%f", &populacao2);
        
    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB:");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%f", &pt2);
    
    
    //calculando algumas características (Densidade Populacional, PIB per capita e o Superpoder)
    float denspop1 = populacao1 / area1;
    float denspop2 = populacao2 / area2;
    float pibpc1 = pib1 / populacao1;
    float pibpc2 = pib2 / populacao2;
    float superpoder1 = populacao1 + area1 + pib1 + pt1;
    float superpoder2 = populacao2 + area2 + pib2 + pt2;

   //menu interativo 
    printf("\n--cartas cadastradas, vamos jogar!!--\n");
    printf("Comparar atributos\n");
    printf("(1)populacao\n");
    printf("(2)area\n");
    printf("(3)pib\n");
    printf("(4)pontos turisticos\n");
    printf("(5)densidade populacional\n");
    printf("(6)PIB per capita\n");
    printf("(7)todos os atributos(superpoder)\n");
   
    
    //comparando as cartas
    int sw;
    printf("digite: ");
    scanf("%d", &sw);
        
    switch (sw)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("\nCarta 1 venceu!!\n\n");
            
            printf("Carta 1\n");
            printf("Estado: %s\n", estado1);
            printf("Cidade: %s\n", cidade1);
            printf("Populacao: %.2f Habitantes\n", populacao1);

            printf("Carta 2\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Populacao: %.2f Habitantes\n", populacao2);

        }else if (populacao1 < populacao2)
        {
            printf("\nCarta 2 venceu!!\n\n");

            printf("Carta 1\n");
            printf("Estado: %s\n", estado1);
            printf("Cidade: %s\n", cidade1);
            printf("Populacao: %.2f Habitantes\n", populacao1);

            printf("Carta 2\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Populacao: %.2f Habitantes\n", populacao2);

        }else {
            printf("\nA disputa deu empate!!\n\n");
            
            printf("Carta 1\n");
            printf("Estado: %s\n", estado1);
            printf("Cidade: %s\n", cidade1);
            printf("Populacao: %.2f Habitantes\n", populacao1);
            
            printf("Carta 2\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Populacao: %.2f Habitantes\n", populacao2);
            }break;
        
    case 2:
            if (area1 > area2)
            {
            printf("\nCarta 1 venceu!!\n\n");
                
            printf("Carta 1\n");
            printf("Estado: %s\n", estado1);
            printf("Cidade: %s\n", cidade1);
            printf("Area em km quadrado: %.2f km\n", area1);

            printf("Carta 2\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Area em km quadrado: %.2f \n", area2);

        }else if (area1 < area2)
        {
            printf("\nCarta 2 venceu!!\n\n");

            printf("Carta 1\n");
            printf("Estado: %s\n", estado1);
            printf("Cidade: %s\n", cidade1);
            printf("Area em km quadrado: %.2f \n", area1);

            printf("Carta 2\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Area em km quadrado: %.2f \n", area2);

        }else {
            printf("\nA disputa deu empate!!\n\n");
                
            printf("Carta 1\n");
            printf("Estado: %s\n", estado1);
            printf("Cidade: %s\n", cidade1);
            printf("Area em km quadrado: %.2f \n", area1);

            printf("Carta 2\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Area em km quadrado: %.2f \n", area2);
            }break;
            
    case 3:
            if (pib1 > pib2)
            {
            printf("\nCarta 1 venceu!!\n\n");

            printf("Carta 1\n");
            printf("Estado: %s\n", estado1);
            printf("Cidade: %s\n", cidade1);
            printf("Pib: R$%.2f \n", pib1);

            printf("Carta 2\n");
            printf("Estado: %s\n", estado2);
            printf("Cidade: %s\n", cidade2);
            printf("Pib: R$%.2f \n", pib2);

            }else if (pib1 < pib2)
            {
                printf("\nCarta 2 venceu!!\n\n");

                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Pib: R$%.2f \n", pib1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Pib: R$%.2f \n", pib2);

            }else {
                printf("\nA disputa deu empate!!\n\n");
                
                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Pib: R$%.2f \n", pib1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Pib: R$%.2f \n", pib2);
            }break;
        
    case 4:
                if (pt1 > pt2)
                {
                printf("\nCarta 1 venceu!!\n\n");
                
                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Pontos turisticos: %.2f \n", pt1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Pontos turisticos: %.2f \n", pt2);

            }else if (pt1 < pt2)
            {
                printf("\nCarta 2 venceu!!\n\n");

                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Pontos turisticos: %.2f \n", pt1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Pontos turisticos: %.2f \n", pt2);

            }else {
                printf("\nA disputa deu empate!!\n\n");
                
                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Pontos turisticos: %.2f \n", pt1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Pontos turisticos: %.2f \n", pt2);
            }break;
            
    case 5:
                if (denspop1 < denspop2)
                {
                printf("\nCarta 1 venceu!!\n\n");
                
                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Densidade populacional: %.2f Habitantes por km quadrado\n", denspop1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Densidade populacional: %.2f Habitantes por km quadrado\n", denspop2);

            }else if (denspop1 > denspop2)
            {
                printf("\nCarta 2 venceu!!\n\n");

                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Densidade populacional: %.2f Habitantes por km quadrado\n", denspop1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Densidade populacional: %.2f Habitantes por km quadrado\n", denspop2);

            }else {
                printf("\nA disputa deu empate!!\n\n");
                
                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Densidade populacional: %.2f Habitantes por km quadrado\n", denspop1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Densidade populacional: %.2f Habitantes por km quadrado\n", denspop2);
            }break;

    case 6:
                if (pibpc1 > pibpc2)
                {
                printf("\nCarta 1 venceu!!\n\n");
                
                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Pib per Capita: R$%.2f\n", pibpc1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Pib per Capita: R$%.2f\n", pibpc2);

            }else if (pibpc1 < pibpc2)
            {
                printf("\nCarta 2 venceu!!\n\n");

                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Pib per Capita: R$%.2f\n", pibpc1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Pib per Capita: R$%.2f\n", pibpc2);

            }else {
                printf("\nA disputa deu empate!!\n\n");
                
                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Pib per Capita: R$%.2f\n", pibpc1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Pib per Capita: R$%.2f\n", pibpc2);
            }break;

    case 7:
                if (superpoder1 > superpoder2)
                {
                printf("\nCarta 1 venceu!!\n\n");
                
                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Super poder da carta: %.2f\n", superpoder1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Super poder da carta: %.2f\n", superpoder2);

            }else if (superpoder1 < superpoder2)
            {
                printf("\nCarta 2 venceu!!\n\n");

                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Super poder da carta: %.2f\n", superpoder1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Super poder da carta: %.2f\n", superpoder2);

            }else {
                printf("\nA disputa deu empate!!\n\n");
                
                printf("Carta 1\n");
                printf("Estado: %s\n", estado1);
                printf("Cidade: %s\n", cidade1);
                printf("Super poder da carta: %.2f\n", superpoder1);

                printf("Carta 2\n");
                printf("Estado: %s\n", estado2);
                printf("Cidade: %s\n", cidade2);
                printf("Super poder da carta: %.2f\n", superpoder2);
            }break;

            default:
            printf("Opcao invalida\n");
            break;
           }
            
return 0;
} 