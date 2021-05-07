#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int n,m,a,b;
    cin >>n>>m>>a>>b;
    float j = float (b)/float(m);
    int f=a*n;
    int k = j*100;
    j= float(k)/100;
    if (j<=a && n>=m)
    {
       if (n%m==0)
        {
                cout<<(n/m)*b; 
        }
        else if (b>=a)
        {
            int k = n%m;
            n=n-k;
            cout<< (((n/m)*b )+(k*a));
        }
        else if ( b<a)
        {
            int k = n%m;
            n=n-k;
            cout<< (((n/m)*b)+b);
        }
    }
    if (n>m && j>a)
    {
        cout<<f;
    }
    else if (n<m)
    {
        cout<<min(f,b);
    }
}