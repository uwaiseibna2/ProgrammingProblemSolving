#include<bits/stdc++.h>

using namespace std;

void rotate(int *a, int size)
{
    int i=0;
    int temp,temp1;
    temp=a[i];
    int j=0;
    while(true)
    {
        
        i=(i+size+1)%size;
        temp1=a[i];
        a[i]=temp;
        temp=temp1;
        j++;
        if (j==size)
        {
            break;
        }
        
    }
}
main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    rotate(a,size);
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }
}