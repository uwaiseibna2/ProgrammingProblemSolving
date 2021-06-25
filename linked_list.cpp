#include<bits/stdc++.h>
#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head;


void insertatbegin(int data)
{
    Node *new_node= new Node();
    new_node->data=data;
    if (head == NULL)
    {
        new_node->next=NULL;
        head = new_node;
    }
    else 
    {
        new_node->next=head;
        head=new_node;
    }
}
void push(int data)
{
    Node *new_node= new Node();
    new_node->data=data;
    Node *tail;
    if (head == NULL)
    {
        new_node->next=NULL;
        head= new_node;
        tail=head;
    }
    else
    {
        tail->next= new_node;
        tail= new_node;        
    }

}
void insertatpos(int data, int pos)
{
    Node *new_node= new Node();
    new_node->data=data;
    Node *tail=head;
    if (head==NULL)
    {
        new_node->next=head;
        head= new_node;
    }
    else if (pos ==2 || pos ==1)
    {
        new_node->next= head->next;
        head->next=new_node;
    }
    else 
    {
        for (int i=0;i<pos-2;i++)
        {
            tail = tail->next;
        }
        new_node->next=tail->next;
        tail->next=new_node;
    }
    
}
void deleteat(Node *head,int pos)
{
    Node *tail = head;
    if (head == NULL)
    {
        cout<<"N/A";
    }
    else 
    {
        for (int i=0;i<pos-2;i++)
        {
            tail = tail->next;
        }
        tail->next =tail->next->next;        
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
    Node *current =head;
    Node *prev = NULL;
    Node *next = NULL;
    while (current!= NULL)
    {
        next=current->next;
        current->next=prev;
        prev= current;
        current = next;
    }
    head= prev;
}

main()
{
    head=NULL;
    for (int i=0;i<12;i++)
    {
        push(i);
    }
    reversell();
    
    print();
}