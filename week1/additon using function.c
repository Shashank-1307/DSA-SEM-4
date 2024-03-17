//addition using functions
#include<stdio.h>
int sum(int a, int b);

int main()
{
    int num1,num2,result;
    printf("Enter num1 and num2\n");
    scanf("%d %d",&num1,&num2)
    result = sum(num1, num2);
    printf("Sum is %d\n", result);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
