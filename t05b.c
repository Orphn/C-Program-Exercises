#include <stdio.h>

int main(){
    float vendas[10], valor[10], lucro = 0;
    int numvenda, numvalor, vtotal = 0, i = 0;
    for(numvenda = 0 ; numvenda < 10 ; numvenda++){
        scanf("%f", &vendas[numvenda]);
    }
    for(numvalor = 0 ; numvalor < 10 ; numvalor++){
        scanf("%f", &valor[numvalor]);
    }
    for(i = 0 ; i < 10 ; i++){
        lucro += vendas[i]*valor[i];
    }
    for(i = 0 ; i < 10 ; i++){
        vtotal += vendas[i];
    }
    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", lucro, vtotal);
    return 0;
}