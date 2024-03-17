//greater or smaller
#include<stdio.h>
void main()
{
int a,b;
printf("Enter 2 numbers\n");
scanf("%d",&a);
scanf("%d",&b);

if(a>b)
{
    printf("%d is greater than %d\n",a,b);
}
else
{
    printf("%d is smaller than %d\n",a,b);
}
}
