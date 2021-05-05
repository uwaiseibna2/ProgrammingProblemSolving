#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int c, l,p;
    bool f=true;
    cin >>c;
    while (c--)
    {
    cin>>l;
    int a[l];
    if(l != 1)
    {
        for (int i=0 ; i<l ;i++)
        {
        cin>>a[i];

        }
       sort(a,a+l);
       for (int j =1 ; j<l ; j++)
        {
          if ((a[j]- a[j-1])> 1)
          {
            f=false;
          }
        
        }
       if(f==true)
       {
        cout<<"YES"<<endl;
       }
       else 
       {
        cout<<"NO"<<endl;
       }
    }
    else 
    {
        cin>>p;
        cout<<"YES"<<endl;
    }
    }

}