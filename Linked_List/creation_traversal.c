#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *temp)
{
    while (temp != NULL)
    {
        printf("Element: %d\n", temp->data);
        temp = temp->next;
    }
}

// struct node* creatinglinkedlist(struct node *head, int nonodes){
//     int i=0;
//     struct node *newnode, *temp;
//     while(i<nonodes){
//         newnode = (struct node*)malloc(sizeof(struct node));
//         printf("Enter data: ");
//         scanf("%d", &newnode->data);
//         newnode->next=NULL;
//         if(head==NULL){
//             head=newnode;
//             temp=newnode;
//         }
//         else{
//             temp->next=newnode;
//             temp=newnode;
//         }
//         i++;
//     }
//     return head;
// }

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head = first;

    first->data = 7;
    first->next = second;

    second->data = 11;
    second->next = third;

    third->data = 33;
    third->next = NULL;

    linkedlisttraversal(head);

    // struct node*head, *newnode, *temp;
    // int nonodes = 0;
    // head = NULL;
    // printf("Enter no of nodes u wanna make: ");
    // scanf("%d",&nonodes);
    // printf("\n");
    // head = creatinglinkedlist(head, nonodes);
    // linkedlisttraversal(head);
    return 0;
}