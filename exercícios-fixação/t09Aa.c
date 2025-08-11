#include <stdio.h>
#include <math.h>

float volume_esfera(float raio);

int main(){
    float raio;
    scanf("%f", &raio);
    printf("%.2f\n", volume_esfera(raio));
    return 0;
}

float volume_esfera(float raio){
    float vol;
    vol = (4 * 3.14159 * pow(raio, 3)) / 3;
    return vol;
}