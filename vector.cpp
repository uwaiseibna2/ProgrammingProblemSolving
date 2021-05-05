#include <bits/stdc++.h>
  
using namespace std;
  
int main()
{
    vector<int> v;
  
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
    v.emplace(v.begin(),15);
    cout<<v[0]<<" "<<v.capacity();
    v.shrink_to_fit();
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[v.size()-2];
}