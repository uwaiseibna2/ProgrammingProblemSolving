#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main()
{
    int c, e,pos(0),neg(0),count(0),k(0);
    cin >>c;
    while (c--)
    {
       cin >>e;
       if (e>0)
       {
           pos = pos +e;
       } 
       else if(e<0)
       {
           if (pos>0)
           {
               pos--;
           }
           else
           {
               k++;
           }
       }       
       
    }
    cout<<k<<endl;
}