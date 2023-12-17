#include<stdio.h>

	
	void remz() {
		printf("Azerbaycanin Dovlet Remzleri onun\n Gerbi , Bayragi , Manati Ve Dovlet Himnidir.\n");
	}

	void pay() { 
	printf("Azerbaycan Respublikasinin Paytaxti Baki Sheheridir.\n");

	}

	void city() {
		printf("Ele sual verirsinizki bele lap gulmeli men ne bilim axi!!,Yegin ki Shamaxi,Gence,Sumqayit olar daaa..\n");

	}

	int error(int x) {
		printf("ERROR %d,Yanlish Reqem Daxil Etdiniz.\n",x);
	}

	int main() {

		int a;

		printf("Salam axshaminiz xeyir\nAzerbaycan haqqinda melumat burosudur.\n");
		printf("Dovlet Remzlerimiz ucun 1\nPaytaxt ucun 2\nBoyuk Sheherler ucun 3 basin\nDiqqet! Yanlish reqem daxil etmeyin!");

		scanf("%d",&a);

		switch(a) {

			case 1:
			remz();
			break;

			case 2:
			pay();
			break;

			case 3:
			city();
			break;

			default:
			error(404);
		}

		return 0;
	}
