
#include <stdio.h>
#include <stdlib.h>
int cnt=1;
 typedef struct Node{
      int data;
      struct Node*next;


 }node;
 node *head=NULL;
node *temp=NULL;

void create()
{
     node*newnode=(node*)malloc(sizeof(node));
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

void deleteNode()
{
   int delpos;
    printf("\nEnter Position Number to det : ");
    scanf("%d",&delpos);
    if(delpos>cnt)
    {
        printf("Invalid Position\n");
    }
    else
    {
        if(delpos==1)
        {
            head = head->next;
        }
        else
        {
            int c = 0;
            node *prev , *temp = head;
            while(temp!=NULL && c<delpos-1)
            {
                c++;
                prev = temp;
                temp=temp->next;
            }
            if(temp==NULL)
            {
                printf("\nPosition Invalid\n");
            }
            else{
                prev->next = temp->next;
            }
        }
    }
    printf("\nAfter Delete : \n");
    display();
}

 void display()
 {


    cnt = 1;
    if(head == NULL)
    {
        printf("\nNo data found!\n");
        exit(0);
    }
    else
    {
        node *element = head;
        printf("\nList : \n");
        while(element!=NULL)
        {
            cnt++;
            printf("%d ",element->data);
            element = element->next;
        }
        printf("\n\nTotal Nodes : %d\n",cnt-1);
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

    /* int m;
     printf("How Many data you want to add in end : \n");
     scanf("%d",&m);
     printf("Enter new data : \n");
     for(i=0;i<m;i++)
     {
         create();
     } */

     display();
    deleteNode();

 }

