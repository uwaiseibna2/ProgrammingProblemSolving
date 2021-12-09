#include<bits/stdc++.h>

using namespace std;

int* cyclearray(int a[], int N)
{
    int temp = a[0];
    a[0]=a[N-1];
    for(int i =1;i<N;i++)
    {
        int temp2=a[i];
        a[i]=temp;
        temp=temp2;
    }
    return a;
}

int main()
{
    int a[]= {1,3,4,5,6,7,8,9};
    int N = sizeof(a)/sizeof(a[0]);
    int* b;
    b = cyclearray(a,N);
    for(int i =0;i<N;i++)
    {
        cout<<b[i];
    }
    cout<<endl;
}