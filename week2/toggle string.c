//toggle character of a string
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the string: ");
    scanf("%d", &n);

    char str[100];
    printf("Enter the elements of the string:\n");
    scanf("%s",str);
    toggleCase(str,n);

    printf("String after toggling case: %s\n",str);
    return 0;
}

void toggleCase(char str[], int n)
{
    for (int i = 0; i < n; i++)
        {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }
}

