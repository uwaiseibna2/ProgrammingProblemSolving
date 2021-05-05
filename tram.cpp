#include<bits/stdc++.h>
#include<iostream>

using namespace std;
main()
{
    int n,q,ans=0;
    cin >>n;

    int a[n], b[n],p[n];
    cin>>a[0]>>b[0];
    p[0] =b[0];
    if(n!=2)
    {
        for(int i=1; i<n ; i++)
        {
            cin>>a[i]>> b[i];
        }
        for(int i=1; i<n-1; i++)
        {
            p[i]=(p[i-1]-a[i])+b[i];
            if(p[i-1]>p[i])
            {
                q=p[i-1];
            }
            else
            {
                q=p[i];
            }
            if(q>ans)
            {
                ans=q;
            }

        }
        cout<<ans<<endl;
    }
    else
    {
       cin>>a[1]>>b[1];
       cout<<b[0];
    }

}
