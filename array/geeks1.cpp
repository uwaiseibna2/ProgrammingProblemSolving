#include<bits/stdc++.h>
using namespace std;


bool check(int*a, int i,int x)
{
    for (int j=i;j<=(i+2);j++)
    {
        if (a[j]== x)
        {
            return true;
        }
    }
}
bool brek(int *a, int size, int k,int x)
{
    int b[size];
    for (int i=1;i<=size; i++)
    {
        b[i]=a[i];
        if (i%k ==0 || i==size)
        {
            bool f= check(b,i-2,x);
            if (f== false)
            {
                return false;
            }
        }
    }
    return true;
}


main()
{
    int size, k ,x;
    cin>>size>>k>>x;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    bool s = brek(a,size,k,x);
    if(s== true)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"False";
    }
}