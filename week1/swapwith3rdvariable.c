//Swapping 2 numbers with 3rd variable
#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter 2 numbers\n");
scanf("%d",&a);
scanf("%d",&b);
printf("Numbers before swapping %d %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("Numbers after swapping %d %d\n",a,b);

}
