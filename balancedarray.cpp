#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int c, n;
    cin>>c;
    while (c--)
    {
        cin>>n;
        if (((n/2)%2) != 0)
        {
            cout<<"NO"<<endl;
        }
        if(((n/2)%2)==0)
        {
            cout<<"YES"<<endl;
    		for(int i=1;i<=n/2;i++)
            cout<<i*2<<' ';
		    for(int i=1;i<n/2;i++)
            cout<<i*2-1<<' ';
		cout<<n+n/2-1<<'\n';
        }
    }

}