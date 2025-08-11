#include <stdio.h>

int main(){
    typedef struct coordenada{
        int px;
        int py;
    } coordenada;
    coordenada r1inf, r2inf, r1sup, r2sup;
    scanf("%d %d", &r1inf.px, &r1inf.py);
    scanf("%d %d", &r1sup.px, &r1sup.py);
    scanf("%d %d", &r2inf.px, &r2inf.py);
    scanf("%d %d", &r2sup.px, &r2sup.py);
    if((r2inf.px >= r1inf.px) && (r2inf.py >= r1inf.py) && (r2sup.px <= r1sup.px) && (r2sup.py <= r1sup.py)){
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    else{
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }
    return 0;
}