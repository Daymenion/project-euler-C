#include <stdio.h>
int fibonacci(int limited);
main() {
	int limited;
	printf("Enter the maximum values which does not exceed 4 million:  ");
	scanf("%d",&limited);
	if(limited > 4000000) {
		printf("I warned you, the last 10 seconds before earth is destroyed. Run!");
		return 0;
	}
	printf("%d",fibonacci(limited));
	
	
	
}
int fibonacci(int limited) {
	int a1=1,a2=2,b,i,sum=2;
	for(i=1;i<limited;i++){
		b= a1 +a2;
		if(b >4000000)
			break;
		else if(b%2==0)
			sum += b; //  sum =sum+b;
		a1=a2;
		a2=b;
	}
	return sum;
}
