#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int     ncarta, populacao, p_turisticos;
    char    estado[3], cod_carta[4], nome_cidade[20];
    float   area, pib;

  // Área para entrada de dados
    printf("Insira o número da carta:");
    scanf("%i",&ncarta);
    printf("Insira o Estado _em letra maiúscula_:");
    scanf("%s",&estado);
    printf("Insira o nome da cidade:");
    scanf("%s",nome_cidade);
    printf("Insira o tamanho da populacao:");
    scanf("%i",&populacao);
    printf("Insira a area da cidade:");
    scanf("%f",&area);
    printf("Insira o pib da cidade:");
    scanf("%f",&pib);
    printf("Insira a quantidade de pontos turisticos da cidade:");
    scanf("%i",&p_turisticos);
        
  // Área para exibição dos dados da cidade
    printf("CARTA%i\n", ncarta);
    printf("ESTADO: %s\n", estado);
    printf("CODIGO: %s%i\n", estado,ncarta);
    printf("NOME DA CIDADE: %s\n", nome_cidade);
    printf("POPULACAO: %i\n", populacao);
    printf("AREA: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("NUMERO DE PONTOS TURISTICOS: %i", p_turisticos);

  return 0;
} 
