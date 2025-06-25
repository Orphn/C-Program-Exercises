#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    char nome[102];
    int ra;
    float p1, p2, media;
} aluno;

int main(){
    aluno* num;
    int n;
    scanf("%d", &n);
    num = (aluno*)malloc(n*sizeof(aluno));
    if(num == NULL){
        return 1;
    }
    for(int i = 0 ; i < n ; i++){
        getchar();
        fgets((num+i)->nome, 102, stdin);
        (num+i)->nome[strlen((num+i)->nome)-1] = '\0';
        scanf("%d", &(num+i)->ra);
        scanf("%f", &(num+i)->p1);
        scanf("%f", &(num+i)->p2);
        (num+i)->media = ((num+i)->p1 + (num+i)->p2)/2;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d\t%s\t%.2f\n", (num + i)->ra, (num + i)->nome, (num + i)->media);
    }

    free(num);
    return 0;
}