#include <stdio.h>
#include <math.h>

float media(float nota1, float nota2, char media);

int main(){
    float nota1, nota2;
    char letra;
    scanf("%c", &letra);
    scanf("%f %f", &nota1, &nota2);
    printf("%.3f\n", media(nota1, nota2, letra));
    return 0;
}

float media(float nota1, float nota2, char media){
    float resultado;
    if(media == 'A'){
        resultado = (nota1 + nota2) / 2;
    }
    else if(media == 'B'){
        resultado = sqrt(nota1 * nota2);
    }
    return resultado;
}