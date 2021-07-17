#include<bits/stdc++.h>

using namespace std;

int min_in_sorted_rotated(int *a, int size)
{
    int mid = size/2;
    while (true)
    {
        
        if (a[mid-1]>a[mid])
        {
            return a[mid];
        }
        else if( a[mid]<a[size-1])
        {
            mid = (mid-1)/2;
        }
        else
        {
            mid= ((mid+1)+size)/2;
        }

    }
}

main()
{
    int a[]= {2,1};

    int size=sizeof(a)/sizeof(a[0]);

    cout<<min_in_sorted_rotated(a,size);
}