#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int ret(int a)
{
    int r=0;
    for (int i=2;i<a+1;i++)
    {
        if(a%i ==0)
        {
            r++;
            if(r >=2)
            {
                return 1;
            }
        }
        
       
    }
}
main()
{
    int n,p;
    cin >>n;
    for (int i = 4; i<n; i++)
    {
        p = n-i;
        int s = ret(i);
        int t =ret(p);
        if((s == 1) && (t ==1))
        {
            cout << s << " "<< t;
            break;
        }
    }
}