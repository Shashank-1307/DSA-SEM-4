// do while loop
#include<stdio.h>
void main()
{
int i=1,n;
    printf("Enter end number\n ");
    scanf(" %d",&n);
do
    {
        printf("Do While loop on %d \n",i);
        i++;
    }
while(i<=n);
}
