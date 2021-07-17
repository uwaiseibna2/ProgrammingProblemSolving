#include<bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
   
    int temp2= min(n1,n2);
    int temp1= max(n1,n2);
    while (true)
    {
        int t= temp1%temp2;
        if(n1%t==0 && n2%t==0)
        {
            return t;
        }
        temp1=temp2;
        temp2=t;
    }
}

int gcdpair(int *a, int s, int e)
{
    return gcd(a[s],a[e]);
}

main()
{
    int a[]= {2,8,12,24,15,18,64};
    cout<<gcdpair(a,3,6);
}