#include<conio.h>
#include<stdio.h>
#include<math.h>

	int main () {
		
		float a;
		int n=1;
		int fc=0;
		int sc=0;
		float sum=0;
		float avg=0;
		float fie=0;
		
		printf("This programme will calculate the average of class and FIE.PLEASE DON'T ENTER THE GRADE GREATER THAN 20 or LESS THAN 0.Thank you\n");
		
		
		while ( n <= 36 ) {
			
			printf("Enter the %d grade:",n);
 			scanf("%f",&a);
			sum=sum+a;
				if ( a >= 10 ) {
					fc++;
				}
			     else if ( a < 10 ) {
			     	sc++;
			    }
			    else {
			    	printf("ALERT! INCORRECT INPUT\n");
				}
				
				n++;
				
				
		}
		
		avg=sum/36;
		fie=(fc/36)*100;
		printf("Passed:%d\n",fc);
		printf("NOT Passed:%d\n",sc);
		printf("Total Average is %.2f\n",avg);
		printf("Faydali ish emsali is %.2f",fie);
		
		
	    getch ();
	    return 0;
			
			    
				
				
			
	}
	
