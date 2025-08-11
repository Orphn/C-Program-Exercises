#include <stdio.h>
#include <stdlib.h>

int simetria(int** matriz, int l, int c);

int main(){
    int l, c, sime, i, h;
    scanf("%d %d", &l, &c);
    int** matriz = (int**)malloc(l*sizeof(int*));
    if(matriz == NULL){
        return 1;
    }

    for(i = 0 ; i < l ; i++){
        matriz[i] = (int*)malloc(c*sizeof(int));
        if(matriz[i] == NULL){
            return 1;
        }
    }

    for(i = 0 ; i < l ; i++){
        for(h = 0 ; h < c ; h++){
            scanf("%d", &matriz[i][h]);
        }
    }
    if (l != c) {
        printf("Nao eh simetrica\n");
        return 0;
    }
    sime = simetria(matriz, l, c);
    if(sime == 0){
        printf("Eh simetrica\n");
    }
    else{
        printf("Nao eh simetrica\n");
    }
    for(i = 0; i < l; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;   
}

int simetria(int** matriz, int l, int c){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(matriz[i][j] != matriz[j][i]){
                return 1;
            }
        }
    }
    return 0;
}