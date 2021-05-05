#include<bits/stdc++.h>
using namespace std;
main()
{
    int p;
    int sum=0;
    cin>>p;
    string n;
    cin>>n;
    for(int i=1;i<n.size();i++)
    {
        if(n[i]==n[i-1])
        {
            sum=sum+1;
        }
    }
    cout<<sum<<endl;
    return 0;
}
