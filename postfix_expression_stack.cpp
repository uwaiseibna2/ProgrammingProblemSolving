#include<bits/stdc++.h>

using namespace std;

main()
{
    string a= "a+b+c";
    string b = "";
    for (int i =0;i<a.length();i++)
    {
        if (a[i]!= '+')
        {
            b+=a[i];
        }
    }
    cout<<b;

}