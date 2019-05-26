#include<stdio.h>
int main(){
    char nome[30];
    char sexo[30];
    int idadeTrabalho;
    int i;
    int j;
    int cedo = 20;
    char nomePrintado[30];
    char sexoPrintado[30];
    int masc;
    int fem;
    for(i = 0; i < 3; i++){
        scanf("%s%s%d",nome,sexo,&idadeTrabalho);
        printf("\n");
        if(idadeTrabalho < cedo){
            cedo = idadeTrabalho;
            for(j = 0; j < 30; j++){
            nomePrintado[j] = nome[j];
            sexoPrintado[j] = sexo[j];}
        }
        if(sexo == "masculino" && idadeTrabalho < 16){
            masc+=1;
        }
        if(sexo == "feminino" && idadeTrabalho <  16){
            fem+=1;
        }
    }
    printf("%s\n",nomePrintado);
    printf("%d\n",cedo);
    if(masc>fem){
        printf("homem\n");
    }
    if(fem>masc){
        printf("mulher\n");
    }
return 0;
}