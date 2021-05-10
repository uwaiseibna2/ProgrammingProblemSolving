#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int c,n,s1(0),s2(0),s3(0);
    int a[5000], b[5000],d[5000];
    cin>>c;
    for (int i=1;i<c+1;i++)
    {
        cin >>n;
        if (n ==1)
        {
            a[s1]= i;
            s1++;
        }
        if (n == 2)
        {
            b[s2]= i;
            s2++;
        }
        if (n ==3)
        {
            d[s3] =i;
            s3++;
        }
    }
    int j = min (s1,min(s3,s2));
    cout<< j<<endl;
    for (int i =0; i<j;i++)
    {
        cout<<a[i]<<" "<< b[i]<< " "<< d[i] << endl;
    }
}
