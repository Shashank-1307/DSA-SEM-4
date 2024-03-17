//even or odd
#include<stdio.h>
void main()
{
int a,b;
printf("Enter number\n");
scanf("%d",&a);

b=a%2;

if(b==0)
{
    printf("%d is even\n",a);
}
else if(b==1)
{
 printf("%d is odd\n",a);

}
}
