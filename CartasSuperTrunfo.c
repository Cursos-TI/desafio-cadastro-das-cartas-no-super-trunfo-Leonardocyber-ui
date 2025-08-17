#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    // carta 1
    char estado1[4];
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontoturistico1;

    // carta 2
    char estado2[4];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;

    // entrada para cadastro de dados carta 01;
    
    printf("Digite o nome do estado de A a H: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("digite a população da Cidade: \n");
    scanf("%d" , &populacao1);


    
    

    

    














    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
