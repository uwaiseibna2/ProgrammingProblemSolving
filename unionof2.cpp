#include<bits/stdc++.h>

using namespace std;


int unionof2arrays(int a[], int b[], int n, int m)

{
    unordered_set <int> set;
    for(int i =0;i<n;i++)
    {
        set.insert(a[i]);
    }
    for(int j=0;j<m;j++)
    {
        set.insert(b[j]);
    }

    return set.size();
    
}

int main()
{
    int a[]= {1,4,3,25,6,7};
    int b[]= {2,4,5,3,8,9,0};
    int n(6),m(7);
    cout<<unionof2arrays(a,b,n,m);
}