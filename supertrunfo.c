
#include <stdio.h>
#include <string.h>

int main(){

    char estado_letra_1;
    char codigo_carta_1[20];
    char nome_cidade_1[20];
    int populacao_1;
    float area_km_1;
    float pib_1;
    int numero_ponto_turistico_1;

    char estado_letra_2;
    char codigo_carta_2[20];
    char nome_cidade_2[20];
    int populacao_2;
    float area_km_2;
    float pib_2;
    int numero_ponto_turistico_2;

    // OBTER DADOS DA CIDADE 1
    printf("Qual é a letra do 1º estado? \n");
    scanf("%c", &estado_letra_1);

    printf("Qual é o código da 1ª carta? \n");
    scanf("%s", &codigo_carta_1);

    getchar();    
    printf("Qual é o nome da 1ª cidade? \n");
    fgets(nome_cidade_1, 20, stdin);
    nome_cidade_1[strcspn(nome_cidade_1, "\n")] = '\0';

    printf("Qual é a população da 1ª cidade? \n");
    scanf("%d", &populacao_1);

    printf("Qual é a área da 1ª cidade? \n");
    scanf("%f", &area_km_1);

    printf("Qual é o PIB da 1ª cidade? \n");
    scanf("%f", &pib_1);

    printf("Quantos pontos turísticos a 1ª cidade possui? \n");
    scanf("%d", &numero_ponto_turistico_1);


    printf("Carta 1:");
    prinft("Estado: %c \n", estado_letra_1);
    prinft("Codigo: %s[20] \n", codigo_carta_1 );
    prinft("Nome da cidade: %s[20] \n", nome_cidade_1);
    prinft("População: %d \n", populacao_1);
    prinft("Área: %f \n", area_km_1);
    prinft("PIB: %lf \n", pib_1);
    prinft("Número de pontos turísticos: %d");
    prinft("");


    return 0;

}
