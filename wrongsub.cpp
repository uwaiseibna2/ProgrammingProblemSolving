#include<bits/stdc++.h>
#include<iostream>

using namespace std;

main()

{
    int n,k;
    cin>>n>>k;

    for(int i=0; i<k ; i++)
    {
        int p= n%10;
        if(p == 0)
        {
            n=n/10;
        }
        else
            n=n-1;
    }
    cout<<n <<endl;
}
