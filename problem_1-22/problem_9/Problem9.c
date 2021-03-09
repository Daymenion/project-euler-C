#include<stdio.h>
#include <math.h>
int main() {
	int a,b,c,sum;
	printf("enter the sum:   ");
	scanf("%d",&sum);
	for(a=1; a<sum/2; a++) {
		for(b=1; b<sum/3; b++) {
			c = sum - a- b; // c + a+ b= sum
			if(pow(c,2) == (pow(b,2) + pow(a,2))) {
				printf("\n %d   \t %d \t %d",a,b,c);
				printf("\n %llu ",a*b*c);
			}
			
		}
	}	
}
