#include <stdio.h>
#include <stdlib.h>

 typedef struct Node{
      int data;
      struct Node*next;


 }node;
 node *head=NULL;
node *temp=NULL;

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

               newnode->next=head;

               head=newnode;
               /* temp=head;
             while(temp->next!=NULL)
             {
                 temp=temp->next;
             }
             temp->next=newnode; */
           }

}

 void display()
 {

     temp=head;
     while(temp!=NULL)
     {
         printf("%d ",temp->data);
         temp=temp->next;
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

     int m;
     printf("How Many data you want to add in front : \n");
     scanf("%d",&m);
     printf("Enter new data : \n");
     for(i=0;i<m;i++)
     {
         create();
     }
     printf("After Adding data : \n");

     display();
 }

