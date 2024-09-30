#include <stdio.h>

int main() {
    float N1 = 0, N2 = 0, PPD = 0, EU = 0, N3 = 0, NotaFinal = 0;
    int fezEU = 0, fezN3 = 0;

    // Leitura da N1 com validação
    do {
        printf("Informe a nota da N1 (0 a 4.5): ");
        scanf("%f", &N1);
        
        if (N1 < 0 || N1 > 4.5) {
            printf("ERRO: Nota inválida. Tente novamente.\n");
        }
    } while (N1 < 0 || N1 > 4.5);
    
    // Leitura da N2 com validação
    do {
        printf("Informe a nota da N2 (0 a 4.5): ");
        scanf("%f", &N2);
        
        if (N2 < 0 || N2 > 4.5) {
            printf("ERRO: Nota inválida. Tente novamente.\n");
        }
    } while (N2 < 0 || N2 > 4.5);
    
    // Leitura da PPD com validação
    do {
        printf("Informe a nota da PPD (0 a 1.0): ");
        scanf("%f", &PPD);
        
        if (PPD < 0 || PPD > 1.0) {
            printf("ERRO: Nota inválida. Tente novamente.\n");
        }
    } while (PPD < 0 || PPD > 1.0);
    
    // Pergunta se o aluno fez o Exame Unificado
    printf("O aluno realizou o Exame Unificado (EU)? (0 = Não, 1 = Sim): ");
    scanf("%d", &fezEU);
    
    // Se fez o Exame Unificado, lê a nota com validação
    if (fezEU == 1) {
        do {
            printf("Informe a nota do Exame Unificado (0 a 1.0): ");
            scanf("%f", &EU);
            
            if (EU < 0 || EU > 1.0) {
                printf("ERRO: Nota inválida. Tente novamente.\n");
            }
        } while (EU < 0 || EU > 1.0);
    }
    
    // Pergunta se o aluno fez a N3
    printf("O aluno realizou a N3? (0 = Não, 1 = Sim): ");
    scanf("%d", &fezN3);
    
    // Se fez a N3, lê a nota com validação
    if (fezN3 == 1) {
        do {
            printf("Informe a nota da N3 (0 a 4.5): ");
            scanf("%f", &N3);
            
            if (N3 < 0 || N3 > 4.5) {
                printf("ERRO: Nota inválida. Tente novamente.\n");
            }
        } while (N3 < 0 || N3 > 4.5);
    }
    
    // Substitui a menor nota entre N1 e N2, caso a N3 seja maior
    if (fezN3 == 1) {
        if (N3 > N1) {
            N1 = N3;
        } else if (N3 > N2) {
            N2 = N3;
        }
    }
    
    // Calcula a nota final
    NotaFinal = N1 + N2 + PPD + EU;
    
    // Verifica o resultado do aluno
    if (NotaFinal >= 7 && NotaFinal <= 10) {
        printf("Nota final: %.2f\n", NotaFinal > 10 ? 10.0 : NotaFinal); // Garante que não passe de 10
        printf("Resultado: APROVADO\n");
    } else {
        printf("Nota final: %.2f\n", NotaFinal);
        printf("Resultado: REPROVADO\n");
    }

    return 0;
}
