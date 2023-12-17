#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
	int n,cekim,gonderim,elave,id;
	int pul=2000;
	printf("Kartdaki pulunuzun miqdari hesablanir..");
	printf("Negd olaraq %d $ movcuddur.",pul);
	printf("1-Pulun miqdari\t2-Pul cekimi\t3-Pul elavesi\t4-Pul gonderimi\t5-Karti qaytar");
	scanf("%d",&n);
	
	switch(n) {
		
		case 1: 
		printf("Sizin hesabda %d $ movcuddur.",pul);
		break;
		
		case 2:
			printf("Cekmek istediyiniz pulun miqdarini daxil edin:");
			scanf("%d",&cekim);
			if ( cekim > pul ) {
				printf("XETA! Sizin hesabda kifayet qeder mebleg yoxdur.");
			}
			
			else {
				
				pul -= cekim;
				printf("Hesabinizda qalan mebleg %d $'dir",pul);
			}
			break;
		case 3:
			print("Elave etmek istediyiniz meblegi daxil edin:");
			scanf("%d",elave);
				pul += elave;
			printf("Hesabinizda yeni mebleg %d $'dir",pul);
			break;
		case 4:
			printf("Alicinin Bank ID'sini daxil edin:");
			scanf("%d",id);
			printf("Gondermek istediyiniz meblegi daxil edin:");
			scanf("%d",&gonderim);
			if ( gonderim > pul ) {
				printf("XETA! Sizin hesabda kifayet qeder mebleg yoxdur.");
			}
			
			else {
				
				pul -= gonderim;
				printf("Gonderildi.Hesabinizda qalan mebleg %d $'dir",pul);
			}
			break;
		case 5:
			printf("Kartiniz geri qaytarilir.");
		
		default:
			printf("Sehv emeliyyat.Tekrar yoxlayin!");
			break;
	}	
	
	getch ();
	return 0;
}
