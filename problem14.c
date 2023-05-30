#include<stdio.h>
	int main(){
	
	int i;
	float a, b, c;
	
	scanf("%d", &i);
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	if(i == 1){
		
		if( a>=b && b>=c ){
        		printf("%.2f %.2f %.2f\n", c, b, a);
    			}
         	else if( a>=b && c>=b && c<=a ){
            		printf("%.2f %.2f %.2f\n", b, c, a);
    		}
            	else if( b>=a && a>=c ){
              		printf("%.2f %.2f %.2f\n", c, a, b);
    		}
                else if( b>=a && c>=a && c<=b ){
                   	printf("%.2f %.2f %.2f\n", a, c, b);
    		}
                else if( c>=a && a>=b ){
                        printf("%.2f %.2f %.2f\n", b, a, c);
    		}
                else if( c>=a && b>=a && c>=b ) { 
                   	printf("%.2f  %.2f %.2f\n", a, b, c);
    		}
    	}
    	else if(i == 2){
    		
    		if( a>=b && b>=c ){
        		printf("%.2f %.2f %.2f\n", a, b, c);
    		}
         	else if( a>=b && c>=b && c<=a ){
            		printf("%.2f %.2f %.2f\n", a, c, b);
    		}
            	else if( b>=a && a>=c ){
                	printf("%.2f %.2f %.2f\n", b, a, c);
    		}
                else if( b>=a && c>=a && c<=b ){
                    	printf("%.2f %.2f %.2f\n", b, c, a);
    		}
                else if( c>=a && a>=b ){
                        printf("%.2f %.2f %.2f\n", c, a, b);
    		}
                else if( c>=a && b>=a && c>=b ) { 
                printf("%.2f  %.2f %.2f\n", c, b, a);
                }
	}
	else if(i == 3)
	
		if( a>=b && b>=c ){
        		printf("%.2f %.2f %.2f\n", b, a,c);
    		}
         	else if( a>=b && c>=b && c<=a ){
            		printf("%.2f %.2f %.2f\n", c, a, b);  
    		}
        	else if( b>=a && a>=c ){
                	printf("%.2f %.2f %.2f\n", a, b, c);
    		}
                else if( b>=a && c>=a && c<=b ){
                	printf("%.2f %.2f %.2f\n", c, b, a);
   		}
                else if( c>=a && a>=b ){
                	printf("%.2f %.2f %.2f\n", a, c, b);
    		}
                else if( c>=a && b>=a && c>=b ) { 
                	printf("%.2f  %.2f %.2f\n", b, c, a);
      }
return 0;
}                      				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
                            				
    	
