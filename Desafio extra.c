#include <stdio.h>

int main() {
    float nota1, nota2, notaPPD, notaExame = 0, nota3 = 0, notaFinal;
    int realizouExame = 0, realizouN3 = 0;

    // Entrada da nota N1 com validação
    do {
        printf("Digite a nota da N1 (0 a 4.5): ");
        scanf("%f", &nota1);
        if (nota1 < 0 || nota1 > 4.5) {
            printf("CÓDIGO DE ERRO 3: Nota inválida. Tente novamente.\n");
        }
    } while (nota1 < 0 || nota1 > 4.5);

    // Entrada da nota N2 com validação
    do {
        printf("Digite a nota da N2 (0 a 4.5): ");
        scanf("%f", &nota2);
        if (nota2 < 0 || nota2 > 4.5) {
            printf("CÓDIGO DE ERRO 3: Nota inválida. Tente novamente.\n");
        }
    } while (nota2 < 0 || nota2 > 4.5);

    // Entrada da nota PPD com validação
    do {
        printf("Digite a nota da PPD (0 a 1.0): ");
        scanf("%f", &notaPPD);
        if (notaPPD < 0 || notaPPD > 1.0) {
            printf("CÓDIGO DE ERRO 3: Nota inválida. Tente novamente.\n");
        }
    } while (notaPPD < 0 || notaPPD > 1.0);

    // Verifica se fez o exame unificado
    printf("O estudante realizou o exame unificado? (0 para não, 1 para sim): ");
    scanf("%d", &realizouExame);

    if (realizouExame) {
        do {
            printf("Digite a nota do exame unificado (0 a 1.0): ");
            scanf("%f", &notaExame);
            if (notaExame < 0 || notaExame > 1.0) {
                printf("CÓDIGO DE ERRO 3: Nota inválida. Tente novamente.\n");
            }
        } while (notaExame < 0 || notaExame > 1.0);
    }

    // Verifica se fez a N3
    printf("O estudante fez a N3? (0 para não, 1 para sim): ");
    scanf("%d", &realizouN3);

    if (realizouN3) {
        do {
            printf("Digite a nota da N3 (0 a 4.5): ");
            scanf("%f", &nota3);
            if (nota3 < 0 || nota3 > 4.5) {
                printf("CÓDIGO DE ERRO 3: Nota inválida. Tente novamente.\n");
            }
        } while (nota3 < 0 || nota3 > 4.5);
    }

    // Atualiza nota1 ou nota2 se a nota3 for maior
    if (nota3 > nota1) {
        nota1 = nota3;
    } else if (nota3 > nota2) {
        nota2 = nota3;
    }

    // Cálculo da nota final
    notaFinal = nota1 + nota2 + notaPPD + notaExame;

    // Ajuste da nota final para não ultrapassar 10
    if (notaFinal > 10) {
        notaFinal = 10;
    }

    // Impressão do resultado final
    printf("A nota final do estudante é: %.2f\n", notaFinal);
    if (notaFinal >= 7) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
