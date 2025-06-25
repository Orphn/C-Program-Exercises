#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculo(float* num, int x, int tam);

int main(){
    float* num;
    int tam;
    float x;
    scanf("%d", &tam);
    num = (float*)malloc((tam+1)*sizeof(float));
    if(num == NULL){
        return 1;
    }

    for(int i = 0 ; i <= tam ; i++){
        scanf("%f", &num[i]);
    }
    scanf("%f", &x);
    printf("%.2f\n", calculo(num, x, tam));

    free(num);
    return 0;
}

float calculo(float* num, int x, int tam){
    float resultado = 0;
    for(int i = 0; i <= tam ; i++){
        resultado += num[i]*pow(x, i);
    }
    return resultado;
}