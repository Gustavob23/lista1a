#include<stdio.h>

int main(){

	int bin, dec, resto, c;
	bin = 0;
	c = 1;
	scanf("%d", &dec);
	
	if (dec < 0 || dec > 255){
	printf("Numero invalido!\n");
	}
	else{
		while (dec != 0){ 
		
		resto = dec % 2;
		dec = dec / 2;
		bin = bin + resto * c;
		c = c * 10;
		}
			printf("%08d\n", bin);
	}
return 0;
}
