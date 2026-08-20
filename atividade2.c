#include <stdio.h>

int main() {
    float quantidadeProduto[10];
    int i;
    printf("Sistema de Controle de Estoque (ERP)\n");
    printf("Digite a quantidade em estoque dos 10 produtos:\n\n");

    for (i = 0; i < 10; i++) {
        printf("Produto [%d] - Quantidade: ", i);
        scanf("%d", &quantidadeProduto[i]);

    }

        printf("Estoque Baixo (< 5 unidades)");

        for (i = 0 ; i < 10; i++) {
            if(quantidadeProduto[i] < 5){
                printf("Produto [%d]: %d unidades em estoque ", i, quantidadeProduto[i]);
            }
        }

    return 0;
}
