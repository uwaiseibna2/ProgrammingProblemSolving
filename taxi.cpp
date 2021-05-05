#include<bits/stdc++.h>
#include<iostream>

using namespace std;

main()

{
    int k,t, a[10000];
    int p = 0;
    int q = 0;
    int r = 0;
    int s = 0;
    cin>>k;
    for(int i=0;i<k ;i++)
    {
        cin>>a[i];
    }
    for(int j=0 ; j<k; j++)
    {
        if(a[j]==4)
        {
            p+=1;
        }
        if(a[j]==3)
        {
            q+=1;
        }
        if(a[j]==2)
        {
            r+=1;
        }
        if(a[j]==1)
        {
            s+=1;
        }
    }



 int f= p+q;
    if(q<s)
    {
        s=s-q;
    }
    else
     {
        s= 0;
     }

    int b = r/2;
    int c=r%2;
    float d= s+c*2;
    int e = ceil(d/4);

    t= f+b+e;
    cout<< t << endl;


}
