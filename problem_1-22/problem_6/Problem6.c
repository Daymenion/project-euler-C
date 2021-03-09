#include<stdio.h>
#include<math.h>
main() {
	int i,number;
	unsigned long long result1=0, result2=0;
	printf("Enter the number:   ");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
		result1 += pow(i,2);
	for(i=1;i<=number;i++)
		result2 += i;
	result2 = pow(result2,2);
	printf("%llu",result2 - result1);
}
