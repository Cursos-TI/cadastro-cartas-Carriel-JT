#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

/*EXEMPLO DADOS CARTAS PARA TESTE:
Observação_ Números decimais digitar com ponto e não virgula______

Estado	PR	
Cidade	Curitiba	
População	1.830.795	hab
Área	435,277	km²
PIB	79,4	BI
Pontos Turisticos	47	
		
Estado	SC	
Cidade	Florianopolis	
População	587.486	hab
Área	674,844	km²
PIB	31,2	BI
Pontos Turisticos	38	
*/

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    int     ncarta1, populacao1, p_turisticos1;
    char    estado1[3], cod_carta1[4], nome_cidade1[20];
    float   area1, pib1, densidade1, ppc1;

    int     ncarta2, populacao2, p_turisticos2;
    char    estado2[3], cod_carta2[4], nome_cidade2[20];
    float   area2, pib2, densidade2, ppc2;

  // Área para entrada de dados
    printf("Insira o número da carta:");
    scanf(" %i",&ncarta1);
    printf("Insira o Estado _em letra maiúscula_:");
    scanf(" %s",&estado1);
    printf("Insira o nome da cidade:");
    scanf(" %s",nome_cidade1);
    printf("Insira o tamanho da populacao:");
    scanf(" %i",&populacao1);
    printf("Insira a area da cidade:");
    scanf(" %f",&area1);
    printf("Insira o pib da cidade:");
    scanf(" %f",&pib1);
    printf("Insira a quantidade de pontos turisticos da cidade:");
    scanf(" %i",&p_turisticos1);

    printf("Insira o número da carta:");
    scanf(" %i",&ncarta2);
    printf("Insira o Estado _em letra maiúscula_:");
    scanf(" %s",&estado2);
    printf("Insira o nome da cidade:");
    scanf(" %s",nome_cidade2);
    printf("Insira o tamanho da populacao:");
    scanf(" %i",&populacao2);
    printf("Insira a area da cidade:");
    scanf(" %f",&area2);
    printf("Insira o pib da cidade:");
    scanf(" %f",&pib2);
    printf("Insira a quantidade de pontos turisticos da cidade:");
    scanf(" %i",&p_turisticos2);
    
  // Operando as novas propriedades

    densidade1 = populacao1/area1;
    densidade2 = populacao2/area2;

    ppc1 = (float) (pib1*1000000000)/populacao1;
    ppc2 = (float) (pib2*1000000000)/populacao2;
    
  // Área para exibição dos dados da cidade
    printf("CARTA%i\n", ncarta1);
    printf("ESTADO: %s\n", estado1);
    printf("CODIGO: %s%i\n", estado1,ncarta1);
    printf("NOME DA CIDADE: %s\n", nome_cidade1);
    printf("POPULACAO: %i\n", populacao1);
    printf("AREA: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("NUMERO DE PONTOS TURISTICOS: %i\n", p_turisticos1);
    printf("A DENSIDADE POPULACIONAL É: %.2f\n", densidade1);
    printf("O PIB PER CAPITA É: %.2f\n", ppc1);

    printf("CARTA%i\n", ncarta2);
    printf("ESTADO: %s\n", estado2);
    printf("CODIGO: %s%i\n", estado2,ncarta2);
    printf("NOME DA CIDADE: %s\n", nome_cidade2);
    printf("POPULACAO: %i\n", populacao2);
    printf("AREA: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("NUMERO DE PONTOS TURISTICOS: %i\n", p_turisticos2);
    printf("A DENSIDADE POPULACIONAL É: %.2f\n", densidade2);
    printf("O PIB PER CAPITA É: %.2f\n", ppc2);

  return 0;
} 
