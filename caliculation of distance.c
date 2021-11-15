#include <stdio.h>
 int main() {
 int u, t, a;
 
 printf("inital velocity = ");
 scanf("%d" , &u);  

 printf("time period = ");
 scanf("%d" , &t);

 printf("acceleration = ");
 scanf("%d" , &a);
 
 printf("distance = %d /n" , (u*t + (1/2)*a*(t*t) ) );
 
 return 0;
 }