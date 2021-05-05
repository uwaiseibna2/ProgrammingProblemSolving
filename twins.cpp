#include<bits/stdc++.h>
#include<iostream>

using namespace std;
main()
{
    int n,ans=0,cnt=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort (a,a+n);
    int sum=0;
    for(int i=0;i<n ;i++)
    {
        sum+=a[i];
    }
    sum=sum/2;
    while (ans<=sum)
    {
        cnt++;
        ans+=a[n-cnt];
    }
    cout<<cnt<<endl;
}
