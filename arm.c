#include<stdio.h>
int main()
{
	int n,n1,r,sum;
	printf("enter the three digit number : ");

scanf("%d",&n);
n1=n;
sum=0;
while(n!=0)
{
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
	
}
if (n1==sum)
 {
 	printf("the number is armstrong");
 	
 }
 else
 {
 	printf("it is not armstrong");
 	
 }
}
