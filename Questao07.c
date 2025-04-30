#include <stdio.h>
int main() {
   int mat[4][4], maior;
   for(int i = 0; i < 4; i++) {
   for(int j = 0; j < 4; j++) {
     printf("Valor [%d][%d]: ", i, j);
    scanf("%d", &mat[i][j]);
     if(i == 0 && j == 0 || mat[i][j] > maior) {
          maior = mat[i][j];
           }
       }
   }
printf("Maior valor: %d\n", maior);
return 0;
}