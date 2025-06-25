#include <stdio.h>

int main(){
    int d, m, a;
    scanf("%d/%d/%d", &d, &m ,&a);
    switch(m){
        case 1:
            printf("%d de janeiro de %d\n", d, a);
            break;
        case 2:
            printf("%d de feveiro de %d\n", d, a);
            break;
        case 3:
            printf("%d de marco de %d\n", d, a);
            break;
        case 4:
            printf("%d de abril de %d\n", d, a);
            break;
        case 5:
            printf("%d de maio de %d\n", d, a);
            break;
        case 6:
            printf("%d de junho de %d\n", d, a);
            break;
        case 7:
            printf("%d de julho de %d\n", d, a);
            break;
        case 8:
            printf("%d de agosto de %d\n", d, a);
            break;
        case 9:
            printf("%d de setembro de %d\n", d, a);
            break;
        case 10:
            printf("%d de outubro de %d\n", d, a);
            break;
        case 11:
            printf("%d de novembro de %d\n", d, a);
            break;
        case 12:
            printf("%d de dezembro de %d\n", d, a);
            break;
        default:
            printf("Mes invalido\n");
    }
    return 0;
}