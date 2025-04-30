#include <stdio.h>
 int main() {
    int vet[10], pares = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0) pares++;
    }
    printf("Quantidade de pares: %d\n", pares);
    return 0;
 }