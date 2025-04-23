#include <stdio.h>
#include <string.h>

int main(){

    char estado_letra_1, codigo_carta_1[20], nome_cidade_1[20];
    float populacao_1, area_km_1, pib_1;
    int numero_ponto_turistico_1;

    char estado_letra_2, codigo_carta_2[20], nome_cidade_2[20];
    float populacao_2, area_km_2, pib_2;
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
    scanf("%f", &populacao_1);

    printf("Qual é a área da 1ª cidade? \n");
    scanf(" %f", &area_km_1);

    printf("Qual é o PIB da 1ª cidade? \n");
    scanf(" %f", &pib_1);

    printf("Quantos pontos turísticos a 1ª cidade possui? \n");
    scanf(" %d", &numero_ponto_turistico_1);

    //calcula a densidade populacional
    float densidade_populacional_1 = populacao_1 / area_km_1; 
    
    //calcula o pib per capita
    float pib_per_capita_1 = pib_1 / populacao_1;

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
    scanf("%f", &populacao_2);

    printf("Qual é a área da 2ª cidade? \n");
    scanf(" %f", &area_km_2);

    printf("Qual é o PIB da 2ª cidade? \n");
    scanf(" %f", &pib_2);

    printf("Quantos pontos turísticos a 2ª cidade possui?\n");
    scanf(" %d", &numero_ponto_turistico_2);

    //calcula a densidade populacional
    float densidade_populacional_2 = populacao_2 / area_km_2; 
    
    //calcula o pib per capita
    float pib_per_capita_2 = pib_2 / populacao_2;

//Densidade invertida + Super poder
float densidade_populacional_invertida1 = (1 / densidade_populacional_1);
float densidade_populacional_invertida2 = (1 / densidade_populacional_2);
float superpoder1 = (populacao_1 + area_km_1 + pib_1 + numero_ponto_turistico_1 + pib_per_capita_1 + densidade_populacional_invertida1); 
float superpoder2 = (populacao_2 + area_km_2 + pib_2 + numero_ponto_turistico_2 + pib_per_capita_2 + densidade_populacional_invertida2);


//MENSAGEM DE CONFIRMAÇÃO 2
    printf("Carta 2 cadastrada com sucesso!\n");

//MENSAGEM DE EXIBIÇÃO DOS DADOS    
    printf("Dados das cartas cadastradas!\n\n");

// EXIBIR OS DADOS DA CARTA 1
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado_letra_1);
    printf("Codigo: %s \n", codigo_carta_1 );
    printf("Nome da cidade: %s \n", nome_cidade_1);
    printf("População: %f mil habitantes \n", populacao_1);
    printf("Área: %.3f KM² \n", area_km_1);
    printf("PIB: %.1fBI \n", pib_1);
    printf("Número de pontos turísticos: %d \n", numero_ponto_turistico_1);
    printf("Densidade populacional: %.2f\n", densidade_populacional_1 );
    printf("PIB per capita: %.2f\n", pib_per_capita_1);
    printf("Super poder 1: %f \n", superpoder1);

// EXIBIR OS DADOS DA CARTA 2
    printf("\n");
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado_letra_2);
    printf("Codigo: %s \n", codigo_carta_2 );
    printf("Nome da cidade: %s \n", nome_cidade_2);
    printf("População: %f mil habitantes \n", populacao_2);
    printf("Área: %.3f KM² \n", area_km_2);
    printf("PIB: %.1fBI \n", pib_2);
    printf("Número de pontos turísticos: %d \n", numero_ponto_turistico_2);
    printf("Densidade populacional: %.2f\n", densidade_populacional_2);
    printf("PIB per capita: %.2f\n", pib_per_capita_2);
    printf("Super poder 2: %f \n", superpoder2);


        //comparações entre as cartas 1 e 2 
    printf("\n");
    printf("\n");
    
    printf("Os atributos da carta 1 são maiores do que os da carta 2?\n");
    printf("\n\n");
    printf("Carta 1 -  População 1: %.2f mil                   Carta 2 - População 2: %.2f mil          (%d) \n", populacao_1, populacao_2, populacao_1 > populacao_2);
    printf("Carta 1 -  Área 1: %.2f mil km2                    Carta 2 - Área 2: %.2f mil km2             (%d) \n", area_km_1, area_km_2, area_km_1 > area_km_2);
    printf("Carta 1 -  PIB 1: %.1f BI                          Carta 2 - PIB 2: %.1f BI                      (%d)  \n", pib_1, pib_2, pib_1 > pib_2);
    printf("Carta 1 -  Pontos turísticos 1: %d                 Carta 2 - Pontos turísticos 2: %d             (%d) \n", numero_ponto_turistico_1, numero_ponto_turistico_2, numero_ponto_turistico_1 > numero_ponto_turistico_2);
    printf("Carta 1 -  Densidade populacional 1: %.2f          Carta 2 - Densidade populacional 2: %.2f      (%d) \n", densidade_populacional_1, densidade_populacional_2, densidade_populacional_1 > densidade_populacional_2);
    printf("Carta 1 -  PIB per capita 1: %.2f                  Carta 2 - PIB per capita 2: %.2f              (%d) \n", pib_per_capita_1, pib_per_capita_2, pib_per_capita_1 > pib_per_capita_2);
    printf("Carta 1 -  Super poder 1: %.2f sp                  Carta 2 - Super poder 2: %.2f sp            (%d) \n", superpoder1, superpoder2, superpoder1 > superpoder2);


    printf("\n\n");
    printf("Fim!!!\n");
    printf("\n\n");


    return 0;

}
