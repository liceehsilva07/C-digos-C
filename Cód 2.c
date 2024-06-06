#include <stdio.h>

int main() {
    
    int num, cont = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número inteiro: ");
        scanf("%d", &num);
        
        if (num % 5 == 0 && num % 3 == 0) {
            cont++;
        }
    }
    
    printf("Quantidade de números divisíveis por 5 e 3 ao mesmo tempo: %d\n", cont);

    return (0);
}