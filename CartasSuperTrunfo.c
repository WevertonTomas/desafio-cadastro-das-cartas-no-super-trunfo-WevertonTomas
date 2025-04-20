#include <stdio.h>

int main(){
    
char estado1[50], codCard1[50], cidade1[50], estado2[50], codCard2[50], cidade2[50];
int pontoTuristico1, pontoTuristico2;
signed long int populacao1, populacao2;
float area1, pib1, area2, pib2, denPopular1, denPopular2, percapita1, percapita2, superpoder1, superpoder2;

printf("Vai começar o Super Trunfo, Prepare-se!!!!!\n\n");
printf("Digite os dados da Primeira carta.\n");

printf("Digite seu estado: ");
scanf("%s", estado1);
printf("Digite o seu Código: ");
scanf("%s", codCard1);
printf("Digite o Nome da Cidade: ");
scanf("%s", cidade1);
printf("Qual é o total da população? ");
scanf("%ld", &populacao1);
printf("Qual a Área em Km² da sua Cidade? ");
scanf("%f", &area1);
printf("Digite o PIB do seu Estado: ");
scanf("%f", &pib1);
printf("Qual a quantidade de Pontos Turísticos? ");
scanf("%d", &pontoTuristico1);

printf("\nOba!! Vi que você digitou os dados da sua Primeira Carta, agora vamos para a segunda? \n\n");
printf("Digite os dados da sua Segunda carta.\n");

printf("Digite seu estado: ");
scanf("%s", estado2);
printf("Digite o seu Código: ");
scanf("%s", codCard2);
printf("Digite o Nome da Cidade: ");
scanf("%s", cidade2);
printf("Qual é o total da população? ");
scanf("%ld", &populacao2);
printf("Qual a Área em Km² da sua Cidade? ");
scanf("%f", &area2);
printf("Digite o PIB do seu Estado: ");
scanf("%f", &pib2);
printf("Qual a quantidade de Pontos Turísticos?");
scanf("%d", &pontoTuristico2);

printf("\nDados da segunda carta inseridos, agora vamos ao comparativo!\n\n");

denPopular1 = populacao1 / area1;
percapita1 = pib1 / populacao1;
superpoder1 = populacao1 + area1 + pib1 + pontoTuristico1 + percapita1 + denPopular1;

printf("Carta 1: \n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codCard1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %ld\n", populacao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontoTuristico1);
printf("Densidade populacional: %.2f\n", denPopular1);
printf("PIB per Capita: %.2f\n", percapita1);
printf("Super Poder: %.2f\n\n", superpoder1);

denPopular2 = populacao2 / area2;
percapita2 = pib2 / populacao2;
superpoder2 = populacao2 + area2 + pib2 + pontoTuristico2 + percapita2 + denPopular2; 

printf("Carta 2: \n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codCard2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %ld\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);
printf("Densidade populacional: %.2f\n", denPopular2);
printf("PIB per Capita: %.2f\n", percapita2);
printf("Super Poder: %.2f\n\n\n", superpoder2);

printf("O Resultado da comparação das cartas Foi.......\n");
printf("Obs.: SIM -> 1 & NÃO -> 0\n\n");

printf("Carta 1 tem maior população que a Carta 2: %d\n", populacao1 > populacao2);
printf("Carta 1 tem menor população que a Carta 2: %d\n", populacao1 < populacao2);

printf("Carta 1 tem maior área que a Carta 2: %d\n", area1 > area2);
printf("Carta 1 tem menor área que a Carta 2: %d\n", area1 < area2);

printf("Carta 1 tem maior PIB que a Carta 2: %d\n", pib1 > pib2);
printf("Carta 1 tem menor PIB que a Carta 2: %d\n", pib1 < pib2);

printf("Carta 1 tem mais pontos turísticos que a Carta 2: %d\n", pontoTuristico1 > pontoTuristico2);
printf("Carta 1 tem menos pontos turísticos que a Carta 2: %d\n", pontoTuristico1 < pontoTuristico2);

printf("Carta 1 tem densidade populacional MELHOR (menor) que a Carta 2: %d\n", denPopular1 < denPopular2);
printf("Carta 1 tem densidade populacional PIOR (maior) que a Carta 2: %d\n", denPopular1 > denPopular2);

printf("Carta 1 tem maior PIB per capita que a Carta 2: %d\n", percapita1 > percapita2);
printf("Carta 1 tem menor PIB per capita que a Carta 2: %d\n", percapita1 < percapita2);

printf("Carta 1 tem maior Super Poder que a Carta 2: %d\n", superpoder1 > superpoder2);
printf("Carta 1 tem menor Super Poder que a Carta 2: %d\n", superpoder1 < superpoder2);

return 0;
}