#include<stdio.h>
#include<math.h>

int main(){
	
	float x1, x2, a, b, c;
	double delta;
	
	scanf("%f %f %f", &a, &b, &c);
	
	delta = b*b - 4*a*c;
	
		if( delta < 0 ){
			printf("RAIZES IMAGINARIAS\n");
		}
		
		else if( delta == 0 ){
			x1=(-b)/(2 * a);
			printf("RAIZ UNICA\n");
			printf("X1 = %.2f\n", x1);	
		}
		
		else {		
			x1=(-b + sqrt(delta))/(2 * a);
			x2=(-b - sqrt(delta))/(2 * a);
				
			if( x1 > x2 ){
				printf("RAIZES DISTINTAS\n");
				printf("X1 = %.2f\n", x2);
				printf("X2 = %.2f\n", x1);
			}
				
			else {
				printf("RAIZES DISTINTAS\n");
				printf("X1 = %.2f\n", x1);
				printf("X2 = %.2f\n", x2);
			}			
		}	
	return 0;
}
