//else if ladder
#include<stdio.h>
void main()
{
int n;
printf("Enter number(1-3)\n");
scanf("%d",&n);
if(n==1)
{
    printf("Hello\n");
}
else if(n==2)
{
    printf("Good morning\n");
}
else if(n==3)
{
    printf("Hello world");

}
else
{
    printf("Bye");
}

}
