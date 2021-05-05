#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int p, r;
    cin >>p>>r;
    for (int i=1;i<10;i++)
    {
        if (((p*i)%10==r )|| ((p*i)%10 == 0)) 
        {
            cout<<i<<endl;
            break;
        }
    }
}