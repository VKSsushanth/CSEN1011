#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main()
{
	
int h,m,s;

for(h=0;h<24;h++) {
	
for(m=0;m<60;m++) {

for(s=0;s<60;s++) {

printf("%.2d:%.2d:%.2d", h,m,s);
fflush(stdout);
sleep(1);

printf("\b\b\b\b\b\b\b\b\b\b");
printf("\a\a\a");

}

}

}

}

