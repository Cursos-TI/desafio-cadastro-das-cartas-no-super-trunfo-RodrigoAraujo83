#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Declaração das variaveis da Carta A01
    int populacaoCarta1, pontosTuristicosCarta1;
    float areacarta1, pibCarta1;

    // Declaração das variaveis da Carta B02
    int populacaoCarta2, pontosTuristicosCarta2;
    float areacarta2, pibCarta2;

    // Criando interação com o Usuario
 
    printf("Soper Trinfo - Estados \n");
    printf("Informe a População da carta A01: \n" );
    scanf("%d", &populacaoCarta1);
    printf("Informe o tamanho da Area de sua carta: \n");
    scanf("%f", &areacarta1);
    printf("Informe o Pib de Sua carta: \n");
    scanf("%f", &pibCarta1);
    printf("Informe quantos Pontos Turisticos há em sua carta: \n");
    scanf("%d", &pontosTuristicosCarta1);

    // Informações da carta A01 entregue ao usuario.

    printf("População: %d \n ", populacaoCarta1);
    printf("Area: %f \n ", areacarta1);
    printf("Pib: %f \n ", pibCarta1);
    printf("N° de Pontos Turisticos: %d \n ", pontosTuristicosCarta1);


    

    return 0;
}
