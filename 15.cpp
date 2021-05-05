#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int sum=0;
    cin>>n;
    sort(n.begin(),n.end());
    for(int i=1;i<n.size();i++)
    {
        if(n[i]!=n[i-1])
        {
            sum=sum+1;
        }
    }
    if((sum+1)%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
