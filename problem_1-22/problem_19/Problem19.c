#include <stdio.h>
main () {
	int d,m,y,day=2,sunday=0,i,total;
	for(y=1901; y<=2000; y++) {
		for(m=1; m<=12; m++) {
			if(day==0)
				sunday++;
			if(m==2) {
				if((y%4==0 && y%100!=0) || (y%400==0))
					total= 29;
				else {
					total= 28;
					}
				}
			else if(m==4 || m==6 || m==9 || m==11)
				total= 30;
			else 
				total = 31;
			day = (total + day)%7;
		}	

	}
	printf("%d",sunday);
}	
