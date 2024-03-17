//swap without 3rd variable
#include<stdio.h>
void main()
{
int a,b;
printf("Enter 2 numbers\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Numbers before swapping %d %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("Numbers after swapping %d %d\n",a,b);
}
