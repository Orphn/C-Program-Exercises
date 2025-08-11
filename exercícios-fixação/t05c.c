#include <stdio.h>

int main(){
    int valores1[10], valores2[10], i;
    for(i = 0; i<10 ; i++){
        scanf("%d", &valores1[i] );
    }
    for(i = 0; i<10 ; i++){
        scanf("%d", &valores2[i] );
    }
    for(i = 0; i<10 ; i++){
        printf("%d|%d|", valores1[i], valores2[i]);
    }
    printf("\n");
    return 0;    
}