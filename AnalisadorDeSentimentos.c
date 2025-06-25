#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strdup(const char *s);
char *strsep(char **stringp, const char *delim);

char texto[10][9040];

int separador(char* linha, char*** palavra);
int buscatxt(char** palavra, int npal, int npar);
int buscasen(char** palavra, int npal, int npar, char** maior);
int buscapar(char** palavra, int npal, int i);
void pol(char* polaridade, int palpos, int palneg);
void masentenca(int nparag, char** maior);
void mesentenca(int nparag, char** menor);

int main(){
    int nparag, i = 0, numpos, numneg, palpos, palneg, questao, questaoparag, numquestoes, contador;
    char linhapos[200], linhaneg[200], polaridade[8];
    int* resolucao = NULL; int* resparag = NULL;
    char* maior = NULL; char* menor = NULL;
    char** positivo = NULL; char** negativo = NULL;

    scanf("%d", &nparag);
    getchar();

    for (i = 0; i < nparag; i++){
        fgets(texto[i], sizeof(texto[i]), stdin);
        for (int j = 0; texto[i][j]; j++){
            texto[i][j] = tolower(texto[i][j]);
        }
    }

    fgets(linhapos, sizeof(linhapos), stdin);
    fgets(linhaneg, sizeof(linhaneg), stdin);

    numpos = separador(linhapos, &positivo);
    numneg = separador(linhaneg, &negativo);

    scanf("%d", &numquestoes);
    resolucao = (int*)malloc(numquestoes * sizeof(int));
    for (i = 0; i < numquestoes; i++){
        resolucao[i] = 0;
    }
    resparag = (int*)malloc(numquestoes * sizeof(int));
    for (i = 0; i < numquestoes; i++){
        resparag[i] = 0;
    }
    for (contador = 0, i = 0; i < numquestoes; i++){
        scanf("%d", &questao);
        if(questao == 2){
            scanf(" %d", &questaoparag);
            resolucao[i] = questao;
            resparag[contador] = questaoparag;
            contador++;
        }
        else if(questao != 2){
            resolucao[i] = questao;
        }
    }

    for(i = 0, contador = 0; i < numquestoes ; i++){
        if(resolucao[i] == 1){
            palpos = buscatxt(positivo, numpos, nparag);
            palneg = buscatxt(negativo, numneg, nparag);
            pol(polaridade, palpos, palneg);
            printf("%d Palavras positivas, %d Palavras negativas: Polaridade %s\n", palpos, palneg, polaridade);
        }
        else if(resolucao[i] == 2){
            int paragbusca = resparag[contador];
            palpos = buscapar(positivo, numpos, paragbusca);
            palneg = buscapar(negativo, numneg, paragbusca);
            pol(polaridade, palpos, palneg);
            printf("%d Palavras positivas, %d Palavras negativas: Polaridade %s\n", palpos, palneg, polaridade);
            contador++;
        }
        else if(resolucao[i] == 3){
            masentenca(nparag, &maior);
            palpos = buscasen(positivo, numpos, nparag, &maior);
            palneg = buscasen(negativo, numneg, nparag, &maior);
            pol(polaridade, palpos, palneg);
            printf("%d Palavras positivas, %d Palavras negativas: Polaridade %s\n", palpos, palneg, polaridade);
        }
        else if(resolucao[i] == 4){
            mesentenca(nparag, &menor);
            palpos = buscasen(positivo, numpos, nparag, &menor);
            palneg = buscasen(negativo, numneg, nparag, &menor);
            pol(polaridade, palpos, palneg);
            printf("%d Palavras positivas, %d Palavras negativas: Polaridade %s\n", palpos, palneg, polaridade);
        }
    }
    return 0;
}

int separador(char* linha, char ***palavra){
    char* separador;
    int num = 0;

    *palavra = (char**)malloc(sizeof(char*));

    separador = strtok(linha, " \n");
    while (separador != NULL){
        *palavra = (char **)realloc(*palavra, (num + 1) * sizeof(char*));
        (*palavra)[num] = (char *)malloc((strlen(separador) + 1) * sizeof(char));

        strcpy((*palavra)[num], separador);
        num++;
        separador = strtok(NULL, " \n");
    }
    return num;
}

int buscatxt(char** palavra, int npal, int npar){
    int total = 0;
    for (int i = 0; i < npar; i++){
        for (int j = 0; j < npal; j++){
            char* ocorrencia = texto[i];
            int paltam = strlen(palavra[j]);
            while ((ocorrencia = strstr(ocorrencia, palavra[j])) != NULL){
                if ((ocorrencia == texto[i] || !isalnum(*(ocorrencia - 1))) &&
                    (!isalnum(*(ocorrencia + paltam)) || *(ocorrencia + paltam) == '\0') &&
                    (*(ocorrencia + paltam) != '-' && !isalnum(*(ocorrencia + paltam)))){
                    total++;
                }
                ocorrencia += paltam;
            }
        }
    }
    return total;
}

int buscapar(char** palavra, int npal, int i){
    int total = 0;
    for (int j = 0; j < npal; j++){
        char* ocorrencia = texto[i];
        int paltam = strlen(palavra[j]);
        while ((ocorrencia = strstr(ocorrencia, palavra[j])) != NULL){
            if ((ocorrencia == texto[i] || !isalnum(*(ocorrencia - 1))) &&
                (!isalnum(*(ocorrencia + paltam)) || *(ocorrencia + paltam) == '\0') &&
                (*(ocorrencia + paltam) != '-' && !isalnum(*(ocorrencia + paltam)))){
                total++;
            }
            ocorrencia += paltam;
        }
    }
    return total;
}

int buscasen(char** palavra, int npal, int npar, char** sentenca){
    int total = 0;
    for (int j = 0; j < npal; j++){
        char* ocorrencia = *sentenca;
        int paltam = strlen(palavra[j]);
        while ((ocorrencia = strstr(ocorrencia, palavra[j])) != NULL){
            if ((ocorrencia == *sentenca || !isalnum(*(ocorrencia - 1))) &&
                (!isalnum(*(ocorrencia + paltam)) || *(ocorrencia + paltam) == '\0') &&
                (*(ocorrencia + paltam) != '-' && !isalnum(*(ocorrencia + paltam)))){
                total++;
            }
            ocorrencia += paltam;
        }
    }
    return total;
}

void pol(char* polaridade, int palpos, int palneg){
    polaridade[0] = '\0';
    if((palpos-palneg > 3) || (palpos > 0 && palneg == 0)){
        strcat(polaridade, "positiva");
    }
    else if((palneg-palpos > 3) || (palneg > 0 && palpos == 0)){
        strcat(polaridade, "negativa");
    }
    else if(abs(palpos-palneg <= 3)){
        strcat(polaridade, "neutra");
    }
}

void masentenca(int nparag, char** maior){
    char* sen;
    int senmaior = 0;

    if (*maior != NULL){
        free(*maior);
        *maior = NULL;
    }

    for (int i = 0; i < nparag; i++){
        char* copiatxt = strdup(texto[i]);
        char* count = copiatxt;
        while ((sen = strsep(&count, ".\n")) != NULL){
            if (strlen(sen) == 0) 
                continue;
            int senatual = strlen(sen);
            if (senatual > senmaior){
                senmaior = senatual;
                *maior = (char*)malloc((senmaior + 1) * sizeof(char));
                strcpy(*maior, sen);
            }
        }
        free(copiatxt);
    }
}

void mesentenca(int nparag, char** menor){
    char* sen;
    int senmenor = -1;

    if (*menor != NULL){
        free(*menor);
        *menor = NULL;
    }

    for (int i = 0; i < nparag; i++){
        char* copiatxt = strdup(texto[i]);
        char* count = copiatxt;
        while ((sen = strsep(&count, ".\n")) != NULL){
            if (strlen(sen) == 0) 
                continue;
            int numpal = 0;
            char* sencont = strdup(sen);
            char* palavra = strtok(sencont, " ,!?;:.");
            while (palavra != NULL){
                numpal++;
                palavra = strtok(NULL, " ,!?;:.");
            }
            if (senmenor == -1 || numpal < senmenor){
                senmenor = numpal;
                *menor = (char*)malloc((strlen(sen) + 1) * sizeof(char));
                strcpy(*menor, sen);
            }
            free(sencont);
        }
        free(copiatxt);
    }
}