#include<bits/stdc++.h>

using namespace std;


void subarray(int a[], int N, int S)
{
    int sum = 0;
    int i=0;
    int j(0);
    while(sum!=S)
    {
    if(sum<S)
    {
        sum+=a[i];
        i++;
    }
    if(sum>S)
    {
        sum-=a[j];
        j++;
    }
    if(i==(N-1))
    {
        cout<<"-1"<<endl;
    }
    }
    cout<<j<<" "<<i<<endl;

}

int main()
{
    int a[]= {1,3,4,4,2,5,6,2,3,5,6,2,8,5,9};
    int N = sizeof(a)/sizeof(a[0]);
    subarray(a,N,10);
}