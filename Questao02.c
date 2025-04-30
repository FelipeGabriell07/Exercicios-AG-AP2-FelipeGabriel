#include <stdio.h>
int main() {
   int vet[5];
   int soma = 0;
   for(int i = 0; i < 5; i++) {
       printf("Digite o valor %d: ", i + 1);
       scanf("%d", &vet[i]);
       soma += vet[i];
   }
   printf("Valores:\n");
   for(int i = 0; i < 5; i++) {
       printf("%d ", vet[i]);
   }
   float media = soma / 5.0;
   printf("\nMedia: %.2f\n", media);
   return 0;
}