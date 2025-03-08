#include <stdio.h>

int main() {
  char estado [50] = "Alagoas";
  char codigo [20] = "A01";
  char cidade [50] = "Maceió";
  int populacao = 100000;
  float area = 509.552;
  float pib = 4.787760835;
  int pontosturistico = 50;


  printf ("estado: %s \n", estado);
  printf ("codigo da carta: %s \n", codigo);
  printf ("cidade: %s \n", cidade);
  printf ("populacao: %d habitantes \n", populacao);
  printf ("area: %.2f mil km \n", area);
  printf ("pib: %.2f bi \n", pib);
  printf ("pontosturistico: %d \n", pontosturistico);



    return 0;
}
