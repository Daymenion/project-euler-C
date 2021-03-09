#include <stdio.h>
unsigned long long int progress( unsigned long long number);
main() {
	unsigned long long int i,a,max=0,edge,answer=0;
	printf("Enter the edge point:  ");
	scanf("%llu",&edge);
	for(i=2;i<edge;i++) {
		if((a = progress(i)) > max) {
			max = a;
			answer = i;
		}
	}
  	printf("%llu",answer);
  
}
unsigned long long int progress( unsigned long long number) {
	int counter = 0;
/*	while(number != 1) {
		counter++;
		number = (number%2 == 0) ? number/2:3*number + 1;
	}
*/
	do{
		counter++;
		number = number%2 == 0 ? number/2 : 3*number+1;
	}while(number!=1);
	
	return counter; 
}
