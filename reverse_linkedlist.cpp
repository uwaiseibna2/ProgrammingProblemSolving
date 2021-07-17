#include<bits/stdc++.h>


using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void push(int data)
{
    Node *temp = new Node();
    Node *current;
    temp->data= data;
    temp->next=NULL;
    if(head == NULL)
    {  
        head = temp;
        current=head;
    }
    else
    {
        current->next=temp;
        current=temp;
    }
}
void print()
{
    
    Node *printitr= head;
    while (printitr!=NULL)
    {
        cout<<printitr->data<<endl;
        printitr=printitr->next;
    }
}
void reversell()
{
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;
    while(current != NULL)
    {
        next= current->next;
        current->next=prev;
        prev = current;
        current= next;    
    }
    head = prev;
}
void insertatbegin(int data)
{
    Node *temp = new Node();
    temp->data= data;
    if(head== NULL)
    {
        head =temp;
        head->next=NULL;
    }
    else
    {
    temp->next= head;
    head=temp;
    }
}
main()
{
    head = NULL;
    for(int i=0;i<5;i++)
    {
        insertatbegin(i);
    }
    print();
    reversell();
    print();
}
