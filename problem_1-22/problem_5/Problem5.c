#include<stdio.h>
main() {
	unsigned long long int number;
	int ex,i,a,in=1;
	printf("Enter the number:  ");
	scanf("%llu",&number);
	i = number/2 +1;
	ex= number;
	number *= (number/2 +1);
	a= number;
	while(in==1) {
		if(number%i == 0 && i<(ex-1))
			i++;
		else if (number%i == 0 && i==(ex -1))
			in=0;
		else {
			i=ex/2 +1;
			number += a;
		}
	}
	printf("%llu",number);
	
}
