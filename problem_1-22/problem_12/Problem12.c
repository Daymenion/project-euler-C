#include <stdio.h>
#include <math.h>
int div1(unsigned long long int number);
int div2(unsigned long long int number);
main() {
	unsigned long long int number =1;
	int i=1,n;
	printf("Enter the number:  ");
	scanf("%d",&n);
	while(div2(number) < n) {
		number += ++i; // ++i   i++
	}
	printf("%llu",number);
}
int div1(unsigned long long int number) {
	int i, counter, conc= 1;
	for(i=2; i<= number; i++) {
		counter= 0 ;
		while(number%i==0) {
			counter++;
			number /= i;
		}
		conc *= counter + 1;
		if(number == 1)
			break;
	}
	return conc;
}
int div2(unsigned long long int number) {
	int i, counter = 0;
	for(i=1;i<= sqrt(number); i++) {
		if (number%i==0)
			counter += 1;
	}
	return (number / sqrt(number) == sqrt(number)) ? 2*counter-1 : 2*counter;
}





