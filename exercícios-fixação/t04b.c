#include <stdio.h>

int main(){
    int n, rn, s, rs, ns, rns, resultado;
    scanf("%d %d", &n, &s);
    rn = rs = rns = 1;
    ns = n-s;
    while(n > 1){
        rn *= n--;
    }
    while(s > 1){
        rs *= s--;
    }
    while(ns > 1){
        rns *= ns--;
    }
    resultado = rn/(rs*rns);
    printf("%d\n", resultado);
    return 0;
} 