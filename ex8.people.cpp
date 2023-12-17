#include<stdio.h>
#define AP 9845784

int main() {
	
	int dif,years,ans,p;
	printf("If now it's 2018 year and the amount of people is 9,845,784..");
	
	//First we need to find amount of the people increasing every year
	p = (AP*1.35);
	p /= 100;
	// Now we must find the difference of these 2 amounts of people at the different years
	dif = 10500000 - AP;
	
	// Now we have to divide it by p, as u see above it's amount of the people increasing every year
		years = dif / p;
		
	// Now this years variable means how many years it will take to reach that amount.
	// If we sum this years variable with our current year, we will get the ans
	
		ans = 2018 + years;
		
		printf("\n\n\n Then it will take %d years to reach 10,5m People",years);
		printf("\n And that year is probably %d",ans);
		
	return 0;
}
