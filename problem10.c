#include<stdio.h>

int main(){
	int a, b, c, a1, b1, c1;
	char x, y, z, A, B, C;

	scanf("%d %d %d\n", &a, &b, &c);
	scanf("%c%c%c", &x, &y, &z);

	if(a >b && b > c){
		a1 = c;
		b1 = b;
		c1 = a;	
	}
	else if(a > b && b < c && c > a){
		a1 = b;
		b1 = a;
		c1 = c;	
	}
	else if(a < b && b < c){
		a1 = a;
		b1 = b;
		c1 = c;	
	}
	else if(a < b && c > b && c < a){
		a1 = c;
		b1 = a;
		c1 = b;	
	}
	else if(a > c && c > b){
		a1 = b;
		b1 = c;
		c1 = a;	
	}
	else{
		a1 = a;
		b1 = c;
		c1 = b;
	}
		if(x == 'A' && y == 'B' && z == 'C'){
		printf("%d %d %d", a1, b1, c1);
		}
		else if(x == 'A' && y == 'C' && z == 'B'){
		printf("%d %d %d", a1, c1, b1);
		}
		else if(x == 'B' && y == 'A' && z == 'C'){
		printf("%d %d %d", b1, a1, c1);
		}
		else if(x == 'B' && y == 'C' && z == 'A'){
		printf("%d %d %d", b1, c1, a1);
		}
		else if(x == 'C' && y == 'A' && z == 'B'){
		printf("%d %d %d", c1, a1, b1);
		}
		else{
		printf("%d %d %d", c1, b1, a1);
		}
		
return 0;
}
	
