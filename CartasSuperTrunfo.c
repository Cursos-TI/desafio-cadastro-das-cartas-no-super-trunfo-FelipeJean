#include <stdio.h>
int main (){

char cidade1[50], cidade2[50];
int populacao1, populacao2, pontoturistico1, pontoturistico2; 
float area1, area2, pib1, pib2, superpoder1, superpoder2; //quanto menos a densidade maior o poder

//dados da carta 1
printf("qual nome da cidade1?:");
scanf("%s", cidade1);
printf("qual pib?:");
scanf("%f", &pib1);
printf("qual area?:");
scanf("%f", &area1);
printf("qual população?:");
scanf("%d", &populacao1);
printf("quantos pontos turisticos?:");
scanf("%d", &pontoturistico1);
//Dados da carta 2
printf("qual nome da cidade2?:");
scanf("%s", cidade2);
printf("qual pib?:");
scanf("%f", &pib2);
printf("qual area?:");
scanf("%f", &area2);
printf("qual populacao?:");
scanf("%d", &populacao2);
printf("quantos pontos turisticos?:");
scanf("%d", &pontoturistico2);

//Dados da Carta 1

double densidadepopulacional1 = populacao1/area1;// calcular densidade populacional carta 1

double pibpercapta1 = pib1/populacao1;// calcular pib per capita da carta 1

superpoder1 = (float)populacao1+ pib1+ area1+(float)pontoturistico1+pibpercapta1+(1.0f/densidadepopulacional1);



printf("dados da carta 1\n");
printf("nome da cidade: %s\n", cidade1);
printf("pib e: %.2f\n", pib1);
printf("area e: %.2f\n", area1);
printf("população e: %d\n", populacao1);
printf("pontos turisticos e:  %d\n", pontoturistico1);
printf("A densidade populacional é %.2f\n", densidadepopulacional1);
printf("O PIB per capita é: %.2f\n", pibpercapta1);

//dados da carta 2

double densidadepopulacional2 = populacao2/area2;// calcular densidade populaciona2 carta 2

double pibpercapta2 = pib2/populacao2;// calcular pib per capita da carta 2

superpoder2 = (float)populacao2+ pib2+ area2+(float)pontoturistico2+pibpercapta2+(1.0f/densidadepopulacional2);

printf("dados da carta 2\n");
printf("nome da cidade: %s\n", cidade2);
printf("pib e: %.2f\n", pib2);
printf("area e:  %.2f\n", area2);
printf("populacao: %d\n", populacao2);
printf("pontos turisticos e: %d\n", pontoturistico2);
printf("A densidade populaciona1 é %.2f\n", densidadepopulacional2);
printf("O PIB per capita é: %.2f\n", pibpercapta2);
printf("o super poder e; %.2f\n", superpoder2);

//comparar carta
printf("\nComparandopopulacao:");
if (populacao1> populacao2){
   printf("carta 1 venceu!\n");
}else if  (populacao1 > populacao2){
   printf("carta  venceu!\n");
} else {
    printf("empate!\n");
}
//comparar carta
printf("\nComparandipib:");
if (pib1> pib2){
   printf("carta 1 venceu!\n");
}else if  (pib1 > pib2){
   printf("carta  venceu!\n");
} else {
    printf("empate!\n");
}
    //comparar carta
printf("\nComparandoarea:");
if (area1> area2){
   printf("carta 1 venceu!\n");
} else if  (area1 > area2){
   printf("carta  venceu!\n");
} else {
    printf("empate!\n");
}
        //comparar carta
printf("\nComparando pontosturisticos:");
if (pontoturistico1> pontoturistico2){
   printf("carta 1 venceu!\n");
} else if  (pontoturistico1 > pontoturistico2){
   printf("carta  venceu!\n");
} else {
    printf("empate!\n");
}
         //comparar carta
printf("\nComparando desindadepopulacional:");
if (densidadepopulacional1 < densidadepopulacional2){
   printf("carta 1 venceu!\n");
} else if  (densidadepopulacional1 < densidadepopulacional2){
   printf("carta  venceu!\n");
} else {
    printf("empate!\n");
}
         //comparar carta
printf("\nComparando pibpercapital:");
if (pibpercapta1 > pibpercapta2){
   printf("carta 1 venceu!\n");
}else if  ( pibpercapta1 > pibpercapta2){
   printf("carta  venceu!\n");
} else {
    printf("empate!\n");
}
         //comparar carta
printf("\nComparando super poder:");
if (superpoder1 > superpoder2){
   printf("carta 1 venceu!\n");
} else if  ( superpoder1 > superpoder2){
   printf("carta  venceu!\n");
} else {
    printf("empate!\n");
}


   
return 0;
}

