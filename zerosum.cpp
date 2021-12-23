#include<bits/stdc++.h>

using namespace std;

int zerosum(int a[], int size)
{
    unordered_set<int> s;
    int sum=0;
    s.insert(sum); //if an array has a subarray with zero sum at the begining
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            continue; //don't execute following instructions for this iteration if a[i] is equal to 0
        }
        sum+=a[i];
        if(s.find(sum)!=s.end())
        {
            cout<<"zero sum exists!";
            return 0;
        }
        s.insert(sum);
        if(i==size-1)
        {
            cout<<"non-existent";
        }
    }
}

int main()
{
    int array[]= {2,3,-4,-1,10,-12,11,-9,15};
    int size= sizeof(array)/sizeof(array[0]);
    zerosum(array,size);
}

