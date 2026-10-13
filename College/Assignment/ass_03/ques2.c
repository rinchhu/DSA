#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char itemname[50];
    int price;
    struct node *next;
};

void linkedlisttraversal(struct node *head)
{
    while (head != NULL)
    {
        printf("itemname = %s\n", head->itemname);
        printf("price = %d\n", head->price);
        head = head->next;
    }
}

void adddata(struct node *n, char name[], int p)
{
    strcpy(n->itemname, name);
    n->price = p;
    n->next = NULL;
}

void insertdatalinkedlist(struct node *head, int position, char n[], int pri)
{
    struct node *temp;
    temp = head;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    for (int i = 1; i < position && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Invalid\n");
        free(newnode);
        return;
    }

    strcpy(newnode->itemname, n);
    newnode->price = pri;
    newnode->next = temp->next;
    temp->next = newnode;
}

void deleteitem(struct node *head, char name[])
{
    struct node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (strcmp(temp->next->itemname, name) == 0)
        {
            struct node *del = temp->next;
            temp->next = del->next;
            free(del);
            return;
        }
        else
        {
            temp = temp->next;
        }
    }
    printf("Item not found\n");
}

int main()
{
    struct node *head;
    int i;
    head = NULL;
    printf("Enter no of nodes you wanna enter\n");
    scanf("%d", &i);

    while (i)
    {
        struct node *temp;
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));

        char n[50];
        int p;
        printf("Enter name and price \n");
        scanf("%49s", n);
        scanf("%d", &p);
        adddata(newnode, n, p);

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        i--;
    }
    printf("PRINT LINKED LIST \n");
    linkedlisttraversal(head);
    printf("\n");
    insertdatalinkedlist(head, 2, "watch2342", 5000);
    printf("PRINT LINKED LIST \n");
    linkedlisttraversal(head);
    printf("\n");
    deleteitem(head, "watch2342");
    printf("PRINT LINKED LIST \n");
    linkedlisttraversal(head);
    printf("\n");

    while (head != NULL)
    {
        struct node *temp;
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}