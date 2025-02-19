#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int PIB_A, PIB_B, Populacao_A, Populacao_B;
    int area_A, area_B;
    int areaTotal = 40000;
    
    printf("Entre com o PIB da cidade A: \n");
    scanf("%i", &PIB_A);
    printf("Entre com a Populacao da cidade A: \n");
    scanf("%i", &Populacao_A);
    printf("Entre com a area da cidade A: \n");
    scanf("%i", &area_A);

    printf("Entre com o PIB da cidade B: \n");
    scanf("%i", &PIB_B);
    printf("Entre com a Populacao da cidade B: \n");
    scanf("%i", &Populacao_B);
    printf("Entre com a area da cidade B: \n");
    scanf("%i", &area_B);

    printf("\nCidade A: \n");
    if (PIB_A < 100000000) {
        printf("Cidade de Pequeno Porte. \n");
    } else {
        printf("Cidade de Grande Porte ou Metropole. \n");
    }

    if (Populacao_A > 500000) {
        printf("Populacao de Grande Porte ou Metropole. \n");
    } else {
        printf("Populacao de Pequeno Porte. \n");
    }

    if (area_A < areaTotal) {
        printf("Area de Cidade de Pequeno Porte. \n");
    } else {
        printf("Area de Cidade de Grande Porte ou Metropole. \n");
    }

    printf("\nCidade B: \n");
    if (PIB_B < 100000000) {
        printf("Cidade de Pequeno Porte. \n");
    } else {
        printf("Cidade de Grande Porte ou Metropole. \n");
    }

    if (Populacao_B > 500000) {
        printf("Populacao de Grande Porte ou Metropole. \n");
    } else {
        printf("Populacao de Pequeno Porte. \n");
    }

    if (area_B < areaTotal) {
        printf("Area de Cidade de Pequeno Porte. \n");
    } else {
        printf("Area de Cidade de Grande Porte ou Metropole. \n");
    }

    printf("\nA cidade vencedora é: \n");

    if (PIB_A > PIB_B) {
        printf("Cidade A, com maior PIB: %i\n", PIB_A);
    } else if (PIB_B > PIB_A) {
        printf("Cidade B, com maior PIB: %i\n", PIB_B);
    } else {
        // Caso os PIBs sejam iguais, podemos comparar a população
        if (Populacao_A > Populacao_B) {
            printf("Cidade A, com maior população: %i\n", Populacao_A);
        } else if (Populacao_B > Populacao_A) {
            printf("Cidade B, com maior população: %i\n", Populacao_B);
        } else {
            // Se população também for igual, comparamos a área
            if (area_A > area_B) {
                printf("Cidade A, com maior área: %i\n", area_A);
            } else if (area_B > area_A) {
                printf("Cidade B, com maior área: %i\n", area_B);
            } else {
                printf("As cidades são iguais em PIB, população e área.\n");
            }
        }
    }

    return 0;
}
