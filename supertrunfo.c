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
    scanf("%s", codigo_carta_1);

    getchar();    
    printf("Qual é o nome da 1ª cidade? \n");
    fgets(nome_cidade_1, 20, stdin);
    nome_cidade_1[strcspn(nome_cidade_1, "\n")] = '\0';

    printf("Qual é a população da 1ª cidade? \n");
    scanf("%d", &populacao_1);


    printf("Qual é a área da 1ª cidade? \n");
    scanf(" %f", &area_km_1);

    printf("Qual é o PIB da 1ª cidade? \n");
    scanf(" %f", &pib_1);

    printf("Quantos pontos turísticos a 1ª cidade possui? \n");
    scanf(" %d", &numero_ponto_turistico_1);



    //PULAR 1 LINHA
    printf("\n");


    //MENSAGEM DE CONFIRMAÇÃO 1
    printf("Carta 1 cadastrada com sucesso! \n\n");


    // OBTER DADOS DA CIDADE 2
    printf("Qual é a letra do 2º estado? \n");
    scanf(" %c", &estado_letra_2);

    printf("Qual é o código da 2ª carta? \n");
    scanf(" %s", codigo_carta_2);

    getchar();    
    printf("Qual é o nome da 2ª cidade? \n");
    fgets(nome_cidade_2, 20, stdin);
    nome_cidade_2[strcspn(nome_cidade_2, "\n")] = '\0';

    printf("Qual é a população da 2ª cidade? \n");
    scanf("%d", &populacao_2);


    printf("Qual é a área da 2ª cidade? \n");
    scanf(" %f", &area_km_2);

    printf("Qual é o PIB da 2ª cidade? \n");
    scanf(" %f", &pib_2);

    printf("Quantos pontos turísticos a 2ª cidade possui? \n");
    scanf(" %d", &numero_ponto_turistico_2);




    //PULAR 1 LINHA
    printf("\n");


    //MENSAGEM DE CONFIRMAÇÃO 2
    printf("Carta 2 cadastrada com sucesso!");


     //PULAR 1 LINHA
     printf("\n");




// EXIBIR OS DADOS DA CARTA 1
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado_letra_1);
    printf("Codigo: %s \n", codigo_carta_1 );
    printf("Nome da cidade: %s \n", nome_cidade_1);
    printf("População: %d mil habitantes \n", populacao_1);
    printf("Área: %.3f KM² \n", area_km_1);
    printf("PIB: %.3fBI \n", pib_1);
    printf("Número de pontos turísticos: %d \n", numero_ponto_turistico_1);
    
// EXIBIR OS DADOS DA CARTA 2
    printf("\n");
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado_letra_2);
    printf("Codigo: %s \n", codigo_carta_2 );
    printf("Nome da cidade: %s \n", nome_cidade_2);
    printf("População: %d mil habitantes \n", populacao_2);
    printf("Área: %.3f KM² \n", area_km_2);
    printf("PIB: %.3fBI \n", pib_2);
    printf("Número de pontos turísticos: %d \n", numero_ponto_turistico_2);


    return 0;

}
