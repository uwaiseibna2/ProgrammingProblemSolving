#include<bits/stdc++.h>

using namespace std;

int *rev(int *a, int size)
{
    int *b =new int[size];

    for(int i=0;i<size;i++)
    {
        b[i]=a[i];
    }
    return b;
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
    int *ptr= rev(a,size);
    for (int i=0;i<size;i++)
    {
        cout<<ptr[i]<<endl;
    }
    delete[] ptr;
}