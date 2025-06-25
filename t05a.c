#include <stdio.h>

int main(){
    float notas[20], valorbusca;
    int numnota;
    int i = 0;
    for(numnota = 0 ; numnota < 20 ; numnota++){
        scanf("%f", &notas[numnota]);
    }
    while((valorbusca<=10) && (valorbusca>=0)){
        scanf("%f", &valorbusca);
        if((valorbusca<=10) && (valorbusca>=0)){
            while((notas[i] != valorbusca) && (i<20)){
                i++;
            }
            if(i<20){
                printf("existe\n");
            }
            else{
                printf("nao existe\n");
            }
            i-=i;
        }
        else
            break;
    }
    return 0;
}