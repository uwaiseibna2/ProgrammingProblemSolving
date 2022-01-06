#include<bits/stdc++.h>

using namespace std;

void sla(int a[])
{
    int max=a[0];
    int min= a[0];
    int sum=0;
    for (int i=0;i<8;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
        sum+=a[i];
        
    }
    cout<<max<<'\t'<<min<<'\t'<<sum/8;
}
int main()
{
    int a[] = {1,3,4,2,4,2,53,10};
    sla(a);
}