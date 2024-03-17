//print 2D array
#include<stdio.h>
void readarray(int n, int m);
void display(int n, int m);
void main()
{
  int n,m;
  printf("Enter the number of rows in the array:\n");
  scanf("%d",&n);
  printf("Enter the number of columns in the array:\n");
  scanf("%d",&m);
  readarray(n,m);
  display(n,m);
}
void readarray(int n,int m)
{
    int arr[10][10];
    printf("Enter the elements in the array:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
}
void display(int n,int m)
{
    int arr[10][10];
    printf("The array elements are:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
