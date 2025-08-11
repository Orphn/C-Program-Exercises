#include <stdio.h>
#include <string.h>

int main(){
    char palavra[52];
    char invertida[52];
    int igualdade, i, j;
    scanf("%s", palavra);
    strcpy(invertida, palavra);
    int tamanho = strlen(palavra); 
    for (i = 0, j = tamanho - 1; i <= j; i++, j--) {
        char c = invertida[i];
        invertida[i] = invertida[j];
        invertida[j] = c;
    }
    for( i = 0 ; i < tamanho ; i++){
        if((palavra[i] - invertida[i] == 0) || (palavra[i] - invertida[i] == 32) || (palavra[i] - invertida [i] == -32))
            continue;
        else{
            igualdade += 1;
        }
    }
    if(igualdade == 0){
        puts("Esta palavra e um palindromo");
    }
    else{
        puts("Esta palavra nao e um palindromo");
    }
    return 0;
}
