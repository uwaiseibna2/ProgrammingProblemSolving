#include<bits/stdc++.h>
using namespace std;


int first_repeat(int *a, int size)
{
    for(int i =0;i<=size;i++)
    {
        int b= a[i]%size;
        a[b]+= size;
    }
    for(int i=0;i<size;i++)
    {
        if (a[i]>=size*2)
        {
            continue;
        }
        else
        {
            return a[i]-size;
        }
    }
}
main()
{
    int a[] = {1,2,3,2,3,5,6,7};
    int size = sizeof(a)/sizeof(a[0]);
    int c= first_repeat(a,size-1);
    cout<<c;

}