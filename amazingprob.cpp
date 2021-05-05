#include<bits/stdc++.h>
#include<iostream>
using namespace std;

main()
{
   int c,p,n,q;
   int k=0;
   cin >>c>>p;
   q=p;
   c--;
   while(c--)
   {
       cin>>n;
       if(n>p)
       {
           k++;
           p=n;
       }
       else if (n<q)
       {
           k++;
           q=n;
       }

   }
   cout<<k<<endl;
}