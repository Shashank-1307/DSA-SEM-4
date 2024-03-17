#include<stdio.h>

void readarray(int n, int m, int arr1[10][10], int arr2[10][10]);
void add(int n, int m, int arr1[10][10], int arr2[10][10], int result[10][10]);
void display(int n, int m, int result[10][10]);

int main()
{
  int n, m, arr1[10][10], arr2[10][10], result[10][10];
  printf("Enter the number of rows in the array:\n");
  scanf("%d", &n);
  printf("Enter the number of columns in the array:\n");
  scanf("%d", &m);
  readarray(n, m, arr1, arr2);
  add(n, m, arr1, arr2, result);
  display(n, m, result);
  return 0;
}

void readarray(int n, int m, int arr1[10][10], int arr2[10][10])
{
    printf("Enter the elements in the array 1:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements in the array 2:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
}

void add(int n, int m, int arr1[10][10], int arr2[10][10], int result[10][10])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void display(int n, int m, int result[10][10])
{
    printf("The sum of array elements are: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
