#include<bits/stdc++.h>

using namespace std;
int a[10];
int front=-1;
int rear=-1;
void enqueue(int data)
{
    if (front == -1 && rear == -1)
    {
        front++;
        a[front]=data;
        rear++;
    }
    else if (((rear+1)%10) != front)
    {
        rear= (rear+1)%10;
        a[rear]= data;
    }
    else 
    {
        cout<<"No memory";
    }
}

int dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout<< "Queue Empty, can't dequeue";
    }
    else if (front == rear)
    {
        cout<< a[front];
        front = -1;
        rear = -1;
    }
    else 
    {
        cout<< a[front];
        front = (front + 1) %10;
    }

}

int peek ()
{
    return a[rear];
}

main()
{
    for (int i=0;i<10;i++)
    {
        enqueue(i);
    }
    for (int i=0;i<11;i++)
    {
        dequeue();
    }
} 