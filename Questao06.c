#include <stdio.h>
int main() {
int mat[3][3], menor;
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
         printf("Valor [%d][%d]: ", i, j);
          scanf("%d", &mat[i][j]);
             if(i == 0 && j == 0 || mat[i][j] < menor) {
               menor = mat[i][j];
               }
           }
       }
printf("Menor valor: %d\n", menor);
return 0;
    }