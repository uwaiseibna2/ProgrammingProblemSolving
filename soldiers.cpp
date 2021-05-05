#include<bits/stdc++.h>
#include<iostream>

using namespace std;

main()
{
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    for(int i=1;i<c+1;i++)
    {
        sum=sum+i*a;
    }
    if(sum<b)
    {
        cout<<"0"<<endl;
    }
    else {
    cout<<sum-b<<endl;
}
}
