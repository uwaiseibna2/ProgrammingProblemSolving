#include<bits/stdc++.h>
using namespace std;
main()
{
    string n;
    int sum=0;
    cin>>n;
    for(int i=0;i<n.size();i++){
        if(n[i]!='+')
        sum++;
        }
    sort(n.begin(),n.end());
    for(int j=sum-1;j<n.size();j++)
    {
        cout<<n[j];
        if(j!=(n.size()-1))
            cout<<"+";
    }
    return 0;
}
