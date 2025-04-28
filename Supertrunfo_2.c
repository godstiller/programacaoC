#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){

    char estado_letra_1 = 'A', codigo_carta_1[5] = "A01", nome_cidade_1[30] = "Arraial do Cabo - RJ";
    char estado_letra_2 = 'B', codigo_carta_2[20] = "B01", nome_cidade_2[30] = "Sorocaba - SP";
    int numero_ponto_turistico_1 = 8, numero_ponto_turistico_2 = 20;
    int jogador1, jogador1_2, jogador2, jogador2_2, resultado1,resultado1_1, resultado2, resultado2_2, opcao, sair;
    float populacao_1 = 30000.0, area_km_1 = 160, pib_1 = 1.2000000000, populacao_2 = 723000.0, area_km_2 = 450, pib_2 = 38000000000;
    float pib_per_capita_1 = pib_1 / populacao_1, pib_per_capita_2 = pib_2 / populacao_2;
    float densidade_populacional_1 = populacao_1 / area_km_1; 
    float densidade_populacional_2 = populacao_2 / area_km_2; 
    float densidade_populacional_invertida1 = (1 / densidade_populacional_1);
    float densidade_populacional_invertida2 = (1 / densidade_populacional_2);
    float superpoder1 = (populacao_1 + area_km_1 + pib_1 + numero_ponto_turistico_1 + pib_per_capita_1 + densidade_populacional_invertida1); 
    float superpoder2 = (populacao_2 + area_km_2 + pib_2 + numero_ponto_turistico_2 + pib_per_capita_2 + densidade_populacional_invertida2);


    printf("♦♠♥♣ Super Trunfo ♦♠♥♣\n");
    printf("1. iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n\n");
    printf("Opção: ");
    scanf("%d", &opcao);
  
    switch (opcao)
    {
    case 1:
        printf("\n");
        printf("Jogador 1 - Qual atributo você deseja usar?\n\n");
        printf("1 - POPULAÇÃO\n");
        printf("2 - ÁREA\n");
        printf("3 - PIB\n");
        printf("4 - PONTO TURÍSTICO\n");
        printf("5 - DENSIDADE POPULACIONAL\n");
        printf("6 - PIB PER CAPITA\n");
        printf("7 - SUPER PODER\n\n");
        printf("Escolha o primeiro atributo: ");
        scanf("%d", &jogador1);

        switch (jogador1)
        {
        case 1: 
            printf("Você escolheu população!\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
            case 2: 
            printf("Você escolheu ÁREA!\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
            case 3: 
            printf("Você escolheu PIB!\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
            case 4: 
            printf("Você escolheu PONTO TURÍSTICO!\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
            case 5: 
            printf("Você escolheu DENSIDADE POPULACIONAL!\n");
            resultado1 = populacao_1 < populacao_2 ? 1 : 0;
            break;
            case 6: 
            printf("Você escolheu PIB PER CAPITA!\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
            case 7: 
            printf("Você escolheu SUPER PODER!\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
        
        default:
            printf("Opção inválida!\n");
            break;
        }

        printf("Escolha o segundo atributo. \n");
        printf("Atenção: Você deve escolher um atributo diferente do primeiro. \n\n");
        printf("1 - POPULAÇÃO\n");
        printf("2 - ÁREA\n");
        printf("3 - PIB\n");
        printf("4 - PONTO TURÍSTICO\n");
        printf("5 - DENSIDADE POPULACIONAL\n");
        printf("6 - PIB PER CAPITA\n");
        printf("7 - SUPER PODER\n\n");
        printf("Escolha o segundo atributo: ");
        scanf("%d", &jogador1_2);

        if (jogador1 == jogador1_2)
        {
            printf("Você escolheu o mesmo atributo! \n");
        } else {

        switch (jogador1_2)
        {
        case 1: 
            printf("Você escolheu população!\n\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
            case 2: 
            printf("Você escolheu ÁREA!\n\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
            case 3: 
            printf("Você escolheu PIB!\n\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
            case 4: 
            printf("Você escolheu PONTO TURÍSTICO!\n\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
            case 5: 
            printf("Você escolheu DENSIDADE POPULACIONAL!\n\n");
            resultado1 = populacao_1 < populacao_2 ? 1 : 0;
            break;
            case 6: 
            printf("Você escolheu PIB PER CAPITA!\n\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
            case 7: 
            printf("Você escolheu SUPER PODER!\n\n");
            resultado1 = populacao_1 > populacao_2 ? 1 : 0;
            break;
        
        default:
            printf("Opção inválida!\n\n");
            break;
        }
        }

        if (resultado1 && resultado1_1)
        {
            printf("Parabéns, você venceu! \n");    
        } else if (resultado1 != resultado1_1)
        {
            printf("Empate! \n");
        } else {
            printf("Derrota! \n");
        }
        case 2:
        printf("!!! REGRAS DO JOGO !!!\n\n");
        printf("Os jogadores escolhem um atributo para duelar com o adversário,\n");
        printf("Vence quem tiver o melhor atributo.\n");
        break;
        case 3:
        printf("Sair do jogo? \n");
        printf("Pressione as teclas ALT + F4 para sair do jogo.\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    
    }

return 0;

}
