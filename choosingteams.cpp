#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int c, k,d,f(0);
    cin>>c>>k;
    while (c--)
    {
        cin >>d;
        if (d<= (5-k))
        {
            f++;
        }
    }
    cout<<f/3<<endl;
}