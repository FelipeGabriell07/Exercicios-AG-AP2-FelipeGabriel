#include <stdio.h>
 int main() {
    int vet[8], x, y;
    for(int i = 0; i < 8; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vet[i]);
    }
       printf("Digite a posicao X (0 a 7): ");
       scanf("%d", &x);
       printf("Digite a posicao Y (0 a 7): ");
       scanf("%d", &y);
       printf("Soma: %d\n", vet[x] + vet[y]);
       return 0;
    }