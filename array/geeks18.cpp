#include<bits/stdc++.h>

using namespace std;

bool zerosubarray(int *a, int size)
{
    int sum =0;
    unordered_set<int> check;
    for (int i=0;i<size;i++)
    {
        sum+=a[i];
        if(sum==0 || check.find(sum) != check.end())
        {
            return true;
        }
        check.insert(sum);
    }
    return false;

}


main()
{
    int a[]= {1, 4, -2, -2, 5, -4, 3};
    int size= sizeof(a)/sizeof(a[0]);

    cout<<zerosubarray(a,size);

}