#include <stdio.h>
#include <math.h>
int sumdiv(int n);
main() {
	int i, j, sum = 0,x;
	printf("Enter the edge number: ");
	scanf("%d",&x);
	for (i = 2; i < x; i++) {
		j = sumdiv(i);
	    if (i != j && i == sumdiv(j)) // isterseniz i<d yapip sum += i +d; yapabiliriz
    		sum += i ;
	}
	printf("%d\n", sum);
}

int sumdiv(int n) {
	int sum= 1,i,a,hold = n;
	for (i = 2; i <= n; i++) {
    	a = 1;
    	while (n % i == 0) {
    		a++;
			n /= i;
		}
		sum *= (pow(i,a) - 1)/(i-1);
	}
	return sum - hold; //formul kendisini de hesaba kattigi icin sayinin kendisini cikariyorum
}
