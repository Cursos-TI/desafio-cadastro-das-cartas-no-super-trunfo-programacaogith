#include <stdio.h>

int main(){
  int carta = 1;
  char estado [50] = "Alagoas";
  char codigo [20] = "A01";
  char cidade [50] = "Maceió";
  int populacao = 100000;
  float area = 509.552;
  float pib = 4787760;
  int pontosturistico = 50;
  float densidadepopulacional = populacao/area;
  float pibpercapita = pib/populacao;

  printf ("carta: %d \n", carta);
  printf ("estado: %s \n", estado);
  printf ("codigo: %s \n", codigo);
  printf ("cidade: %s \n", cidade);
  printf ("populacao: %d habitantes \n", populacao);
  printf ("area: %.2f km² \n", area);
  printf ("pib: %.2f bilhoes de reai \n", pib);
  printf ("pontos turistico: %d \n", pontosturistico);
  printf ("densidadepopulacional: %.2f hab/km² \n", densidadepopulacional);
  printf ("pibpercapita: %f reais \n", pibpercapita);

  int  carta2 = 2;
  char estado2 [20] = "Alagoas";
  char codigo2 [10] = "B02";
  char cidade2 [20] = "Batalha";
  int populacao2 = 17076;
  float area2 = 321131;
  float pib2 = 73569929;
  int pontoturistico = 10;
  float densidadepopulacional2 = area2/populacao2; 
  float pibpercapta2 = pib2/populacao2;

 
  printf ("carta: %d \n", carta2);
  printf ("estado: %s \n", estado2);
  printf ("codigo : %s \n", codigo2);
  printf ("cidade: %s \n", cidade2);
  printf ("populacao: %d habitantes \n", populacao2);
  printf ("area: %.2f km² \n", area2);
  printf ("pib: %.2f mlhoes de reais \n", pib2);
  printf ("pontos turisticos: %d \n", pontoturistico);
  printf ("densidadepopulacional: %.2f hab/km² \n", densidadepopulacional2);
  printf ("pibpercapta: %.2f reais \n", pibpercapta2);


 
  

 return 0;
}
