#include <stdio.h>

struct Aluno {
    int mat;
    char nome[50];
    float nav, sim1, sim2;
};

int main() {

    struct Aluno alunx;

    // Solicitando e lendo os dados do aluno
    printf("Digite a matrícula do aluno: ");
    scanf("%d", &alunx.mat);

    printf("Digite o nome do aluno: ");
    scanf("%s", alunx.nome);

    printf("Digite a nota da AV do aluno: ");
    scanf("%f", &alunx.nav);

    printf("Digite a nota do Simulado 1 do aluno: ");
    scanf("%f", &alunx.sim1);

    printf("Digite a nota do Simulado 2 do aluno: ");
    scanf("%f", &alunx.sim2);

    // Exibindo os dados do aluno
    printf("\nDados do aluno:\n");
    printf("Matrícula: %d\n", alunx.mat);
    printf("Nome: %s\n", alunx.nome);
    printf("Nota da AV: %.2f\n", alunx.nav);
    printf("Nota do Simulado 1: %.2f\n", alunx.sim1);
    printf("Nota do Simulado 2: %.2f\n", alunx.sim2);

    return (0);
}