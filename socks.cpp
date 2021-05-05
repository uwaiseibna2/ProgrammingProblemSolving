#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int n,c,d;
    cin >>n>>c;
    if (n>0 && c>0)
    {
        int a=min(n,c);
        int b=max(n,c);
        if((b-a)%2 == 0)
        {
              d= (b-a)/2;
        }
        else
        {
             d = (b-a-1)/2;
        }
        cout<<a<<" "<<d<<endl;
    }
    else 
    {
        int e= min(n,c);
        if(e%2 == 0)
        {
              d= e/2;
        }
        else
        {
             d = (e-1)/2;
        }
        cout<<0<< " "<<d<<endl;
    }
}