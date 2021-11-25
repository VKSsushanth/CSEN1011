#include <stdio.h>
int main()
{
	int p,r,t;
	printf("priciple = ");
	scanf("%d" , &p);
	
	printf("time period = ");
	scanf("%d" , &t);
	
	printf("rate of intersest = ");
	scanf("%d" , &r);
	
	printf("simple interest = %d", (p*t*r/100) );
	
	printf("comppound interest= = %d", (p*(1+r/100)*t));
	
	return 0;
 } 
