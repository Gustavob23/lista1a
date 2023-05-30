#include <stdio.h>
   #include <stdlib.h>

    void ordena();    
    int vet[5];

    int main(){
    int i;
        for (i=0; i<4; i++){    
           
            scanf("%d", &vet);
        }
        ordena(); //chama a função para ordenar
        for (i=0; i<4; i++){    
            printf("%d \n", vet);
        }
        printf("\n");
        system("pause");
    }  //fim main

    void ordena(){         
        int i, j, aux;
            for( i=0; i<4; i++ ){
                 for( j=i+1; j<4; j++ ){
                      if( vet > vet[j] ){
                          aux = vet;
                          vet = vet[j];
                          vet[j] = aux;
                      }
                 }
            }
            
    }
