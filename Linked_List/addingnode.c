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

struct node* creatinglinkedlist(struct node *head, int nonodes){
    int i=0;
    struct node *newnode, *temp;
    while(i<nonodes){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        i++;
    }
    return head;
}

// struct node* addnodeatstarting(struct node *head, int data){
//     struct node *newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->data = data;
//     newnode->next = head;
//     head = newnode;
//     return head;
// }

// struct node* addnodeatindex(struct node *head, int data, int index){
//     struct node *newnode = (struct node*)malloc(sizeof(struct node));
//     struct node*temp = head;
//     newnode->data = data;
//     int i=0;
//     while(i<index-1){
//         temp =  temp->next;
//         i++;
//     }
//     newnode->next = temp->next;
//     temp->next = newnode;
//     return head;
// }

struct node* addnodeatend(struct node *head, int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    struct node*temp =head;
    newnode->data = data;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    newnode->next = NULL;
    temp->next = newnode;
    return head;
}

int main()
{
    // struct node *head;
    // struct node *first;
    // struct node *second;
    // struct node *third;

    // first = (struct node *)malloc(sizeof(struct node));
    // second = (struct node *)malloc(sizeof(struct node));
    // third = (struct node *)malloc(sizeof(struct node));

    // head = first;

    // first->data = 7;
    // first->next = second;

    // second->data = 11;
    // second->next = third;

    // third->data = 33;
    // third->next = NULL;

    // linkedlisttraversal(head);

    struct node*head, *newnode, *temp;
    int nonodes = 0;
    head = NULL;
    printf("Enter no of nodes u wanna make: ");
    scanf("%d",&nonodes);
    printf("\n");
    head = creatinglinkedlist(head, nonodes);
    linkedlisttraversal(head);

    head = addnodeatend(head, 65);
    linkedlisttraversal(head);
    return 0;
}

