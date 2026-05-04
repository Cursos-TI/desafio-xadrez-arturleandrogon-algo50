#include <stdio.h>

int main() {
    
    // ==================== TORRE ====================
    // Torre: move 5 casas para a direita (usando for)
    printf("=== Movimento da Torre ===\n");
    for(int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // ==================== BISPO ====================
    // Bispo: move 5 casas na diagonal (Cima, Direita) (usando while)
    printf("=== Movimento do Bispo ===\n");
    int casas_bispo = 0;
    while(casas_bispo < 5) {
        printf("Cima, Direita\n");
        casas_bispo++;
    }
    printf("\n");
    
    // ==================== RAINHA ====================
    // Rainha: move 8 casas para a esquerda (usando do-while)
    printf("=== Movimento da Rainha ===\n");
    int casas_rainha = 0;
    do {
        printf("Esquerda\n");
        casas_rainha++;
    } while(casas_rainha < 8);
    
    printf("\nFim da simulacao!\n");
    
    return 0;
}