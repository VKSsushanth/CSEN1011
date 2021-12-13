#include <stdio.h>

int main()
{
    int i, n, m, sum=0;

    printf("Enter 1st number: ");
    scanf("%d", &m);
    printf("Enter 2nd number: ");
    scanf("%d", &n);


    if(m%2!=0)
    {
        m++;
    }

    for(i=m; i<=n; i+=2)
    {
    
        sum += i;
    }

    printf("%d",sum);

    return 0;
}
