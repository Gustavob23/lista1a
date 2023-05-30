#include<stdio.h>
	int main(){
	
	float det, a, b, c, d;
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	
	det=a*d-b*c;
	
	printf("O VALOR DO DETERMINANTE E = %.2f\n", det);
	
	return 0;
	}
