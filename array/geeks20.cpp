#include<bits/stdc++.h>
using namespace std;

int largestprodsubarray(int *a, int size)
{
    int sum(1),max(-1111111);
    for (int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            if (max<sum)
            {
                max = sum;
                sum=1;
            }
            continue;
        }
        sum*=a[i];
        if (i== size-1)
        {
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    return max;
}



main()
{
    int a[]= {-2,-5,10,0,5,6,15,0,-18,-15};
    int size = sizeof(a)/sizeof(a[0]);

    cout<<largestprodsubarray(a,size);

}