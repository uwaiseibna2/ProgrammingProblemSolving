#include<bits/stdc++.h>
#include<iostream>

using namespace std;

main()
{
    int i,n;
    cin>>i;
    while (i--)
    {
        cin >>n;
        int p=1;
        vector <int> a;
        while (n!=0)
        {
             if(n%10!= 0)
             {
                 a.push_back(n%10*p);
                 p*=10;
                 n=n/10;
             }
             else 
             {
                 n=n/10;
                 p*=10;
             }

        }
        cout<<a.size()<< " ";
        for (auto s: a)
        {
            cout<<s<<" ";
        }
    }
}