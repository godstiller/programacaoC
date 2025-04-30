#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/*
int main (){


    
// MOVER A TORRE 5 CASAS P/ FRENTE A1-A6

    printf("TORRE!\n");

for (int torre = 1; torre < 6; torre++)
{
    printf("Torre se move de A%d para A%d\n", torre, torre + 1);
}

// MOVER A RAINHA 7 CASAS P/ A ESQUERDA (H3-G3-F3-E3-D3-C3-B3-A3)
    printf("\nRAINHA!\n");
int rainha = 3;
char coluna = 'H';

while (coluna > 'A')
{
    printf("Rainha se move de %c%d para %c%d\n",coluna, rainha, coluna -1, rainha);
    coluna--;
}

    printf("\nBISPO!\n");


//MOVER O BISPO 5 CASAS P/ A DIREITA (C1-D2-E3-F4-G5-H6)

char bispo = 'C';
int i = 1;

do 
{
    printf("Bispo se move de %c%d para %c%d\n",bispo, i, bispo + 1, i + 1);
    bispo++, i++;
    
} while (bispo < 'H' && i < 6);



    printf("\nCAVALO!\n");

//MOVER O CAVALO P/ A FRENTE (G2-G3-F3)

    int cavalo = 1; // FLAG PARA CONTROLAR O MOVIMENTO EM 'L'

   /* while (cavalo--)
    {
        for (int l = 0; l < 2; l++) {
        printf("Cima\n");
        }
        printf("Direita\n"); // IMPRIME "DIREITA" UMA VEZ
    }
    *//*
 int k = 3;
 char m  = 'G';

    while (cavalo--)
    {
       
        for (int cavalo = 1, l = 'G' ; cavalo < 3; cavalo++) {
        printf("Cavalo se move de %c%d para %c%d\n", l, cavalo, l, cavalo +1);
        }
        printf("Cavalo se move de %c%d para %c%d\n", m, k, m -1, k); // IMPRIME "DIREITA" UMA VEZ
    }

return 0;


}

*/

// REFAZENDO O CÓDIGO ACIMA USANDO A RECURSIVIDADE


 // MOVER A TORRE 5 CASAS P/ FRENTE A1-A6
void moverTorre(int linha){
    if (linha > 0)
    {

        moverTorre(linha - 1);
        printf("Torre move de A%d para A%d\n", linha, linha + 1);
    }
}
// MOVER A RAINHA 7 CASAS P/ A ESQUERDA (H3-G3-F3-E3-D3-C3-B3-A3)
void moverRainha (char coluna){
    if (coluna > 'A')
    {
        printf("Rainha move de %c3 para %c3\n", coluna, coluna - 1);
        moverRainha(coluna - 1);
    }
}
//MOVER O BISPO 5 CASAS P/ A DIREITA (C1-D2-E3-F4-G5-H6)
void moverBispo(char coluna, int linha){
    if (coluna < 'H' && linha < 6 ){
        printf("Bispo move de %c%d para %c%d\n", coluna, linha, coluna + 1, linha + 1);
        moverBispo(coluna + 1, linha + 1);
    }

}
//MOVER O CAVALO P/ A FRENTE (G1-G2-G3-F3)
void moverCavalo(char coluna, int linha) {
    if (linha == 1) {
        // G1-G2
        printf("Cavalo move de %c%d para %c%d\n", coluna, linha, coluna, linha + 1);
        moverCavalo(coluna, linha + 1);
    } else if (linha == 2) {
        // G2-G3
        printf("Cavalo move de %c%d para %c%d\n", coluna, linha, coluna, linha + 1);
        moverCavalo(coluna, linha + 1);
    } else if (linha == 3) {
        // G3-F3
        printf("Cavalo move de %c%d para %c%d\n", coluna, linha, coluna - 1, linha);
    }
}

int main (){

    printf("MOVER TORRE\n");
    moverTorre(5);

    printf("MOVER RAINHA\n");
    moverRainha('H');

    printf("MOVER BISPO\n");
    moverBispo('C', 1);

    printf("MOVER CAVALO\n");
    moverCavalo('G', 1);

    return 0;

}










