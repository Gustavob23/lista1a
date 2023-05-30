#include<stdio.h>
#include<math.h>
 
int main(){
    int a, b, c, ab, abc;
    float x, x1, x2, delta;
    double delta1;
    
    scanf("%d %d %d", &a, &b, &c);
    
    delta = (b * b) - (4 * a * c);
    delta1 = sqrt(delta);
    x1 = (-b + delta1) / (2 * a);
    x2 = (-b - delta1) / (2 * a);
    ab = a + b;
    abc = a + b + c;
    
    if( delta < 0){
        printf("POSICOES IMAGINARIAS\n");
    return 0;
    }
    else{
        printf("POSICOES: X1=%.2f e X2=%.2f", x1, x2);
    }
        if(x1 < -5 || x1 > 5 || x2 < -5 || x2 > 5){
            printf(" (FORA DO EXPERIMENTO)");
            if(abc % 3 != 0){
                printf("\n");    
            }
        }
            if(abc % 3 == 0){
                printf("\nFATO1: DESAPARECIDA");
            }
                if( c < ab && c % 2 == 0){
                    printf("\nFATO2: ORIGEM\n");
                }
                    
return 0;
}
    
	
