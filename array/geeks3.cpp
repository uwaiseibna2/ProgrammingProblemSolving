#include<bits/stdc++.h>
using namespace std;
int *reverse(int *a,int size)
{
    int i=0;int j=size-1; int temp;
    while(i<j)
    {
        temp =a[i];
        a[i]=a[j];
        a[j]= temp;
        i++;j--;
    }
    return a;
}
main()
{
    int size;
    cin>>size;
    int a[size];
    for (int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int *ptr =reverse(a,size);
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i];
    }
}

