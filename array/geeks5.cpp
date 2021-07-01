#include<bits/stdc++.h>
using namespace std;

int count(int *a,int size)
{
    int count =0;
    map <int, int > mp;
    for(int i=0;i<size;i++)
    {
        mp[a[i]]++;       
    }
    for (auto i:mp)
    {
        cout<<"Number:"<<i.first<<" Frequency: "<<i.second<<endl;
    }
}

main()
{

    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    count(a,size); 


}