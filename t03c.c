#include <stdio.h>

int main(){
    float num1, num2;
    char op;
    scanf("%f%c%f", &num1, &op, &num2);
    if (op == '+'){
        printf("%0.3f%c%0.3f=%0.3f\n", num1, op, num2, num1 + num2);
    }
    else if (op == '-'){
        printf("%0.3f%c%0.3f=%0.3f\n", num1, op, num2, num1 - num2);
    }
    else if (op == '/'){
        printf("%0.3f%c%0.3f=%0.3f\n", num1, op, num2, num1 / num2);
    }
    else if (op == '*'){
        printf("%0.3f%c%0.3f=%0.3f\n", num1, op, num2, num1 * num2);
    }
    else{
        printf("Operador invalido\n");
    }
    return 0;
}