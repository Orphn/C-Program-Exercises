#include <stdio.h>
#include <math.h>
#define siz 10

void cubo(int A[10], int tam);

int main(){
    int A[siz];
    for(int i = 0 ; i < siz ; i++){
        scanf("%d", &A[i]);
    }
    cubo(A, siz);
    return 0; 
}

void cubo(int A[10], int tam){
    int B[siz];
    for(int i = 0 ; i < tam ; i++){
        B[i] = pow(A[i], 3);
        printf("%d\n", B[i]);
    }
}