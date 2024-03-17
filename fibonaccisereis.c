//Fibonacci series
#include<stdio.h>
void main()
{
int a=0,b=1,i,n,temp;
printf("Enter n\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    printf("%d ",a);
    temp=a+b;
    a=b;
    b=temp;
}

}
