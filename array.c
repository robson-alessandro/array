#include <stdio.h>

int main(){

    printf("############criar uma lista de numeros sem repetir#########");

    int numero;
    int lista[8];
    int posicao = 0;


    do{
        printf("digite o numero:");
        scanf("%d" , &numero);
        

        for (int i=0 ; i<len(lista); i++){
            if (lista[i]== numero){
                printf("este numero ja esta na lista");
                break;
            }else{
                lista[posicao] = numero;
                posicao++;
            }
            }
        for(int j=0 ; j<len(lista); j++){
            printf("%d",lista[j]);
        }

        }while(len(lista)<8);
}

