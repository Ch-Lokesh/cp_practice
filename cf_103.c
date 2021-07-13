#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct List
{
    node *head;
    node *tail;
} List;

node *newElement(int n)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = n;
    temp->next = NULL;
    return temp;
}

void insertFront(List **list, int data)
{

    node *temp = newElement(data);
    if ((*list)->head == NULL)
    {
        (*list)->head = temp;
        (*list)->tail = temp;
    }
    else
    {
        temp->next = (*list)->head;
        (*list)->head = temp;
    }
    return;
}

void insertBack(List **list, int data)
{
    node *temp = newElement(data);
    if ((*list)->tail == NULL)
    {
        (*list)->head = temp;
        (*list)->tail = temp;
    }
    else
    {
        (*list)->tail->next = temp;
        (*list)->tail = temp;
    }
    return;
}

void display(List *list)
{
    node *temp = list->head;
    while (temp)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void display_prompt()
{
    printf("==============  INSTRUCTIONS ================\n");
    printf("Enter 1 to insert element at Front \n");
    printf("Enter 2 to inset element at Back \n");
    printf("Enter 3 to display all the elements front to back\n");
    printf("Enter 0 to stop the program\n\n\n\n");
}

int main()
{
    int inp;
    display_prompt();
    printf("Enter operaion ");
    scanf("%d", &inp);
    List *linkedList;

    while (1)
    {

        switch (inp)
        {
        case 1:
        {
            int data;
            printf("Enter element that you want to insert at Front : ");
            scanf("%d", &data);
            insertFront(&linkedList, data);
            break;
        }

        case 2:
        {
            int data;
            printf("Enter element that you want to insert at Back : ");
            scanf("%d", &data);
            insertBack(&linkedList, data);
            break;
        }

        case 3:
        {
            printf("Displaying elements \n");
            display(linkedList);
            break;
        }
        case 0:
        {
            return 0;
            break;
        }
        default:
        {
            printf("Please Enter valid input \n");
            display_prompt();
            break;
        }
        }
        printf("Enter operaion ");
        scanf("%d", &inp);
    }
}