#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Definição das variáveis 

int main() {
  
  // Declaração das variáveis da carta 1
  
  char Estado1 = 'A';
  char Codigo1[4] = "A1";
  char Cidade1[50] = "Rio de Janeiro";
  int Populacao1 = 6730729;
  float Area1 = 1200.33; // km²
  float PIB1 = 350.0; //bilhões de reais
  int PontosTuristicos1 =  30;

  // Declaração das variáveis da carta 2
  
  char Estado2 = 'B';
  char Codigo2[4] = "B1";
  char Cidade2[50] = "Paraíba";
  int Populacao2 = 4164468;
  float Area2 = 56.467; // km²
  float PIB2 = 96.96; // bilhões de reais
  int PontosTuristicos2 = 20;

// Exibição da Carta 1

printf ("Carta 1: \n");
printf ("Estado: %c \n" , Estado1);
printf ("Código: %s \n" , Codigo1 );
printf ("Cidade: %s \n" , Cidade1);
printf ("População: %d \n" , Populacao1);
printf ("Área: %d \n" , Area1);
printf ("PIB: %d \n" , PIB1);
printf ("Pontos Turísticos: %d \n" , PontosTuristicos1);

printf ("\n"); // Linha em Branco

// Exibição da Carta 2

printf ("Carta 2: \n");
printf ("Estado: %c \n" , Estado2);
printf ("Código: %s \n" , Codigo2);
printf ("Cidade: %s \n" , Cidade2);
printf ("População: %d \n" , Populacao2);
printf ("Área: %d \n" , Area2);
printf ("PIB: %d \n" , PIB2);
printf ("Pontos Turísticos: %d \n" , PontosTuristicos2);

return 0;
} 

