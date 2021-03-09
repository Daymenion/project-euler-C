#include <stdio.h>
#define N 99999
main() {
	int numbers[N] = {0};
	int i,n,carry = 0,w=0,tempor = 0,sum=0;
	numbers[0] = 1;
	printf("Enter the number that u want to take fact:  ");
	scanf("%d",&n);
	for(;n>1;n--) {
		carry = 0;
		for(i=0;i<N;i++){
			if(carry ==0 && numbers[i] == 0)
				;
			else {
			tempor = n*numbers[i] + carry;
			numbers[i] = (tempor >9) ? tempor%10:tempor;
			carry = tempor/10;
			}
		}
	}
	for(i=N-1;i>=0;i--) {
		if(numbers[i] != 0) 
			w=1;
		if(w==1) {
			printf("%d",numbers[i]);
			sum += numbers[i];
		}
	}
	printf("\n\t sum = %d",sum);	
}
