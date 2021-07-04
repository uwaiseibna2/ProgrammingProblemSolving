#include<bits/stdc++.h>
using namespace std;

void commonwithinthreearrays(int *a,int *b, int *c, int size1, int size2, int size3)
{
    unordered_map<int , int > mp;
    for(int i = 0;i<size1;i++)
    {
        if (a[i]==a[i+1])
        {
            continue;
        }
        mp[a[i]]++;
    }
    for(int i=0;i<size2;i++)
    {
        if(b[i]==b[i+1])
        {
            continue;
        }
        mp[b[i]]++;
    }
    for(int i=0;i<size3;i++)
    {
        if(c[i]==c[i+1])
        {
            continue;
        }
        mp[c[i]]++;
    }

    for(auto i:mp)
    {
        if(i.second==3)
        cout<<i.first<<endl;
    }
}

main()
{
    int a[]= {1,2,2,3,3,3,4,5,8};
    int b[]= {6,6,8,1,1,9,9,10,10};
    int c[]={20,20,40,8,8,1,1};

    int size1= sizeof(a)/sizeof(a[0]);
    int size2=sizeof(b)/sizeof(b[0]);
    int size3= sizeof(c)/sizeof(c[0]);
    commonwithinthreearrays(a,b,c,size1,size2,size3);
}

