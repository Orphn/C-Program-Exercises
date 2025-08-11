#include <stdio.h>
#include <math.h>

int main(){
    float contax, contay, resultado;
    typedef struct coordenada{
        float px;
        float py;
    } coordenada;
    coordenada p1, p2;
    scanf("%f %f", &p1.px, &p1.py);
    scanf("%f %f", &p2.px, &p2.py);
    contax = (p2.px - p1.px);
    contax = pow(contax, 2);
    contay = (p2.py - p1.py);
    contay = pow(contay, 2);
    resultado = contay + contax;
    resultado = sqrt(resultado);
    if(resultado < 0.0000001){
        printf("os pontos sao iguais\n");
    }
    else{
        printf("os pontos nao sao iguais\n");
    }
    return 0;
}