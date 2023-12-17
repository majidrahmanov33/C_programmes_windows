#include<stdio.h> 

 

int main() { 

 

int ededler[10]; 

int i,j; 

 

for ( i=0 ; i < 10 ; i++ ) 

{ 

printf("Enter Your %d th value.\n",i+1); 

scanf("%d", &ededler[i]); 

} 

printf("Primes are: "); 
 for ( i=0 ; i < 10 ; i++ ) 
 { 
 for ( j=2 ; j < i/2 ; j++ ) 
 { 
     if ( ededler[i] % j == 0 ) 
     { 
        printf("%d,",ededler[i]); 
     } 
 } 
 } 
 printf("\n\n Not Primes are: "); 
   for ( i=0 ; i < 10 ; i++ ) 
   { 
      for ( j=2 ; j < i/2 ; j++ ) 
      { 
      if ( ededler[i] % j != 0 ) 
      { 
      printf("%d,",ededler[i]); 
      } 
      }
    } 
     
  return 0; 

} 
