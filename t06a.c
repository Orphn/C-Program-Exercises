#include <stdio.h>
#define N 20

int main(){
    int ncol, nlin, l, c;
    int m[N] [N];
    scanf("%d %d", &ncol, &nlin);
    for(c=0 ; c<ncol ; c++){
        for(l=0 ; l<nlin ; l++){
            scanf("%d", &m[l] [c]);
        }
    }
    for(l=0 ; l<nlin ; l++){
        for(c=0 ; c<ncol ; c++){
            printf("%d ", m[l] [c]);
        }
        printf("\n");
    }
}