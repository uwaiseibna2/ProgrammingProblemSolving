#include<bits/stdc++.h>
using namespace std;

int max(int *a,int size)
{
    int max = 0;
    for (int i =0;i<size;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int min(int*a,int size)
{
    int min = 100000;
    for (int i=0;i<size;i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
    }
    return min;
}




main()
{
    int size;
    cin>>size;
    int a[size];
    for (int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"range: "<<max(a,size)-min(a,size)<<" coefficient: "<<((float)(max(a,size)-min(a,size))/(float)(max(a,size)+min(a,size)));
}