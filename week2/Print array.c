//print 1D array
#include<stdio.h>
void readarray(int n);
void display(int n);
void main()
{
  int n;
  printf("Enter the number of elements in the array:\n");
  scanf("%d",&n);
  readarray(n);
  display(n);
}
void readarray(int n)
{
    int arr[10];
    printf("Enter the elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display(int n)
{
    int arr[10];
    printf("The array elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
