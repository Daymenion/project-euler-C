#include <stdio.h>
#include <math.h>
main() {
	unsigned long long int sum =0;
	static int numbers[100000000];
	int i,limiting,j;
	printf("Enter the limiting:   ");
	scanf("%d",&limiting);
	for(i=0;i<limiting; i++) 
		numbers[i] = 1;
	for(i=2;i<= sqrt(limiting); i++) {
		if(numbers[i] == 1) {
			for(j=i; j*i <= limiting; j++) 
				numbers [ i*j] = 0 ;
		}
	}
	for(i=2; i<=limiting; i++) {
		if(numbers[i] == 1)
			sum += i;
	}
	printf("%llu",sum);
}

