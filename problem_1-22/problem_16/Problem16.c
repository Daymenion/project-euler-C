#include <stdio.h>

main() {
	int numbers[99999] = {0};
	int i,j,n,a,po,w=0,carry=0,tempor=0, sum=0;
	numbers[0] = 1;
	printf("Enter the number adn power: ");
	scanf("%d \n %d",&n,&po);
	a = (n>9999) ? 5:(n>999) ? 4:(n>99) ? 3:(n>9) ? 2:1;
	for(j=0;j<po;j++) {
		
		for(i=0;i<=a*po;i++) {
			if(carry ==0 && numbers[i] == 0)
				;
			else {
			tempor = n*numbers[i] + carry;
			numbers[i] = (tempor >9) ? tempor%10:tempor;
			carry = tempor/10;
			}
		}
	}
	for(i=a*po;i>=0;i--) {
		if(numbers[i] != 0)
			w=1;
		if(w==1) {
			printf("%d",numbers[i]);
			sum+= numbers[i];
		}
	}
	printf("\n\n\n\n\t total= %d",sum);
	
	
}
