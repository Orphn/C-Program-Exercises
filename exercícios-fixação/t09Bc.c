#include <stdio.h>
void busca(int siz, int v[siz], int *valormax, int *valormin);

int main(){
    int tam, max, min, i;
    scanf("%d", &tam);
    int num[tam];
    for(i = 0 ; i < tam ; i++){
        scanf("%d", &num[i]);
    }
    busca(tam, num, &max, &min);
    printf("maior valor: %d\nmenor valor: %d\n", max, min);
    return 0;
}

void busca(int siz, int v[siz], int *valormax, int *valormin){
    *valormax = v[0]; *valormin = v[0];
    for(int i = 0 ; i < siz ; i++){
        if((v[i] >= *valormax) && (i <= siz)){
            *valormax = v[i];
        }
        if((v[i] <= *valormin) && (i <= siz)){
            *valormin = v[i];
        }
    }
}