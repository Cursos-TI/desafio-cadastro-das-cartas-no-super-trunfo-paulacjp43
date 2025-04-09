#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Paula 

int main() {
    // Dados fixos da Carta 1 - Paraíba
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Joao Pessoa";
    int populacao1 = 817511;
    float area1 = 211.4;
    float pib1 = 23.45;
    int pontosTuristicos1 = 15;

    // Dados fixos da Carta 2 - Pernambuco
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Recife";
    int populacao2 = 1653461;
    float area2 = 218.4;
    float pib2 = 42.80;
    int pontosTuristicos2 = 28;

    // Exibição das cartas
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
