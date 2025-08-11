#include <stdio.h>

void soma(int n1r, int n1i, int n2r, int n2i, int *resr, int *resi);
void mult(int n1r, int n1i, int n2r, int n2i, int *resr, int *resi);

int main(){
    char op;
    typedef struct numero{
        int real;
        int imaginario;
    } numero;
    numero n1; numero n2; numero res;

    scanf("%d %d %c %d %d", &n1.real, &n1.imaginario, &op, &n2.real, &n2.imaginario);
    if(op == '+'){
        soma(n1.real, n1.imaginario, n2.real, n2.imaginario, &res.real, &res.imaginario);
    }
    else{
        mult(n1.real, n1.imaginario, n2.real, n2.imaginario, &res.real, &res.imaginario);
    }
    printf("%d + %di\n", res.real, res.imaginario);
    return 0;
}

void soma(int n1r, int n1i, int n2r, int n2i, int *resr, int *resi){
    *resr = n1r + n2r;
    *resi = n1i + n2i;
}

void mult(int n1r, int n1i, int n2r, int n2i, int *resr, int *resi){
    *resr = n1r*n2r - n1i*n2i;
    *resi = n1r*n2i + n1i*n2r;
}