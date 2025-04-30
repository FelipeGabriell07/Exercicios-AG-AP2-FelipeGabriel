#include <stdio.h>
 int main() {
    float vet[10];
    int negativos = 0;
    float somaPositivos = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%f", &vet[i]);
        if(vet[i] < 0) negativos++;
        else somaPositivos += vet[i];
    }
    printf("Negativos: %d\n", negativos);
    printf("Soma dos positivos: %.2f\n", somaPositivos);
    return 0;
 }