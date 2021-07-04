#include<bits/stdc++.h>

using namespace std;

main()
{
    int size,target;
    cin>>size>>target;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int> hmap;
    vector<int> indices;
    for(int i=0; i<size;++i)
    {
    int diff = target - a[i];
    if (hmap.find(diff)==hmap.end())
    {
        hmap.insert(make_pair(a[i],i));
    }
    else
    {
        indices.push_back(hmap[diff]);
        indices.push_back(i);
    }
    }

    for (auto i:indices)
    {
        cout<<indices[i];
    }
}