#include<bits/stdc++.h>

using namespace std;
int top;
int a[10];
void push(int data)
{
    top++;
    a[top] = data;
}
void pop()
{
    top--;
}



main()
{
    
    top = -1;

    for (int i=1;i<100;i *=5)
    {
        push(i);
    }
    pop();

    cout<<a[top]<<endl;
    cout<<sizeof(a);
    
}