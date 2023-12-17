#include<stdio.h>
#include<math.h>
/*
Bu proqram ona gorediki iki dene eded verir bize. a ve b. A B den boyukdurse
B ni kokaltini hesablasin eger deyilse a*b hasilini kokaltina salib hesablasin
eger o da deyilse a*a+b ifadesini hesablasin.B a dan boyuk oldugu ucun
A*B hasilini kokalta salir ve sqrt(25*4)=10.00
*/

int main() {
	
	int a=4,b=25;
	float c;
	
	if ( a > b ) c=sqrt(b);
	else if (b > a ) c=sqrt(a*b);
	else c=(a*a)+b;
	
	printf("%.2f",c);
	
	return 0;
}

