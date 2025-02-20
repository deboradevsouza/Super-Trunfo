#include <stdio.h>

int main() {

    // Inserir o título do desafio - Nível novato:

    printf("Desafio de Cartas Super Trunfo - Países \n");
    printf("Você deverá cadastrar duas cartas! \n");


    // Definir o tipo e o nome das variáveis:
    char estado1[50];
    char codigo1[20];
    char nome1[50];
    float populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Definir o que sairá em cada printf e scanf para a primeira carta:
    printf("Cadastre sua primeira carta: \n");

    printf("Escreva a sigla do Estado (sem utilizar espaço): \n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);

    printf("Escreva o nome da cidade (sem utilizar espaço): \n");
    scanf("%s", nome1);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos1);

    float densidadepopulacional1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    // Definir o retorno ao usuário após o cadastro da carta feita pelo mesmo.
    printf("Você cadastrou sua primeira carta: \n");
    printf("Código da carta criada: %s \n", codigo1);
    printf("Estado: %s - Cidade: %s \n", estado1, nome1);
    printf("População: %f \n", populacao1);
    printf("Tamanho da área: %f km² \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Quantidade de pontos turísticos: %d \n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional1);
    printf("PIB per Capita: %.2f \n", pibpercapita1);

    // Definir o tipo e o nome das variáveis para a segunda carta:
    char estado2[50];
    char codigo2[20];
    char nome2[50];
    float populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Definir o que sairá em cada printf e scanf para a segunda carta:
    printf("Cadastre sua segunda carta: \n");

    printf("Escreva a sigla do Estado (sem utilizar espaço): \n");
    scanf("%s", estado2);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Escreva o nome da cidade (sem utilizar espaço): \n");
    scanf("%s", nome2);

    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos2);

    float densidadepopulacional2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // Definir o retorno ao usuário após o cadastro da carta feita pelo mesmo.
    printf("Você cadastrou sua segunda carta: \n");
    printf("Código da carta criada: %s \n", codigo2);
    printf("Estado: %s - Cidade: %s \n", estado2, nome2);
    printf("População: %f \n", populacao2);
    printf("Tamanho da área: %f km² \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Quantidade de pontos turísticos: %d \n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita: %.2f \n", pibpercapita2);

    return 0;
}