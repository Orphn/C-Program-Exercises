#include <stdio.h>

int main(){
    int npar, nimpar, num, input;
    input = npar = nimpar = 0;
    do{
        scanf("%d", &num);
        input++;
        if(num % 2 == 0){
            npar++;
        }
        else{
            nimpar++;
        }
    }
    while (input < 10);
    printf("%d pares, %d impares\n", npar, nimpar);
    return 0;
}