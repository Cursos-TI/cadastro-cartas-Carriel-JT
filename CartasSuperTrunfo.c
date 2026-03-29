#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int     ncarta, populacao, p_turisticos;
    char    estado, cod_carta[3], nome_cidade[10];
    float   area, pib;

  // Área para entrada de dados
    printf("Insira o número da carta:");
    scanf("%i",&ncarta);
    printf("Insira o Estado _em letra maiúscula_:");
    scanf(" %c",&estado);
    printf("Insira o nome da cidade:");
    scanf(" %s",nome_cidade);
    printf("Insira o tamanho da populacao:");
    scanf("%i",&populacao);
    printf("Insira a area da cidade:");
    scanf("%f",&area);
    printf("Insira o pib da cidade:");
    scanf("%f",&pib);
    printf("Insira a quantidade de pontos turisticos da cidade:");
    scanf("%i",&p_turisticos);
        
  // Área para exibição dos dados da cidade
    printf("CARTA ncarta\n");
    printf("ESTADO: estado\n");
    printf("CODIGO: estado,ncarta\n");
    printf("NOME DA CIDADE: nome_cidade\n");
    printf("POPULACAO: populacao\n");
    printf("AREA: area\n");
    printf("PIB: pib\n");
    printf("NUMERO DE PONTOS TURISTICOS: p_turisticos");

  return 0;
} 
