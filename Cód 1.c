#include <stdio.h>

int main() {

    int n, i, pr = 0, imp = 0;
 
        printf("Digite o número de elementos: ");
        scanf("%d",&n);

    int vetor[n];
        for (i = 0; i < n; i++) {
                printf("Digite o elemento %d: ",i+1);
        scanf("%d", &vetor[i]);
 }

        for (i = 0; i < n; i++) {
            if (vetor[i] % 2 == 0) {
                pr++;
 } 
 
            else {
                imp++;
 }
 }


 printf("Quantidade de elementos pares: %d\n", pr);
 printf("Quantidade de elementos ímpares: %d\n", imp);

 return (0);
}
