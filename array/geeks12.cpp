#include<bits/stdc++.h>

using namespace std;

void duplicate(int *a, int size)
{
    unordered_map<int,int> mp;
    for(int i=0;i<size;i++)
    {
        mp[a[i]]++;
    }
    for(auto i:mp)
    {
        if(i.second>1)
        {
            cout<<i.first<<endl;
        }
    }
}

void alternate(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        int b = a[i]%size;
        a[b]+=size;
    }
    for(int i=0;i<size;i++)
    {
        if (a[i]>=(size*2))
        {
            cout<<i<<endl;
        }
    }
}







main()
{
    int a[]= {1,2,3,4,4,5,1,6,6,7,8,8,7,9};
    int size = sizeof(a)/sizeof(a[0]);


    alternate(a,size);
}