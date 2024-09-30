#include <stdio.h>
#include <math.h>

// Definição dos coeficientes da função
double a0 = 186.752;
double a1 = -148.235;
double a2 = 34.5049;
double a3 = -3.5091;
double a4 = 0.183166;
double a5 = -0.00513554;
double a6 = 0.0000735464;
double a7 = -4.22038e-7;

// Função para calcular f(x, b)
double f(int x, double b) {
    return a0 + (a1 + b) * x + a2 * pow(x, 2) + a3 * pow(x, 3) + a4 * pow(x, 4) +
           a5 * pow(x, 5) + a6 * pow(x, 6) + a7 * pow(x, 7);
}

// Função para converter hex para decimal
int hexToDecimal(char high, char low) {
    int highValue = (high >= '0' && high <= '9') ? high - '0' : (high - 'A' + 10);
    int lowValue = (low >= '0' && low <= '9') ? low - '0' : (low - 'A' + 10);
    return highValue * 16 + lowValue;
}

int main() {
    char mensagem_hex[] = "48656C6C6F2C20576F726C642100"; // Exemplo de mensagem em hexadecimal (Hello, World!)
    int i = 0;
    int x = 1;
    double b;
    
    // Ler valor de b (que será fornecido pelo agente)
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    
    printf("Mensagem decodificada: ");
    
    while (mensagem_hex[i] != '\0' && mensagem_hex[i + 1] != '\0') {
        int decimalValue = hexToDecimal(mensagem_hex[i], mensagem_hex[i + 1]);
        
        // Verifica se é o caractere nulo
        if (decimalValue == 0) {
            break;
        }
        
        // Calcula a função f(x, b)
        double resultado_f = f(x, b);
        
        // Se o valor da função for aceitável, imprime o caractere
        if (resultado_f >= 0 && resultado_f <= 255) {
            printf("%c", decimalValue);
        }
        
        i += 2;
        x++;
    }
    
    printf("\n");
    return 0;
}
