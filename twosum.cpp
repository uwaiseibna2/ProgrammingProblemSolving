#include<bits/stdc++.h>
using namespace std;

void twosum(int *a,int size, int sum)
{
    unordered_map<int,int> ump;
    for(int i=0;i<size;i++)
    {
        ump[a[i]]++;
    }
    for(int i=0;i<size;i++)
    {
        int diff=sum-a[i];
        if(ump.find(diff)!= ump.end()&& ump[sum-diff]==1)
        {
            cout<<a[i]<<" "<<diff<<endl;
            ump[diff]++;
        }
    }

}
int main()
{
    int a[]= {2,3,4,5,6,1,0};
   

    int size1= sizeof(a)/sizeof(a[0]);
    

    int sum =7;

    twosum(a,size1, sum);

}