#include <stdio.h>
int main() {
   int mat[5][5], soma = 0;
   for(int i = 0; i < 5; i++) {
       for(int j = 0; j < 5; j++) {
           printf("Valor [%d][%d]: ", i, j);
           scanf("%d", &mat[i][j]);
           if(i != j && (i + j) != 4) {
               soma += mat[i][j];
           }
       }
   }
   printf("Soma fora das diagonais: %d\n", soma);
   return 0;
}