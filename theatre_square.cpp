#include<iostream>
#include<math.h>

using namespace std;

main()
{
    double n,m,a;
    long long q;
    float p;

    cin>>n>>m>>a;
    if(n<=a && m<=a)
        cout<<"1";
    else if (n<a && m>a)
    {

        p= m/a;
        q= ceil(p);
        cout<< q;

    }
    else if(n>a && m>a)
    {
        if
        (n<=m)
        {
            p=n*n/a*a;
            q=ceil(p);
            cout<<q*q;
        }

        else
        {
            p=m/a;
            q=ceil(p);
            cout<< q*q;
        }
    }
    else
    {
        p= n/a;
        q=ceil(p);
        cout<<q;
    }
}

