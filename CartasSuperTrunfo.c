#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int     ncarta;
    char    estado;
    char    cod_carta[3];
    char    nome_cidade[10];
    int     populacao;
    float   area;
    float   pib;
    int     p_turisticos;
  // Área para entrada de dados
    printf("Insira o número da carta:");
    scarnf("%i";&ncarta);
    printf("Insira o Estado (em letra maiúscula):");
    scarnf(" %c";&estado);
    printf("Insira o nome da cidade:");
    scarnf(" %s";nome_cidade);
    printf("Insira o tamanho da populacao:");
    scarnf("%i";&populacao);
    printf("Insira a area da cidade:");
    scarnf("%f";&area);
    printf("Insira o pib da cidade:");
    scarnf("%f";&pib);
    printf("Insira a quantidade de pontos turisticos da cidade:");
    scarnf("%i";&p_turisticos);
  // Área para exibição dos dados da cidade
    printf("CARTA",ncarta\n);
    printf("ESTADO: ",estado\n);
    printf("CODIGO: ",estado,ncarta\n);
    printf("NOME DA CIDADE: ",nome_cidade);
    printf("POPULACAO: ",populacao\n);
    printf("AREA: ",area\n);
    printf("PIB: ",pib\n);
    printf("NUMERO DE PONTOS TURISTICOS: ",p_turisticos)
    
return 0;
} 
