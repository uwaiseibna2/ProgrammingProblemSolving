#include<bits/stdc++.h>
using namespace std;

main()
{
    int x,y,n,c;
    cin >>c;
    while (c--)
    {    
    cin >>x>>y>>n;
    for (int k= n; k >=0;k--)
    {
        if (k%x==y)
        {
            cout<<k<<endl;
            break;
        }
    }
    }
}