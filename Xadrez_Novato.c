#include <stdio.h>

int main(){

//DECLARAÇÃO DE VARIÁVEIS
    int bispo = 1;
    int rainha = 1;

//MOVIMENTAÇÃO TORRE - ESTRUTURA FOR
    printf("TORRE\n");
for (int torre = 0; torre < 5; torre++) {
    printf("Direita\n");
 }

//MOVIMENTAÇÃO BISPO - ESTRUTURA DO WHILE
    printf("BISPO\n");
do { 
    printf("CimaDireita \n", bispo);
    bispo++;

} while (bispo <= 5);

//MOVIMENTAÇÃO RAINHA - ESTRUTUTRA WHILE
    printf("RAINHA \n");
while (rainha <= 8) {
    printf("Esquerda\n", &rainha);
    rainha++;
}


return 0;
    
}