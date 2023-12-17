#include<stdio.h>

int id(int x) {
	if ( x == 21724178 )
	{
		printf("Ayda Yusif..Agzinnan cox pis iy gelib hemishe\n");
	}

	else if ( x == 21724195 )
	{
		printf("Cox kele ushagdi bele ozu.Fehmindi Adi\n");
	}

	else if ( x == 21724253 )
	{
		printf("Yeni Meherrem deyende agla Genishlenme gelir\tancaq ve ancaq");
	}

	else
	{
		printf("Bu ne ID di? Cehennem ol\n");
	}

	}

	int main() {

		int x;
		
		printf("ID Reqemini Daxil Edin.\n");
		scanf("%d",&x);
		id(x);

		return 0;

	}

