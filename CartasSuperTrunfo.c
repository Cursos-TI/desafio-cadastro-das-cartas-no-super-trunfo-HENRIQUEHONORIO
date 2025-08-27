#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
     // --- Variáveis para a Carta 1 ---
    // Variáveis para armazenar cada uma das informações da primeira carta.
    char estado1;
    char codigo1[5];       // Ex: "A01" + caractere nulo '\0'
    char nomeCidade1[50];  // Um tamanho seguro para nomes de cidades
    int  populacao1;
    float area1;
    float pib1;
    int  pontosTuristicos1;

    // --- Variáveis para a Carta 2 ---
    // As mesmas variáveis, mas para a segunda carta.
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int  populacao2;
    float area2;
    float pib2;
    int  pontosTuristicos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    //código para entrada de dados da primeira carta que aqui eu coloquei como jogador 1, provavelmente no futuro será aprimorado esse texto
    printf ("Jogador 1 digite o estado: \n");
    scanf (" %c", &estado1);

    printf ("Jogador 1 digite o código da carta: \n");
    scanf (" %s", &codigo1);

    printf ("Jogador 1 digite o nome da cidade: \n");
    scanf (" %s", &nomeCidade1);

    printf ("Jogador 1 digite a população: \n");
    scanf ("%d",&populacao1);

    printf ("Jogador 1 digite a área (em Km²): \n");
    scanf ("%f",&area1);

    printf ("Jogador 1 digite o PIB: \n");
    scanf ("%f",&pib1 );

    printf ("Jogador 1 digite o quantidade de postos turisticos: \n");
    scanf ("%d",&pontosTuristicos1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("carta 1: \n");
    printf ("Estado: %c. \n", estado1);
    printf ("Código: %s. \n", codigo1);
    printf ("Nome da Cidade: %s. \n", nomeCidade1);
    printf ("População: %d. \n", populacao1);
    printf ("Área: %f. Km² \n", area1);
    printf ("PIB: %f bilhões de reais \n", pib1);
    printf ("Númros de pontos turisticos: %d \n", pontosTuristicos1);


    return 0;
}
