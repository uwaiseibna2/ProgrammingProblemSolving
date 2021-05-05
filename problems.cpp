#include<bits/stdc++.h>
#include<iostream>

using namespace std;

main()
{
    int n, t;
    int tot = 0;
    int count = 0;
    cin >>n>>t;
    int r=240-t;
    for (int i=1;i<n+1 ; i++ )
    {
        tot=tot +i*5;
        if (tot<=r)
        {
            count = count +1;
        }
    }
    cout<< count<< endl;
}