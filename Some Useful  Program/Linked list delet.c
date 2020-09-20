#include <stdio.h>

struct Node *createLinkedList(int arr[], int size);
void Print(struct Node *head);
struct Node *deleteLinkedList(struct Node *head, int data);
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
    struct Node *newHead = deleteLinkedList(head,668);
    Print(newHead);

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
struct Node *deleteLinkedList(struct Node *head, int data)
{


    struct Node *dummyHead = (struct Node *)malloc(sizeof(struct Node));
    dummyHead->next = head;
    struct Node *temp = dummyHead;
    while(temp->next != NULL)
    {
        if(temp->next->data == data)
        {
            //delete logic
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }

    }
    return dummyHead->next;

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

