#include<stdio.h>
	int main(){
	
	float delta; 
	int b, a, c;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	delta=b*b-4*a*c;
	
	printf("O VALOR DE DELTA E = %.2f\n", delta);
	
	return 0;
	}
