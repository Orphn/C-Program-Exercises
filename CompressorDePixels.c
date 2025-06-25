#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 12
#define C 12

int main(){
    char cor[13], linha[111];
    //contagem das cores por linha
    int C000 = 0, C200 = 0, C020 = 0, C002 = 0, C220 = 0;
    //contagem total das cores
    int tC000 = 0, tC200 = 0, tC020 = 0, tC002 = 0, tC220 = 0;
    int nlin, ncol, l, c, cor1, cor2, cor3, max;
    int m[N][C];
    scanf("P3 %d %d 255", &nlin, &ncol);
    //scan para comprimir o RGB

    for(l = 0 ; l < nlin ; l++){
        for(c = 0 ; c < ncol ; c++){
            scanf("%d %d %d", &cor1, &cor2, &cor3);
            sprintf(cor, "%d %d %d", cor1, cor2, cor3);
            if(strstr(cor, "0 0 0" )){
                C000++;
            }
                else if(strstr(cor, "255 0 0" )){
                    C200++;
                }
                    else if(strstr(cor, "0 255 0" )){
                        C020++;
                    }
                        else if(strstr(cor, "0 0 255" )){
                            C002++;
                        }
                            else{
                                C220++;
                            }        
        }
        m[l][0] = C000;
        m[l][1] = C200;
        m[l][2] = C020;
        m[l][3] = C002;
        m[l][4] = C220;

        //somar para o total de cada cor
        tC000 += C000; tC200 += C200; tC020 += C020; tC002 += C002; tC220 += C220;
        C000 = 0; C200 = 0; C020 = 0; C002 = 0; C220 = 0;
    }

    //print para a matriz comprimida
    for(l = 0 ; l < nlin ; l++){
        for(c = 0 ; c < 5 ; c++){
            printf("%d ", m[l] [c]);
        }
        printf("\n");
    }

    //identificar qual cor foi a majoritaria e atribuir o valor dela
    if(tC000 >= tC200 && tC000 >= tC020 && tC000 >= tC002 && tC000 >= tC220){
        max = tC000;
    }
        else if(tC200 >= tC020 && tC200 >= tC002 && tC200 >= tC220){
            max = tC200;
        }
            else if(tC020 >= tC002 && tC020 >= tC220){
                max = tC020;
            }
                else if(tC002 >= tC220){
                    max = tC002;
                }
                    else{
                        max = tC220;
                    }

    //verificacao de condicao pra caso uma cor seja maior que as outras
    if(tC000 > tC200 && tC000 > tC020 && tC000 > tC002 && tC000 > tC220){
        for(l = 0 ; l < nlin ; l++){
            linha[0] = '\0';
            for(; m[l][0]>0 ; m[l][0]--){
                strcat(linha, "0 0 0 ");
            }
            for(; m[l][1]>0 ; m[l][1]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][2]>0 ; m[l][2]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][3]>0 ; m[l][3]--){
                strcat(linha, "255 255 255 ");  
            }
            for(; m[l][4]>0 ; m[l][4]--){
                strcat(linha, "255 255 255 ");
            }
            linha[strlen(linha)-1] = '\0';
            printf("%s", linha);
            printf("\n");
        }
    }
    else if(tC200 > tC000 && tC200 > tC020 && tC200 > tC002 && tC200 > tC220){
        for(l = 0 ; l < nlin ; l++){
            linha[0] = '\0';
            for(; m[l][0]>0 ; m[l][0]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][1]>0 ; m[l][1]--){
                strcat(linha, "0 0 0 ");
            }
            for(; m[l][2]>0 ; m[l][2]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][3]>0 ; m[l][3]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][4]>0 ; m[l][4]--){
                strcat(linha, "255 255 255 ");
            }
            linha[strlen(linha)-1] = '\0';
            printf("%s", linha);
            printf("\n");
        }
    } 
    else if(tC020 > tC000 && tC020 > tC200 && tC020 > tC002 && tC020 > tC220){
        for(l = 0 ; l < nlin ; l++){
            linha[0] = '\0';
            for(; m[l][0]>0 ; m[l][0]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][1]>0 ; m[l][1]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][2]>0 ; m[l][2]--){
                strcat(linha, "0 0 0 ");
            }
            for(; m[l][3]>0 ; m[l][3]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][4]>0 ; m[l][4]--){
                strcat(linha, "255 255 255 ");
            }
            linha[strlen(linha)-1] = '\0';
            printf("%s", linha);
            printf("\n");
        }
    } 
    else if(tC002 > tC000 && tC002 > tC200 && tC002 > tC020 && tC000 > tC220){
        for(l = 0 ; l < nlin ; l++){
            linha[0] = '\0';
            for(; m[l][0]>0 ; m[l][0]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][1]>0 ; m[l][1]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][2]>0 ; m[l][2]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][3]>0 ; m[l][3]--){
                strcat(linha, "0 0 0 ");
            }
            for(; m[l][4]>0 ; m[l][4]--){
                strcat(linha, "255 255 255 ");
            }
            linha[strlen(linha)-1] = '\0';
            printf("%s", linha);
            printf("\n");
        }
    }
    else if(tC220 > tC000 && tC220 > tC020 &&  tC220 > tC002 && tC220 > tC200){
        for(l = 0 ; l < nlin ; l++){
            linha[0] = '\0';
            for(; m[l][0]>0 ; m[l][0]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][1]>0 ; m[l][1]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][2]>0 ; m[l][2]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][3]>0 ; m[l][3]--){
                strcat(linha, "255 255 255 ");
            }
            for(; m[l][4]>0 ; m[l][4]--){
                strcat(linha, "0 0 0 ");
            }
            linha[strlen(linha)-1] = '\0';
            printf("%s", linha);
            printf("\n");
        }
    }

    //em caso de empates, verificar quais foram os empates e manter a cor original
    else{
        for(l = 0 ; l < nlin ; l++){
            linha[0] = '\0';
            if(tC000 == max){
                for(; m[l][0]>0 ; m[l][0]--){
                    strcat(linha, "0 0 0 ");
                }
            }
            else if((tC000 < max) && (tC000 != 0)){
                for(; m[l][0]>0 ; m[l][0]--){
                    strcat(linha, "255 255 255 ");
                }
            }
            if(tC200 == max){
                for(; m[l][1]>0 ; m[l][1]--){
                    strcat(linha, "255 0 0 ");
                }
            }
            else if((tC200 < max) && (tC200 != 0)){
                for(; m[l][1]>0 ; m[l][1]--){
                    strcat(linha, "255 255 255 ");
                }
            }
            if(tC020 == max){
                for(; m[l][2]>0 ; m[l][2]--){
                    strcat(linha, "0 255 0 ");
                }
            }
            else if((tC020 < max) && (tC020 != 0)){
                for(; m[l][2]>0 ; m[l][2]--){
                    strcat(linha, "255 255 255 ");
                }
            }
            if(tC002 == max){
                for(; m[l][3]>0 ; m[l][3]--){
                    strcat(linha, "0 0 255 ");
                }
            }
            else if((tC002 < max) && (tC002 != 0)){
                for(; m[l][3]>0 ; m[l][3]--){
                    strcat(linha, "255 255 255 ");
                }
            }
            if(tC220 == max){
                for(; m[l][4]>0 ; m[l][4]--){
                    strcat(linha, "255 255 0 ");
                }
            }
            else if((tC220 < max) && (tC220 != 0)){
                for(; m[l][4]>0 ; m[l][4]--){
                    strcat(linha, "255 255 255 ");
                }
            }
            linha[strlen(linha)-1] = '\0';
            printf("%s", linha);
            printf("\n");
        }
    }
    return 0;
}