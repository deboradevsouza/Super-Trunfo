#include <stdio.h>

int main() {

    // Inserir o título do desafio - Nível novato:

    printf("Desafio de Cartas Super Trunfo - Países \n");
    printf("Você deverá cadastrar duas cartas! \n");


    // Definir o tipo e o nome das variáveis:
    char estado[50];
    char codigo[20];
    char nome[50];
    float populacao;
    float area;
    float pib;
    int pontosturisticos;

    // Definir o que sairá em cada printf e scanf:
    printf("Cadastre sua primeira carta: \n");

    printf("Escreva a sigla do Estado (sem utilizar espaço): \n");
    scanf("%s", estado);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Escreva o nome da cidade (sem utilizar espaço): \n");
    scanf("%s", nome);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

    // Definir o retorno ao usuário após o cadastro da carta feita pelo mesmo. 

    printf("Você cadastrou sua primeira carta: \n");
    
    printf("Código da carta criada: %s \n", codigo);
    printf("Estado: %s - Cidade: %s \n", estado, nome);
    printf("População: %f \n", populacao);
    printf("Tamanho da área: %f km² \n", area);
    printf("PIB: %f \n", pib);
    printf("Quantidade de pontos turísticos: %d \n", pontosturisticos);


    printf("Cadastre sua segunda carta: \n");

    printf("Escreva a sigla do Estado (sem utilizar espaço): \n");
    scanf("%s", estado);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Escreva o nome da cidade (sem utilizar espaço): \n");
    scanf("%s", nome);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturisticos);

    // Definir o retorno ao usuário após o cadastro da carta feita pelo mesmo. 

    printf("Você cadastrou sua segunda carta: \n");
    
    printf("Código da carta criada: %s \n", codigo);
    printf("Estado: %s - Cidade: %s \n", estado, nome);
    printf("População: %f \n", populacao);
    printf("Tamanho da área: %f km² \n", area);
    printf("PIB: %f \n", pib);
    printf("Quantidade de pontos turísticos: %d \n", pontosturisticos);

    return 0;
}