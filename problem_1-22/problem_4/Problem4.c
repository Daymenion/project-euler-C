#include <stdio.h>
unsigned long long int palindromic(unsigned long long int num);
main() {
	unsigned long long int a,b,i,j,maximum=0;
	printf("Enter the 2 maximum number which has include just nine:  ");
	scanf("%llu",&i);
	scanf("%llu",&j);
	for(a=i;a>= (i/10 +1); a--) {
	for(b=j;b>= (j/10 +1); b--) {
		if(palindromic(a*b) >maximum) {
			maximum = a*b;	
			printf("\n%llu  \t %llu\n",a,b);
		}
	}	
	}
	printf("%llu",maximum);
}

unsigned long long int palindromic(unsigned long long int num) {
	unsigned long long int ex= num, reverse = 0;
	while(ex>0) {
		reverse = reverse*10 + (ex%10); // num=121  0*10 + 1 = 1 = reverse 1*10 + 2 = 12 =reverse  12*10 + 1 =121=reverse 
		ex /= 10;
	}
	return (reverse == num)? num : 0;
}
//return (reverse ==number)? number : 0;
