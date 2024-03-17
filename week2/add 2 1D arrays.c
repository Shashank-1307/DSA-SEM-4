//add 2 1D array elements
#include<stdio.h>
void readarray(int n, int arr1[], int arr2[]);
void add(int n, int arr1[], int arr2[], int result[]);
void display(int n, int result[]);

void main()
{
  int n,arr1[10],arr2[10],result[10];
  printf("Enter the number of elements in the array 1:\n");
  scanf("%d",&n);
  readarray(n, arr1, arr2);
  add(n, arr1, arr2, result);
  display(n, result);
}
void readarray(int n, int arr1[], int arr2[])
{
    printf("Enter the elements in the array 1:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements in the array2 :\n");
    for(int j=0; j<n; j++)
    {
        scanf("%d",&arr2[j]);
    }
}
void add(int n, int arr1[], int arr2[], int result[])
{
    for(int i=0; i<n; i++)
    {
        result[i]=arr1[i]+arr2[i];
    }
    return result[10];
}
void display(int n, int result[])
{
    printf("The sum of array elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",result[i]);
    }
}
