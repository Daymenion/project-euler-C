#include<stdio.h> 
#include<math.h>
main() {
	long int i,j,counter;
	unsigned long long wanted;
	static int numbers[100000000];
	printf("Enter the number:   ");
	scanf("%llu",&wanted);
	for(i=2;i<=100000000;i++)
		numbers[i] = 1;
	for(i=2;i<=sqrt(100000000);i++){
		if(numbers[i]==1){
			for(j=i; i*j<=100000000;j++)
				numbers[i*j] = 0;
		}
	}
	for(i=2;i<=100000000;i++){
		if(numbers[i] == 1)
			counter++;
		if(counter==wanted)
			break;
	}
	printf("%ld",i);
}

