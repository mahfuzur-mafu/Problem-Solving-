#include<bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
} node;

node *head = NULL;
int cnt=1;

void display();
void insertEnd();
void insertFront();
void delpos();
void delval();
void insertnodeP();
void choise_menu();
void searchele();

///Main function

int main()
{
    int type;
    printf("Insert node\n1]End\n2]Front\nChoice: ");
    scanf("%d",&type);

    if(type==1)
    {
        insertEnd();
    }
    else if(type==2)
    {
        insertFront();
    }
    else
    {
        printf("Invalid keyword\n");
        return 0;
    }
    choise_menu();

    return 0;
}


///choice menu
void choise_menu()
{
    int cho;
    printf("\n1]Insert a new Node in a given position.");
    printf("\n2]search element from node. ");
    printf("\n3]Delete by value\n4]Delete by Position\n");
    printf("[0]key for exit...\nchoice : ");
    scanf("%d",&cho);

    if(cho==1)
        insertnodeP();
    else if(cho==2)
        searchele();
    else if(cho==3)
        delval();
    else if(cho==4)
        delpos();
    else if(cho==0)
        exit(0);
    else
    {
        printf("Invalid keyword\n");
        choise_menu();
    }
}

///Display node

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
            printf("%d -> ",element->data);
            element = element->next;
        }
        printf("NULL\n\nTotal Nodes : %d\n",cnt-1);
    }
    choise_menu();
}

///Node insert at end

void insertEnd()
{
    int i,siz;
    printf("Input the number of nodes: ");
    scanf("%d",&siz);
    for(i=0; i<siz; i++)
    {
        node * newdata = (node*)malloc(sizeof(node));
        node * current;
        printf("Input data for node %d : ",i+1);
        scanf("%d",&newdata->data);
        newdata->next=NULL;
        if(head==NULL)
        {
            head = newdata;
            current = newdata;
        }
        else
        {
            current->next = newdata;
            current = current->next;
        }
    }
    printf("\nAfter insert at end\n");
    display();
    choise_menu();
}

///Node insert at position

void insertnodeP()
{
    int pos;
    printf("\nInsert a new Node in a given position...\nEnter Position: ");
    scanf("%d",&pos);

    node *posdata = (node*)malloc(sizeof(node));
    printf("\nEnter data : ");
    scanf("%d",&posdata->data);
    posdata->next = NULL;

    if(pos<cnt)
    {
        if(pos==1)
        {
            posdata->next = head;
            head = posdata;
        }
        else if(pos>1)
        {
            node *tmp = head;
            int count2 = 1;
            while(count2<pos-1)
            {
                count2++;
                tmp=tmp->next;
            }
            posdata->next = tmp->next;
            tmp->next = posdata;
        }
    }
    else
    {
        printf("\nError Invalid index\nThis node is inserted at last\n");
        node* temp = head;
        while(temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = posdata;
    }
    printf("\nAfter Insert at position \n");
    display();
    choise_menu();
}


///Node insert at font

void insertFront()
{
    int i,siz;
    printf("Input the number of nodes: ");
    scanf("%d",&siz);
    node *temp = head;
    for(i=0; i<siz; i++)
    {
        node *newdata = (node*)malloc(sizeof(node));
        printf("Input data for node %d : ",i+1);
        scanf("%d",&newdata->data);
        newdata->next=NULL;
        if(head==NULL)
        {
            head = newdata;
        }
        else
        {
            newdata->next = head;
            head = newdata;

        }
    }
    printf("After Add data at front\n");
    display();
    choise_menu();
}


///delete by valu

void delval()
{

    int del_Data;
    printf("\nWhich data want to delete : ");
    scanf("%d",&del_Data);

    node *temp = head;
    if(del_Data == head->data)
    {
        head = head -> next;
        free(temp);

    }
    else
    {
        node *previous = NULL;
        while(temp != NULL && temp->data != del_Data)
        {
            previous = temp;
            temp = temp -> next;
        }
        if(temp == NULL)
        {
            printf("\n%d Does not Exist in the List\n\n ",del_Data);
        }
        else
        {
            previous -> next = temp -> next;
            free(temp);
        }

    }
    display();
    choise_menu();

}

///delete by position

void delpos()
{
    int delpos;
    printf("\nEnter Position Number : ");
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
            int c = 1;
            node * temp = head;
            while(c<delpos-1)
            {
                c++;
                temp=temp->next;
            }
            temp->next = temp->next->next;
        }
    }
    printf("\nAfter Delete : \n");
    display();
    choise_menu();
}

///Search Function

void searchele()
{
    int src,c=0;
    printf("\nsearch element from node\nwhich element you want to search :");
    scanf("%d",&src);
    node *temp =head;
    bool flag = false;
    while(temp!=NULL)
    {
        c++;
        if(temp->data == src)
        {
            printf("%d is Found position %d\n",src,c);
            flag = true;
        }
        temp = temp->next;
    }
    if(flag == false)
        printf("%d is not Found in the List\n",src);

    choise_menu();

}
