#include <stdio.h>

int main(){
    int baralhoa, baralhob, baralhoc, baralhod, cartavalor;
    char cartacodigo, ultimo, ganhou;
    int pta = 0, ptb = 0, ptc = 0, ptd = 0, pa = 0, pb = 0, pc = 0, pd = 0;
    do{
        scanf("%d %d %d %d", &baralhoa, &baralhob, &baralhoc, &baralhod); //Numero de cartas de cada jogador
        while(baralhoa>0){
            scanf("%d-%c", &cartavalor, &cartacodigo); //Codigos das cartas do jogador A
            if((cartacodigo == 'E') && (cartavalor == 12)){
                pta+=13;
            }
            else if(cartacodigo == 'C'){
                pta+=1;
            }
            baralhoa--;
        }
        while(baralhob>0){
            scanf("%d-%c", &cartavalor, &cartacodigo); //Codigos das cartas do jogador B
            if((cartacodigo == 'E') && (cartavalor == 12)){
                ptb+=13;
            }
            else if(cartacodigo == 'C'){
                ptb+=1;
            }
            baralhob--;
        }
        while(baralhoc>0){
            scanf("%d-%c", &cartavalor, &cartacodigo); //Codigos das cartas do jogador C
            if((cartacodigo == 'E') && (cartavalor == 12)){
                ptc+=13;
            }
            else if(cartacodigo == 'C'){
                ptc+=1;
            }
            baralhoc--;
        }
        while(baralhod>0){
            scanf("%d-%c", &cartavalor, &cartacodigo); //Codigos das cartas do jogador D
            if((cartacodigo == 'E') && (cartavalor == 12)){
                ptd+=13;
            }
            else if(cartacodigo == 'C'){
                ptd+=1;
            }
            baralhod--;
        }
        if(pta == 26){
            pb+=26;
            pc+=26;
            pd+=26;
            pta-=pta;
        }
        if(ptb == 26){
            pa+=26;
            pc+=26;
            pd+=26;
            ptb-=ptb;
        }
        if(ptc == 26){
            pa+=26;
            pb+=26;
            pd+=26;
            ptc-=ptc;
        }
        if(ptd == 26){
            pa+=26;
            pb+=26;
            pc+=26;
            ptd-=ptd;
        }
        else{
            pa+=pta;
            pb+=ptb;
            pc+=ptc;
            pd+=ptd;
        }
        pta-=pta;
        ptb-=ptb;
        ptc-=ptc;
        ptd-=ptd;
        printf("A: %d B: %d C: %d D: %d\n", pa, pb, pc, pd);
    }
    while((pa<100) && (pb<100) && (pc<100) && (pd<100));
    if(pa >= 100){
        ultimo = 'A';
    }
    else if(pb >= 100){
            ultimo = 'B';
    }
        else if(pc >= 100){
                ultimo = 'C';
        }
            else
                ultimo = 'D';
    if((pa<pb) && (pa<pc) && (pa<pd)){
        ganhou = 'A';
    }
    else if((pb<pa) && (pb<pc) && (pb<pd)){
            ganhou = 'B';
        }
        else if((pc<pa) && (pc<pb) && (pc<pd)){
                ganhou = 'C';
            }
        else
            ganhou = 'D';
    printf("Vencedor: jogador %c; Ultimo Lugar: jogador %c\n", ganhou, ultimo);    
    return 0;
}