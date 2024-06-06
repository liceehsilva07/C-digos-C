#include <stdio.h>

int main() {
    
    int qtd, id, jv = 0, ad = 0, ids = 0;

    printf("Digite a quantidade de pessoas a serem entrevistadas: ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &id);

        if (id >= 18 && id < 35) {
            jv++;
        } else if (id >= 35 && id < 65) {
            ad++;
        } else if (id >= 65) {
            ids++;
        }
    }

    printf("Quantidade de jovens entrevistados: %d\n", jv);
    printf("Quantidade de adultos entrevistados: %d\n", ad);
    printf("Quantidade de idosos entrevistados: %d\n", ids);

    return (0);
}