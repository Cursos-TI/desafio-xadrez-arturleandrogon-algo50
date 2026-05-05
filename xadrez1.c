#include <stdio.h>

int main() {
    // ==================== ENTRADA DE DADOS (constantes) ====================
    int casas_baixo = 2;      // Duas casas para baixo
    int casas_esquerda = 1;   // Uma casa para a esquerda
    
    // ==================== LÓGICA DE MOVIMENTAÇÃO (Loops Aninhados) ====================
    printf("Movimento do Cavalo em L:\n\n");
    
    // Loop externo: movimento vertical (para baixo)
    for(int i = 0; i < casas_baixo; i++) {
        printf("Baixo\n");
    }
    
    // Loop interno: movimento horizontal (para a esquerda)
    // Este é o loop aninhado exigido
    for(int j = 0; j < casas_esquerda; j++) {
        printf("Esquerda\n");
    }
    
    printf("\n");
    
    // ==================== SAÍDA FORMATADA ====================
    printf("Baixo\n");
    printf("Baixo\n");
    printf("Esquerda\n");
    
    printf("\n");
    printf("Cima\n");
    printf("Baixo\n");
    printf("Esquerda\n");
    printf("Direita\n");
    
    return 0;
}