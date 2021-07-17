#include<bits/stdc++.h>

using namespace std;

int consec_ints(int *a, int size)
{
    unordered_set <int> S;
    int ans=0;
    for (int i =0;i<size;i++)
    {
        S.insert(a[i]);
    }

    for(int i =0;i<size;i++)
    {
        if (S.find(a[i]-1) == S.end())
        {
            int k = a[i];

            while (S.find(k)!= S.end())
            {
                k++;
            }
            ans= max(ans, k-a[i]);
        }
    }
    return ans;
}




main()
{
    int a[]= {1, 9, 3, 10, 4, 20, 2};
    int size = sizeof(a)/sizeof(a[0]);

    cout<<consec_ints(a,size);
}