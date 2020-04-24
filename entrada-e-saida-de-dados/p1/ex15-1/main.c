#include <stdio.h>

int main() {
    float preco_produto;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco_produto);

    float preco_desconto = 0.75 * preco_produto;
    printf("Preco com desconto de 25%%: R$ %.2f\n", preco_desconto);

    return 0;
}
