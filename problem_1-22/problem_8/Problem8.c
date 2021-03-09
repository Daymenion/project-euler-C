#include<stdio.h>
#include<string.h>
main() {
	char str[99999];
	unsigned long long number= 1, maximum =0;
	int i, step=0, n;
	printf("\n enter the number:   ");
	scanf("%d",&n);
	fflush(stdin);
	gets(str);
	while(step < strlen(str) - n) {
		for(i=0;i<n;i++)
			number *= str[i + step] - '0' ;
		if(number>maximum)
			maximum = number;
		number=1;
		step++;	
	}
	
	printf("%llu",maximum);
	

} 

