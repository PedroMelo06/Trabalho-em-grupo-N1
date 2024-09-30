#include <stdio.h>
#include <limits.h>

int main() {
    // Exibindo os limites dos tipos de variáveis
    printf("Limites dos tipos de variáveis:\n");

    // Limites para char
    printf("\nTipo: char\n");
    printf("Valor mínimo: %d\n", CHAR_MIN);
    printf("Valor máximo: %d\n", CHAR_MAX);

    // Limites para short int
    printf("\nTipo: short int\n");
    printf("Valor mínimo: %d\n", SHRT_MIN);
    printf("Valor máximo: %d\n", SHRT_MAX);

    // Limites para int
    printf("\nTipo: int\n");
    printf("Valor mínimo: %d\n", INT_MIN);
    printf("Valor máximo: %d\n", INT_MAX);

    // Limites para unsigned int
    printf("\nTipo: unsigned int\n");
    printf("Valor máximo: %u\n", UINT_MAX); // Apenas valor máximo, já que não existem negativos

    // Limites para long int
    printf("\nTipo: long int\n");
    printf("Valor mínimo: %ld\n", LONG_MIN);
    printf("Valor máximo: %ld\n", LONG_MAX);

    // Limites para unsigned long int
    printf("\nTipo: unsigned long int\n");
    printf("Valor máximo: %lu\n", ULONG_MAX);

    // Limites para long long int
    printf("\nTipo: long long int\n");
    printf("Valor mínimo: %lld\n", LLONG_MIN);
    printf("Valor máximo: %lld\n", LLONG_MAX);

    // Limites para unsigned long long int
    printf("\nTipo: unsigned long long int\n");
    printf("Valor máximo: %llu\n", ULLONG_MAX);

    return 0;
}
