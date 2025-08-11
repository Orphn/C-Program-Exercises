#include <stdio.h>
#include <math.h>

int main(){
    float calculo;
    typedef struct corpo{
        float altura, peso;
        char nome[72];
    } corpo;
    corpo altura, peso, nome;
    scanf("%f", &altura.altura);
    scanf("%f", &peso.peso);
    scanf("%s", nome.nome);
    calculo = peso.peso / pow(altura.altura, 2);
    printf("%.3f\n", calculo); 
    return 0;
}