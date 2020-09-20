#include <stdio.h>

struct Node *createLinkedList(int arr[], int size);
struct Node *insertAtBeginning(struct Node *head, int data);
struct Node *insertAtEnd(struct Node *head, int data);
void Print(struct Node *head);
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int a[] = {10,20,30,55, 66, 77, 88, 668};
    struct Node *head;
    head = createLinkedList(a,8);
    Print(head);
    insertAtEnd(head, 156);
    //insertAtBeginning(head, 156);
}
void Print(struct Node *head)
{

    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct  Node *current = head;

    while(current->next != NULL)
    {
        current = current->next;
    }
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    current->next=temp;
    Print(head);
}
struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;
    struct Node *newHead = head;
    struct Node *current = newHead;
    newHead = temp;
    Print(newHead);

}

struct Node *createLinkedList(int arr[], int size)
{
    struct Node *head = NULL, *current = NULL, *temp = NULL;
    int i;
    for(i=0; i<size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

