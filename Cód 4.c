#include <stdio.h>

int main() {
    
    int num[10];
    int vlr, cntm = 0, cntr = 0; ;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    printf("Digite um valor de referência inteiro: \n");
    scanf("%d", &vlr);

    printf("Números maiores que o valor de referência:\n");
    for (int i = 0; i < 10; i++) {
        if (num[i] > vlr) {
            printf("%d\n", num[i]);
            cntm++;
        } else if (num[i] == vlr) {
            cntr++;
        }
    }

    printf("O valor de referência aparece %d vezes no vetor.\n", cntr);
    
    return (0);
}