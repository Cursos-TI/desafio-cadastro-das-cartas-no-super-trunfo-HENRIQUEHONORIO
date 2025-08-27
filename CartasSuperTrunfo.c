#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
    int n_pontos_turisticos1, populacao1, n_pontos_turisticos2, populacao2;
    char cidade1[20], codigo_carta1[3], estado1, cidade2[20], codigo_carta2[3], estado2;
    float area1, pib1, area2, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    //código para entrada de dados da primeira carta que aqui eu coloquei como jogador 1, provavelmente no futuro será aprimorado esse texto
    printf ("Jogador 1 digite o estado: \n");
    scanf ("%c", &estado1);

    printf ("Jogador 1 digite o código da carta: \n");
    scanf ("%s", codigo_carta1);

    printf ("Jogador 1 digite o nome da cidade: \n");
    scanf ("%s",cidade1);

    printf ("Jogador 1 digite a população: \n");
    scanf ("%d",&populacao1);

    printf ("Jogador 1 digite a área (em Km²): \n");
    scanf ("%f",&area1);

    printf ("Jogador 1 digite o PIB: \n");
    scanf ("%f",&pib1 );

    printf ("Jogador 1 digite o quantidade de postos turisticos: \n");
    scanf ("%d",&n_pontos_turisticos1 );

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("carta 1: \n");
    printf ("Estado: %c. \n", estado1);
    printf ("Código: %s. \n", codigo_carta1);
    printf ("Nome da Cidade: %s. \n", cidade1);
    printf ("População: %d. \n", populacao1);
    printf ("Área: %f. Km² \n", area1);
    printf ("PIB: %f bilhões de reais \n", pib1);
    printf ("Númros de pontos turisticos: %d \n", n_pontos_turisticos1);


    return 0;
}
