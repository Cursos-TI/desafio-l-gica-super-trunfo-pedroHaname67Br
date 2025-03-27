#include <stdio.h>

int main() {
     //Variáveis
     char nome_da_cidade;
     char codigo_da_cidade;
     int populacao,numero_de_pontos_turisticos;
     float PIB,area_da_cidade;

     //Variáveis calculáveis pelo sistema
     double densidade_populacional,PIB_per_capita;

     //Entrada de Dados
     printf("***Bem-Vindo(a)ao Super-Trunfo***\n");
     printf("\nDigite os dados da primeira carta!\n");
     printf("\nNome da Cidade: \n");
        scanf("%s",&nome_da_cidade);
     printf("Código da cidade(Utilize apena 1 letra de A-Z): \n");
        scanf("%c",&codigo_da_cidade);
     printf("População da Cidade: \n");
        scanf("%d",&populacao);
     printf("Número de Pontos Turísticos: \n");
        scanf("%d",&numero_de_pontos_turisticos);
     printf("Quanto é o PIB da cidade: \n");
        scanf("%f",&PIB);
     printf("Área da Cidade: \n");
        scanf("%f",&area_da_cidade);
     
    //Cálculos do Sistema
    densidade_populacional = populacao / area_da_cidade;
    PIB_per_capita = PIB / populacao;

    //Carta 2

    //Variáveis 2
    char nome_da_cidade2;
    char codigo_da_cidade2;
    int populacao2,numero_de_pontos_turisticos2;
    float PIB2,area_da_cidade2;

    //Variáveis calculáveis pelo sistema 2
    double densidade_populacional2,PIB_per_capita2;

    //Entrada de Dados 2
    printf("***Bem-Vindo(a)ao Super-Trunfo***\n");
    printf("\nDigite os dados da Segunda carta!\n");
    printf("\nNome da Cidade: \n");
       scanf("%s",&nome_da_cidade2);
    printf("Código da cidade(Utilize apena 1 letra de A-Z): \n");
       scanf("%c",&codigo_da_cidade2);
    printf("População da Cidade: \n");
       scanf("%d",&populacao2);
    printf("Número de Pontos Turísticos: \n");
       scanf("%d",&numero_de_pontos_turisticos2);
    printf("Quanto é o PIB da cidade: \n");
       scanf("%f",&PIB2);
    printf("Área da Cidade: \n");
       scanf("%f",&area_da_cidade2);
    
   //Cálculos do Sistema 2
   densidade_populacional2 = populacao2 / area_da_cidade2;
   PIB_per_capita2 = PIB2 / populacao2;

   //Saída de Dados
   printf("\n***Saída de Dados***\n");
   printf("Nome da cidade 1: %s\n",nome_da_cidade);
   printf("Nome da cidade 2: %s\n",nome_da_cidade2);
   printf("Código da cidade 1: %c\n",codigo_da_cidade);
   printf("Código da cidade 2: %c\n",codigo_da_cidade2);
   //Saída de Dados (População)
   if (populacao > populacao2) {
    printf("A cidade 1 tem mais habitantes!\n");
   } else {
    printf("A cidade 2 tem mais habitantes!\n");
   }

   //Saída de Dados (Pontos Turísticos)
   if (numero_de_pontos_turisticos > numero_de_pontos_turisticos2) {
    printf("Cidade 1 tem mais pontos turísticos para visitar!\n");
   } else {
    printf("Cidade 2 tem mais pontos turísticos para visitar!\n");
   }

   //Saída de Dados (PIB)
   if (PIB > PIB2) {
    printf("O PIB da cidade 1 é maior!\n");
   } else {
    printf("O PIB da cidade 2 é maior!\n");
   }

   //Saída de Dados (Densidade Populacional)
   if (densidade_populacional > densidade_populacional2) {
    printf("Cidade 1 tem mais habitantes por metro quadrado!\n");
   } else {
    printf("Cidade 2 tem mais habitantes por metro quadrado!\n");
   }

   //Saída de Dados (PIB per Capita)
   if (PIB_per_capita > PIB_per_capita2) {
    printf("Cidade 1 tem um PIB per Capita maior!\n");
   } else {
    printf("Cidade 2 tem um PIB per Capita maior!\n");
   }

    return 0;
}
