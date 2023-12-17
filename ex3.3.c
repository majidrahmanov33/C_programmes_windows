
#include<stdio.h>

int main(void) {

int n,i,j,k;

printf("Quadruped? (Choose 1 or 2)\n1.Breastfeeding\t2.Talk\n");
scanf("%d",&n);

switch (n) {
case 1:
printf("1.Mammal\t2.Crocodile\n");
scanf("%d",&i);
switch (i) {
	case 1:
	printf("Mammal.\n");
	break;
	case 2:
	printf("Crocodile.\n");
	break;
	
}
break;

	case 2:
	printf("1.Human\t2.Wings?\n");
	scanf("%d",&j);
	switch (j) {
		case 1:
		printf("Human\n");
		break;
	
		case 2:
		printf("1.Bird\t2.Fish\n");
		scanf("%d",&k);
		switch (k) {
			case 1:
			printf("Bird!!!\n");
			break;

			case 2:
			printf("Fish!\n");
			break;
			
		}

		break;
	}
break;

} 

return 0;

}


