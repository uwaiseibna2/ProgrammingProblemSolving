#include<bits/stdc++.h>

using namespace std;

bool rearrange(int *a, int size)
{
    int sum =0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            return true;
        }
        else 
        {
            sum+=a[i];
            if (sum==0)
            {
                return true;
            }
            
        }
    }
    return false;
    
}


main()
{
    int a[]={4, 2, -3, 1, 6};
    int size= sizeof(a)/sizeof(a[0]);
    cout<<rearrange(a,size);
    cout<<true;
}