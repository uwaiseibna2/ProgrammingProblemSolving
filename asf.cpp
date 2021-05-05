#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int c;
    double a,b;
    cin>>c;
    while (c--)
    {
        cin >>a>>b;
        if(a>b)
        {
            cout<<(int)ceil((a-b)/10)<<endl;
        }
        else
        {
            cout<<(int)ceil((b-a)/10)<<endl;
        }
    }
}