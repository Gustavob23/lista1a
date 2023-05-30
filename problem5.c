#include<stdio.h>
	int main() {
	
	float a, b, c;
	
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	if( a>=b && b>=c ){
		printf("%.2f, %.2f, %.2f\n", c, b, a);
	return 0;
	}
		 else if( a>=b && c>=b && c<=a ){
			printf("%.2f, %.2f, %.2f\n", b, c, a);
	return 0;
	}
			else if( b>=a && a>=c ){
				printf("%.2f, %.2f, %.2f\n", c, a, b);
	return 0;
	}
				else if( b>=a && c>=a && c<=b ){
					printf("%.2f, %.2f, %.2f\n", a, c, b);
	return 0;
	}
					else if( c>=a && a>=b ){
						printf("%.2f, %.2f, %.2f\n", b, a, c);
	return 0;
	}
						else if( c>=a && b>=a && c>=b ) { 
							printf("%.2f,  %.2f, %.2f\n", a, b, c);
	return 0;
	}
	return 0;
	}
