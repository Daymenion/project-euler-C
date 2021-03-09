#include <stdio.h> //method 1
#include <math.h>
double fact(int n,int k);
/*
main() {
	double i,j;
	i=fact(40,2);
	j=fact(20,2);
	printf("%lf\n",i/(j*j));
}
double fact(int n,int k) {
	return (n==k) ? n : n*fact(n-1,k);
}

//method 2

main() {
	unsigned long long int ways[51][51];
	int i,j,n;
	printf("Enter the number of ways (grid): ");
	scanf("%d",&n);
	for(i=0;i<=n;i++) {
		for(j=0;j<=n;j++) {
			ways[i][j] = 1;
			if(i>0 && j>0) 
				ways[i][j] = ways[i-1][j] + ways[i][j-1];
		}
	}
	printf("%llu",ways[n][n]);
}
*/
//method 3

main() {
	int numbers[99999] = {0} ;
	int i,j,n1,n2,k,a,carry = 0,tempor = 0,sum=0;
	numbers[0] = 1;
	printf("Enter the number and power u want to take:  ");
	scanf("%d \n %d",&n1,&n2);
	a = (n1>9999) ? 5:(n1>999) ? 4:(n1>99) ?  3:(n1>9) ? 2:1;
	for(j=2;j<=n1;j++) {
		carry = 0;
		for(i=0;i<a*n1;i++){
			tempor = j*numbers[i] + carry;
			numbers[i] = (tempor>9) ? tempor%10:tempor;
			carry = tempor /10;
		}
	}
	while(2) {
	for(j=2;j<=n2;j++) {
		carry = 0;
		for(i=a*n2;i<0;i++){
			k=0;
			numbers[i-k] = (numbers[i]>j) ?  numbers[i]%j : (numbers[i-1] + 10*numbers[i])>j ? (numbers[i-1] + 10*numbers[i])%j && ++k : ( numbers[i-2] + 10*numbers[i-1] + 100*numbers[i])%j && ++k && ++k ;
			numbers[i-k] = (numbers[i]>j) ?  floor(numbers[i]/j) : (numbers[i-1] + 10*numbers[i])>j ? floor((numbers[i-1] + 10*numbers[i])/j) && ++k : floor((numbers[i-2] + 10*numbers[i-1] + 100*numbers[i])/j) && ++k && ++k ;
			numbers[i] = (tempor>9) ? tempor%10:tempor;
			carry = tempor /10;
		}
	} 
	}
	for(i=a*po;i>=0;i--)
		sum += numbers[i];
	printf("\n%d",sum);
	
}
