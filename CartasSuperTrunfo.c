#include <stdio.h>

int main() {

    printf("Bem-vindo ao Super Trunfo Desafio Novato!\n");
    printf("CADASTRANDO A PRIMEIRA CARTA\n");
    /*
    Uma pequena mensagem de inicio do cadastro das cartas do jogo.
    */

    printf("Digite o estado (uma letra de 'A' a 'H'): ");
    char estado1;
    scanf(" %c", &estado1);
    /*
    Comando para registrar o estado da carta.
    exemplo:
    A - São Paulo
    B - Rio de Janeiro
    C - Santa Catarina
    */

    printf("Digite o código da carta (um número de 01 a 04): %c", estado1);
    char codigo1[4];
    scanf("%s", codigo1);
    /*
    Comando para registar o código da carta.
    exemplo: 
    C02 = Carta número 2 do estado de Santa Catarina.
    */

    printf("Digite o nome da cidade: ");
    char cidade1[50];
    scanf("%49s", cidade1);
    /*
    Comando para registro do nome da cidade.
    */

    printf("Área (km²): ");
    float area1;
    scanf("%f", &area1);
    /*
    Comando para registrar a área.
    */

    printf("PIB (Produto Interno Bruto da cidade): ");
    float pib1;
    scanf("%f", &pib1);
    /*
    Comando para registro do PIB.
    */
    
    printf("Número de pontos turísticos da cidade: ");
    int pontosTuristicos1;
    scanf("%d", &pontosTuristicos1);
    /*
    Comando para registro dos pontos turísticos da cidade.
    */

    printf("\nCARTA CADASTRADA COM SUCESSO!\n");

    printf("CADASTRANDO A SEGUNDA CARTA\n");
    /*
    Para todos os comandos abaixo, o usuário deve seguir o mesmo padrão de entrada.
    */

    printf("Digite o estado (uma letra de 'A' a 'H'): ");
    char estado2;
    scanf(" %c", &estado2);

    printf("Digite o código da carta (um número de 01 a 04): %c", estado2);
    char codigo2[4];
    scanf("%2s", codigo2);

    printf("Digite o nome da cidade: ");
    char cidade2[50];
    scanf("%s", cidade2);

    printf("Área (km²): ");
    float area2;
    scanf("%f", &area2);

    printf("PIB (Produto Interno Bruto da cidade): ");
    float pib2;
    scanf("%f", &pib2);

    printf("Número de pontos turísticos da cidade: ");
    int pontosTuristicos2;
    scanf("%d", &pontosTuristicos2);

    printf("\nCARTA CADASTRADA COM SUCESSO!\n");

    /*
    Após a leitura das cartas, abaixo temos os comandos para mostrar na tela o que o
    usuário cadastrou de maneira legível.
    */

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f bi\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f bi\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}