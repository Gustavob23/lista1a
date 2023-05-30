#include<stdio.h>

int main(){

	float r, p;
	int q, e, t;
 
	scanf("%f %d %d %d", &r, &q, &e, &t);

	p = r / q;
	
	if(p <= 1405.5 && e == 2 && t == 4){
		 printf("ALUNO COTISTA (L1)\n");
	}
	else if(p <= 1405.5 && e == 2 && t != 4){
		printf("ALUNO COTISTA (L2)\n");
	}
	else if(p > 1405.5 && e == 2 && t == 4){
		printf("ALUNO COTISTA (L3)\n");
	}
	else if(p > 1405.5 && e == 2 && t != 4){
		printf("ALUNO COTISTA (L4)\n");
	}
	else{
		printf("ALUNO NAO COTISTA\n");
	}
return 0;
}
	
	
















