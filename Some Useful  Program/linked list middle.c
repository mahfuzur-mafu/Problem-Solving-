#include <stdio.h>
#include <stdlib.h>

 typedef struct Node{
      int data;
      struct Node*next;


 }node;
 node *head=NULL;
node *temp=NULL;
int count = 1;

void insert()
{
    int p;

    scanf("%d",&p);
    node *newnode = (node*)malloc(sizeof(node));
    printf("\n\nEnter value : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(p<count)
    {
        if(p==1)
        {
            newnode->next = head;
            head = newnode;
        }
        else if(p>1)
        {
            int c=1;
            node *temp = head;
            while(c<p-1)
            {
                c++;
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            c=0;
        }
    }
    else
    {

        node *temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

}


void create()
{
     node *newnode=(node*)malloc(sizeof(node));
         scanf("%d",&newnode->data);
         newnode->next=NULL;
         if(head==NULL)
         {
             head=newnode;
         }
         else

           {


               temp=head;
             while(temp->next!=NULL)
             {
                 temp=temp->next;
             }
             temp->next=newnode;
           }

}

 void display()
 {

     //count = 1;
    temp = head;

        while(temp!=NULL)
        {
            printf(" %d ",temp->data);

            temp = temp->next;
            count++;
        }

 }

 int main()
 {
     int i;
     int n;
     printf("How many data:\n");
     scanf("%d",&n);
     printf("Enter Data : \n");

     for(i=0;i<n;i++)
     {
        create();

     }
     printf("Data : ");

     display();

     int m;
     printf("\nHow Many change you want : \n");
     scanf("%d",&m);
     for(i=0;i<m;i++)
     {
         printf("\nEnter the %d Position : ",i+1);
         insert();
     }
     printf("After changing data : \n");

     display();
 }


