#include<bits/stdc++.h>

using namespace std;

int* sort012(int a[], int size)
{
    int zeros(0),ones(0),twos(0);
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            zeros++;
        }
        else if(a[i]==1)
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }
    ones+=zeros;
    twos+=ones;
    for(int i=0;i<zeros;i++)
    {
        a[i]=0;
    }
    for(int i =zeros;i<ones;i++)
    {
        a[i]=1;
    }
    for(int i=ones;i<twos;i++)
    {
        a[i]=2;
    }
    return a;
}

int main()
{
    int a[]= {1,2,2,1,2,1,0,0,0,1};
    int size= sizeof(a)/sizeof(a[0]);
    int* b = sort012(a,size);
    for(int i=0;i<size;i++)
    {
        cout<<b[i];
    }
    cout<<endl;
}