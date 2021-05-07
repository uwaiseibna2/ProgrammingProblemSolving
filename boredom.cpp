#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int c,s(1),j;
    cin>>c;
    int a[c];
    map <int, int> mp;
    map <int ,int> mp1;
    for (int i=0;i<c ;i++)
    {
        cin>>a[i];
    }
    sort (a,a+c);
    for (int i =0; i<c;i++)
    {
        if(a[i+1]==a[i])
        {
             s++;
        }
        else
        {
            s=a[i]*s;
            mp.insert({a[i],s});
            s=1;

        }
        
    }
    pair <int, int> maxval = make_pair(0,0);
    for (auto itr=mp.begin();itr!=mp.end();++itr)
        {
            if (itr->second> maxval.second)
            {
                maxval= make_pair(itr->first,itr->second);
            }

        }
    for (auto itr=mp.begin();itr!=mp.end();itr++)
    {
        if((itr->first!= (maxval.first-1)) && itr->first!=(maxval.first+1))
        {
             mp1.insert({itr->first, itr->second});
             cout<<itr->first<< ' '<<itr->second<<endl;
        }
    }
    
}
