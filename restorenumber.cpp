#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int a[4];
    cin>>a[1]>>a[2]>>a[3]>>a[0];
    sort(a,a+4);
    cout<<a[3]-a[1]<< " "<< a[3]-a[2]<< " "<< a[3]-a[0]<<endl;
   
}