#include<stdio.h>

int main() {

	int ededs[] = {25,22,17,19,47,3,98,5,124,10};
	int num;
	
	printf("Sizin ededleriniz melumat bazasindadir.Muqayise edeceyiniz ededi daxil edin.\n");
	scanf("%d",&num);
	
	printf("Ededlerin arasinda verdiyiniz ededden boyuk olan ededler bunlardir:");
	for (int i=0 ; i < 10 ; i++ )
	{
		if ( ededs[i] > num ) {
			printf("%d,",ededs[i]);
		}
	}
	
	return 0;
}
