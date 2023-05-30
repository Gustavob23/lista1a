#include<stdio.h>

int main(){

int num,dezM, uniM, cen, dez, uni, x;

	scanf("%d", &num);
	
	if(num < -100000 || num > 100000){
	printf("NUMERO INVALIDO");
	return 0;
	}
	if( num < 0){
	num = num * -1;
	}
	
	dezM = num / 10000;
	uniM = (num % 10000) / 1000;
	cen = (num % 1000) / 100;
	dez = (num % 100) / 10;
	uni = num % 10;
	
	
	if(num > 0 && num < 10){
		printf("PALINDROMO");
	}	
	else if(num >= 10000 && num <= 99999){
	
		if(uni == dezM && uniM == dez){
			printf("PALINDROMO\n");
		}
		else{ 
			printf("NAO PALINDROMO\n");
		}
	}
	else if(num < 10000 && num >= 1000){
		if(uniM == uni && cen == dez){
			printf("PALINDROMO\n");
		}
		else{
			printf("NAO PALINDROMO\n");
		}	
	}
	else if(num >= 100 && num < 1000){
		if(cen == uni){
			printf("PALINDROMO\n");
		}	
		else{
		printf("NAO PALINDROMO\n");
		}
	}
	else if(num >= 10 && num < 100){
		if(dez == uni){
			printf("PALINDROMO\n");
		}
		else{
		printf("NAO PALINDROMO\n");
		}	
	}	
	else{
	printf("NAO PALINDROMO\n");
	}
return 0;
}

