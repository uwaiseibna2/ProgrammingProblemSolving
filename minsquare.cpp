#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int c, l, h,k;
    cin>>c;
    while (c--)
    {
        cin >>l>>h;
        int f=max(l,h);
        if ((ceil(sqrt(l*h*2)))>= (f*2))
        {
            k= (ceil(sqrt(l*h*2)));
            k=k*k;
        }
        else 
        {
            k=f*2;
            k=k*k;
        }
        cout<<k<<endl;
    }
}