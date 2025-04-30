#include <stdio.h>
int main() {
   int vet[6];
   for(int i = 0; i < 6; i++) {
       printf("Digite o valor %d: ", i + 1);
       scanf("%d", &vet[i]);
   }
   printf("Valores digitados:\n");
   for(int i = 0; i < 6; i++) {
       printf("%d ", vet[i]);
   }
   return 0;
}