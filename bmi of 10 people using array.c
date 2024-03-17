//bmi of 10 people using array
#include<stdio.h>
void main()
{
int wt[10],i,j,n;
float bmi,ht[10];
printf("Enter the number of people\n");
scanf("%d",&n);

for(i=1;i<n;i++)
{
printf("Enter the height(m) and weight(m) of person %d\n",i);
scanf("%f %d",&ht[i],&wt[i]);
bmi=(float)wt[i]/(ht[i]*ht[i]);
printf("BMI is %f\n",bmi);

if(bmi>=0 && bmi<10)
{
    printf("The BMI of person %d is less(under nourished)\n",i);
}
else if(bmi>=10 && bmi<20)
{
    printf("The BMI of person %d is good\n",i);
}
else
{
    printf("The BMI of person %d is high(obese)\n",i);
}

}
}


