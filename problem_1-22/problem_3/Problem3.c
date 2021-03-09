#include <stdio.h>
int checkprime(unsigned long long int number);
main() {
	int counter;
	unsigned long long int  i;
	unsigned long long int num = 600851475143; //This is such a big number that it exceed the int or long bits.
	 for(i =2;i<=num;i++){ // as u know, the bit can only have a value of 0 and 1. so there is 2 different way. and as u know bytes are 8 bits;
            counter = 0; //and int 4, long 8 bytes, so int 32, long is 64 bits. and i write number maximum 2^32 -1 [for adrees] in int and 2^64-1 in long. Half of theese negative, half of theese possitive.
            while(checkprime(i) == 1 && (num%i) == 0){ // so the biggest value 2.147.483.647 in long. it's funny against our number. Whatever, unsigned long long is;
                num = num/i;   // 64bits  2^64-1numbers	nonumber is negative [because of unsigned]. so	18.446.744.073.709.551.615 is the biggest number u can take or give in c. I think enough it.
                counter++; 
            }  //I want to show how much time this number exist
            if(counter>0){
                printf("\n%llu to the power %d",i,counter);
            }	
}
}
int checkprime(unsigned long long int number) { 
	int b,in=1;
	for(b=2;b<=number/2;b++) {
		if( (number%b)==0) {
		in=0;
		break;
		}
	}
	return in;
}
