#include <stdio.h>

void adicionar(int *lista , int tamanho);
int main(){
    int tamanho;
    printf("############criar uma lista de numeros sem repetir#########\n");
    printf("digite o tamanho da lista :");
    scanf("%d", &tamanho);

    int lista[tamanho];

    adicionar(lista , tamanho);

    for(int j=0 ; j<tamanho; j++){
            printf("%d",lista[j]);
    }
    
  return 0;
}

void adicionar(int *lista , int tamanho){
    int numero;
    int posicao = 0;
    do{
        printf("digite o numero:");
        scanf("%d" , &numero);
        int achou=0;
        
        for (int i=0 ; i<=posicao; i++){

            if (lista[i]== numero){
                printf("este numero ja esta na lista\n");
                achou=1;
                break;
            }
        }
        if(!achou){
            lista[posicao] = numero;
            posicao++;
        }

        }while(tamanho>posicao);
}
