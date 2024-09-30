#include <stdio.h>
#include <limits.h>

int main() {
    // Titulo
    printf("Limites dos Tipos de Variaveis em C\n");
    printf("----------------------------\n");

    // Exibir limites para char
    printf("\n[Tipo: char]\n");
    printf("Menor valor: %d\n", CHAR_MIN);
    printf("Maior valor: %d\n", CHAR_MAX);

    // Exibir limites para short int
    printf("\n[Tipo: short int]\n");
    printf("Menor valor: %d\n", SHRT_MIN);
    printf("Maior valor: %d\n", SHRT_MAX);

    // Exibir limites para int
    printf("\n[Tipo: int]\n");
    printf("Menor valor: %d\n", INT_MIN);
    printf("Maior valor: %d\n", INT_MAX);

    // Exibir limites para unsigned int
    printf("\n[Tipo: unsigned int]\n");
    printf("Maior valor: %u\n", UINT_MAX);

    // Exibir limites para long int
    printf("\n[Tipo: long int]\n");
    printf("Menor valor: %ld\n", LONG_MIN);
    printf("Maior valor: %ld\n", LONG_MAX);

    // Exibir limites para unsigned long int
    printf("\n[Tipo: unsigned long int]\n");
    printf("Maior valor: %lu\n", ULONG_MAX);

    // Exibir limites para long long int
    printf("\n[Tipo: long long int]\n");
    printf("Menor valor: %lld\n", LLONG_MIN);
    printf("Maior valor: %lld\n", LLONG_MAX);

    // Exibir limites para unsigned long long int
    printf("\n[Tipo: unsigned long long int]\n");
    printf("Maior valor: %llu\n", ULLONG_MAX);

    // Fim
    printf("\nFim da Tabela de Limites.\n");

    return 0;
}
