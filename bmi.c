//bmi calculator
#include<stdio.h>
void main()
{
float bmi;
float h,w;
printf("Enter height(m) and weight(kg)\n");
scanf("%f %f",&h,&w);
bmi=(float)w/(h*h);;
printf("BMI is %f",bmi);
}
