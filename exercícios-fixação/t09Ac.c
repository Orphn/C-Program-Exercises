#include <stdio.h>
#include <math.h>

float soma(float valor1, float valor2);
float sub(float valor1, float valor2);
float div(float valor1, float valor2);
float mult(float valor1, float valor2);
float pot(float valor1, float valor2);

int main(){
    float valor1, valor2;
    char operador;
    scanf("%f%c%f", &valor1, &operador, &valor2);
    switch(operador){
        case '+':
            printf("%.3f\n", soma(valor1, valor2));
            break;
        case '-':
            printf("%.3f\n", sub(valor1, valor2));
            break;
        case '/':
            printf("%.3f\n", div(valor1, valor2));
            break;
        case '*':
            printf("%.3f\n", mult(valor1, valor2));
            break;
        case '^':
            printf("%.3f\n", pot(valor1, valor2));
            break;
    }
    return 0;
}

float soma(float valor1, float valor2){
    float resultado;
    resultado = valor1 + valor2;
    return resultado;
}
float sub(float valor1, float valor2){
    float resultado;
    resultado = valor1 - valor2;
    return resultado;
}
float div(float valor1, float valor2){
    float resultado;
    resultado = valor1 / valor2;
    return resultado;
}
float mult(float valor1, float valor2){
    float resultado;
    resultado = valor1 * valor2;
    return resultado;
}
float pot(float valor1, float valor2){
    float resultado;
    resultado = pow(valor1, valor2);
    return resultado;
}