#include "remove.h"
#include <math.h>

int func_val(int x, int b) {
    double f;
    double a0 = 186.752;
    double a1 = -148.235;
    double a2 = 34.5049;
    double a3 = -3.5091;
    double a4 = 0.183166;
    double a5 = -0.00513554;
    double a6 = 0.0000735464;
    double a7 = -4.22038e-7;
    
    // Cálculo direto do valor de f usando multiplicações
    f = a0 + (a1 + b) * x + a2 * (x * x) + a3 * (x * x * x) +
        a4 * (x * x * x * x) + a5 * (x * x * x * x * x) +
        a6 * (x * x * x * x * x * x) + a7 * (x * x * x * x * x * x * x);
    
    return round(f);
}
