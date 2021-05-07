#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
main()
{
    int c,sum(0),k;
    vector <int> v;
    cin>>c;
    while (c--)
    {
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    int s= v.back();
    for (auto i:v)
    {
        sum= sum+ (s-i);
    }
    cout<<sum<<endl;
}