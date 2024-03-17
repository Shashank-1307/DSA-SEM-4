//basic structure
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct student
 {
    char name[20];
    int age;
    struct student* next;
} *NODE;

NODE getnode()
{
    NODE new_node;
    new_node = (NODE)malloc(sizeof(struct student));
    if (new_node == NULL)
    {
        printf("Memory allocation not successful\n");
        exit(0);
    }
    new_node->next = NULL;
    return new_node;
}

NODE read_details()
{
    NODE temp;
    temp = getnode();
    printf("Enter the student name: ");
    scanf(" %[^\n]s", temp->name);
    printf("Enter the student age: ");
    scanf("%d", &(temp->age));
    return temp;
}
