#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};
Node *head;
Node *tail;
void insertatbegin(int data)
{
    Node *newnode= new Node();
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    
    if (head== NULL)
    {
        head = newnode;
        tail=head;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head = newnode;
}
void insertatend(int data)
{
    Node *newnode= new Node();
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    if (head == NULL)
    {
        head = newnode;
        tail=head;
        return;
    }
    tail->next= newnode;
    newnode->prev=tail;
    tail=newnode;
}
void print(bool rev)
{
    if (rev ==true)
    {
        Node *current =head;
        while (current != NULL)
        {
            cout<< current->data<<endl;
            current= current->next;
        }
        
    }
    else 
    {
        Node *current = tail;
        while (current != NULL)
        {
            cout<< current->data<<endl;
            current= current->prev;
        }
    }
}

main()
{
    head= NULL;
    for (int i=0;i<10;i++)
    {
        insertatend(i);
    }
    bool a =true;
    print(a);
}