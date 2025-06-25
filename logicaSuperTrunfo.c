#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
     //Variáveis
     char nome_do_pais[25];
     int populacao,populacao2,numero_de_pontos_turisticos,numero_de_pontos_turisticos2;
     float PIB,PIB2,area_do_pais,area_do_pais2;

     char primeiroAtributo,segundoAtributo;
     int resultado1,resultado2;

     //Outras variáveis
     double densidade_demografica,densidade_demografica2,PIB_per_capita,PIB_per_capita2;

     //Gerar número aleatório e Entrada de dados
     srand(time(0));
     populacao2 = rand() % 1000000000;
     numero_de_pontos_turisticos2 = rand() % 1000;
     densidade_demografica2 = rand() % 4000;
     PIB2 = rand() % 10000000;

     //Início do jogo
     printf("***Super Trufo(Países)***\n");
     printf("Escolha um nome para o seu país\n");
      scanf("%s",nome_do_pais);
     printf("Quantas pessoas moram no país: \n");
      scanf("%d",&populacao);
     printf("Quantos pontos turísticos: \n");
      scanf("%d",&numero_de_pontos_turisticos);
     printf("Área do seu país: \n");
      scanf("%f",&area_do_pais);
   
      densidade_demografica = populacao / area_do_pais;

     printf("Quanto é o PIB do seu país: \n");
      scanf("%f",&PIB);

     //Escolhas
     printf("\nAgora escolha um atributo\n");
     printf("\n1. População\n");
     printf("2. PIB\n");
     printf("3. Densidade Demográfica\n");
     printf("4. Pontos Turísticos\n");
      scanf("%c",&primeiroAtributo);

     switch (primeiroAtributo) {
     case 1:
         printf("Você escolheu a opção População\n");
         resultado1 = populacao > populacao2 ? 1 : 0;

            printf("Agora escolha seu segundo atributo\n");
            printf("\n1. PIB\n");
            printf("2. Densidade Demográfica\n");
            printf("3. Pontos Turísticos\n");
               scanf("%c",&segundoAtributo);

            switch (segundoAtributo) {
            case 1:
               printf("Você escolheu a opção PIB\n");
            resultado2 = PIB > PIB2 ? 1 : 0;
            break;
            case 2:
               printf("Você escolheu a opção Densidade Demográfica\n");
            resultado2 = densidade_demografica > densidade_demografica2 ? 1 : 0;
            break;
            case 3:
               printf("Você escolheu a opção Pontos Turísticos\n");
            resultado2 = numero_de_pontos_turisticos > numero_de_pontos_turisticos2 ? 1 : 0;
            break;
            default:
               printf("Opção Inválida!\n");
            break;
            }
     break;
     case 2:
         printf("Você escolheu a opção PIB\n");
         resultado1 = PIB > PIB2 ? 1 : 0;

            printf("Agora escolha seu segundo atributo\n");
            printf("\n1. População\n");
            printf("2. Densidade Demográfica\n");
            printf("3. Pontos Turísticos\n");
              scanf("%c",&segundoAtributo);

            switch (segundoAtributo) {
            case 1:
               printf("Você escolheu a opção População\n");
            resultado2 = populacao > populacao2 ? 1 : 0;
            break;
            case 2:
               printf("Você escolheu a opção Densidade Demográfica\n");
            resultado2 = densidade_demografica > densidade_demografica2 ? 1 : 0;
            break;
            case 3:
               printf("Você escolheu a opção Pontos Turísticos\n");
            resultado2 = numero_de_pontos_turisticos > numero_de_pontos_turisticos2 ? 1 : 0;
            break;
            default:
               printf("Opção inválida!\n");
            break;
            }
     break;
     case 3:
         printf("Você escolheu a opção Densidade Demográfica\n");
         resultado1 = densidade_demografica > densidade_demografica2 ? 1 : 0;

            printf("Agora escolha seu segundo atributo\n");
            printf("\n1. População\n");
            printf("2. PIB\n");
            printf("3. Pontos Turísticos\n");
              scanf("%c",&segundoAtributo);

            switch (segundoAtributo) {
            case 1:
               printf("Você escolheu a opção População\n");
            resultado2 = populacao > populacao2 ? 1 : 0;
            break;
            case 2:
               printf("Você escolheu a opção PIB\n");
            resultado2 = PIB > PIB2 ? 1 : 0;
            break;
            case 3:
               printf("Você escolheu a opção Pontos Turísticos\n");
            resultado2 = numero_de_pontos_turisticos > numero_de_pontos_turisticos2 ? 1 : 0;
            break;
            default:
               printf("Opção inválida!\n");
            break;
            }
     break;
     case 4:
         printf("Você escolheu a opção Pontos Turísticos\n");
         resultado1 = numero_de_pontos_turisticos > numero_de_pontos_turisticos2 ? 1 : 0;

            printf("Agora escolheu seu segundo atributo\n");
            printf("\n1. População\n");
            printf("2. PIB\n");
            printf("3. Densidade Demográfica\n");
              scanf("%c",&segundoAtributo);

            switch (segundoAtributo) {
            case 1:
               printf("Você escolheu a opção População\n");
            resultado2 = populacao > populacao2 ? 1 : 0;
            break;
            case 2:
               printf("Você escolheu a opção PIB\n");
            resultado2 = PIB > PIB2 ? 1 : 0;
            break;
            case 3:
               printf("Você escolheu a opção Densidade Demográfica\n");
            resultado2 = densidade_demografica > densidade_demografica2 ? 1 : 0;
            break;
            default:
               printf("Opção inválida!\n");
            break;
            }
     break;
     default:
         printf("Opção inválida!\n");
     break;
     }

     //Sistema
     char* nome_sistema;

     srand(time(0));

     int nome_do_pais_do_sistema = rand() % 3;

     switch (nome_do_pais_do_sistema) {
     case 0:
      nome_sistema = "Orlanda";
     break;
     case 1:
      nome_sistema = "Estados Unidos";
     break;
     case 2:
      nome_sistema = "Russia";
     break;
     }
     
     //Saída de Dados
     printf("\n***Resultados!***\n");
     printf("\nNome do País 1: %s\n",nome_do_pais);
     printf("Nome do País 2: %s\n",nome_sistema);
     printf("População do País 1: %d\n",populacao);
     printf("População do País 2: %d\n",populacao2);
     printf("PIB do país 1: %d\n",(int)PIB);
     printf("PIB do país 2: %d\n",(int)PIB2);
     printf("Densidade Demográfica do país 1: %d\n",(int)densidade_demografica);
     printf("Densidade Demográfica do país 2: %d\n",(int)densidade_demografica2);

     if (resultado1 && resultado2) {
      printf("Parabéns, você venceu!\n");
     } else if (resultado1 != resultado2) {
      printf("Empate!\n");
     } else {
      printf("Você perdeu!\n");
     }

    return 0;
}
