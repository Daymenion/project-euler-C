#include <stdio.h>

main() {
	printf("%d",(int)(29/10));
	int units_d[10] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 }; //0 dan 9 a
	int first_tens[10] = { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 }; //10 dan 19 a
	int tens_d[10] = { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 }; //20 den 100 e
	int hundred = 7,and = 3, thousand = 8, i, j,a,x;
	s:
	printf("\n\nEnter the thousand digits number u want to calc (less or equal 10): ");
	scanf("%d",&x);
	unsigned long long int sum=0;
	for(i=0;i<100;i++) {//0 dan 99a
		if(i>=0 && i<10)
			sum += units_d[i];
		else if(i>=10 && i<20)
			sum += first_tens[i-10];
		else 
			sum += tens_d[i/10] + units_d[i%10];
	}
	for(i=1 ;i<10;i++) {//100den 999
		sum += units_d[i] + hundred;
		for(j=1;j<100;j++) {//0 dan 99a
			if(j>=0 && j<10)
				sum += units_d[i] + hundred + and + units_d[j];
			else if(j>=10 && j<20)
				sum += units_d[i] + hundred + and + first_tens[j-10];
			else 
				sum += units_d[i] + hundred + and + tens_d[j/10] + units_d[j%10];
		}
	}
	for(a=1; a<x ; a++) { //1000den x000 -1 e
		for(i=0;i<100;i++) {//0 dan 99a
			if(i>=0 && i<10)
				sum += units_d[a] +thousand + units_d[i];
			else if(i>=10 && i<20)
				sum += units_d[a] +thousand + first_tens[i-10];
			else 
				sum += units_d[a] +thousand + tens_d[i/10] + units_d[i%10];
		}
		for(i=1 ;i<10;i++) {//100den 999
			sum += units_d[a] +thousand + units_d[i] + hundred;
			for(j=1;j<100;j++) {//0 dan 99a
				if(j>=0 && j<10)
					sum += units_d[a] +thousand + units_d[i] + hundred + and + units_d[j];
				else if(j>=10 && j<20)
					sum += units_d[a] +thousand + units_d[i] + hundred + and + first_tens[j-10];
				else 
					sum += units_d[a] +thousand + units_d[i] + hundred + and + tens_d[j/10] + units_d[j%10];
			}
		}
	}
	sum += (x==10) ? 3+thousand:units_d[x] + thousand;
	
	printf("\n%llu\n",sum); 
	l:
	printf("\n\n Do u want to calc one more time another number? (yes=1 no=2 )\n");
	switch(getch()) {
		case '1':
			goto s;
		case '2':
			break;
		default:
			printf("Wrong choice idiot!/n");
			goto l;
	}	
}

