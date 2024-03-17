//else if ladder for speed
#include<stdio.h>
void main()
{
int n;
printf("Enter speed\n");
scanf("%d",&n);
if(n>=0 && n<10)
{
    printf("Very slow\n");
}
else if(n>=10 && n<25)
{
    printf("Slow\n");
}
else if(n>=25 && n<60)
{
    printf("Fast");

}
else
{
    printf("Very fast");
}

}
