#include<bits/stdc++.h>
using namespace std;
main()
{
    long int a ;
    cin >>a;
    int s= abs (a)%10;
    int t = abs(a/10)%10;

    if (a>0)
    {
        cout<<a;
    }
    else 
    {
    if ((to_string(abs(a)).length()==2) && (s==0||t==0))
    {
        cout<<0;
    }
    else if ((to_string(abs(a)).length()==2) && (s!=0||t!=0))
    {
        if (s>t)
        {
            cout<< stoi(to_string(a/10));
        }
        else 
        {
            cout<< a%10;
        }
    }
    else if (s>=t)
    {
        cout <<a/10<<endl;
    }
    else if (t>s)
    {
        cout<< stoi(to_string (a/100) + to_string(s));
    }
    }
}