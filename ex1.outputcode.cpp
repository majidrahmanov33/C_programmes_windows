#include<stdio.h>
/*
Qaqa bu proqram bilirsen neyniyir? Evvelceden bir s=7 teyin edir
sonra 12'in bolenlerini tapir ve o s'in uzerine elave edir.Cavab 23 alinir
7 + 1 + 2 + 3 + 4 + 6 = 23 (heqiqeten de eledi)
*/
int main() {
	
	int num=12,s=7,i;
	
	for ( i = 1 ; i < num ; i++ )
	{
		if ( num % i == 0 )
		{
			s += i;
		}
		
	}
	printf("%d",s);
	
	return 0;
}
