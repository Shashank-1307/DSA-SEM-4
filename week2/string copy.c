//string copy
#include <stdio.h>
#include <string.h>

int main() {
    char source[50], destination[50];
    printf("Enter a string: ");
    scanf("%s", source);
    copy(destination, source);
    printf("Source String: %s\n", source);
    printf("Copied String: %s\n", destination);
    return 0;
}
void copy(char destination[],char source[])
{
    strcpy(destination, source);
}
