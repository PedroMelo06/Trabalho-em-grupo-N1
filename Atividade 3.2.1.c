#include <stdio.h>
#include <limits.h>

int main() {
    // Exibindo os limites dos tipos de vari�veis
    printf("Limites dos tipos de vari�veis:\n");

    // Limites para char
    printf("\nTipo: char\n");
    printf("Valor m�nimo: %d\n", CHAR_MIN);
    printf("Valor m�ximo: %d\n", CHAR_MAX);

    // Limites para short int
    printf("\nTipo: short int\n");
    printf("Valor m�nimo: %d\n", SHRT_MIN);
    printf("Valor m�ximo: %d\n", SHRT_MAX);

    // Limites para int
    printf("\nTipo: int\n");
    printf("Valor m�nimo: %d\n", INT_MIN);
    printf("Valor m�ximo: %d\n", INT_MAX);

    // Limites para unsigned int
    printf("\nTipo: unsigned int\n");
    printf("Valor m�ximo: %u\n", UINT_MAX); // Apenas valor m�ximo, j� que n�o existem negativos

    // Limites para long int
    printf("\nTipo: long int\n");
    printf("Valor m�nimo: %ld\n", LONG_MIN);
    printf("Valor m�ximo: %ld\n", LONG_MAX);

    // Limites para unsigned long int
    printf("\nTipo: unsigned long int\n");
    printf("Valor m�ximo: %lu\n", ULONG_MAX);

    // Limites para long long int
    printf("\nTipo: long long int\n");
    printf("Valor m�nimo: %lld\n", LLONG_MIN);
    printf("Valor m�ximo: %lld\n", LLONG_MAX);

    // Limites para unsigned long long int
    printf("\nTipo: unsigned long long int\n");
    printf("Valor m�ximo: %llu\n", ULLONG_MAX);

    return 0;
}
