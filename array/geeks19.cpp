#include<bits/stdc++.h>
using namespace std;
int sumoflargestcontigsubarray(int *a, int size)
{
    int sum=0;
    int max_sum=-1;

    for(int i=0;i<size;i++)
    {
        sum+=a[i];
        if (sum<0)
        {
            sum =0;
        }
        if(sum>max_sum)
        {
            max_sum=sum;
        }
    }

    return max_sum;
}

main()
{
    int a[]={-2,-3,4,-1,-2,1,5};
    int size= sizeof(a)/sizeof(a[0]);

    cout<<sumoflargestcontigsubarray(a,size);
}