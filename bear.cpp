#include<bits/stdc++.h>
#include<iostream>

using namespace std;
main()
{
    int a,b;
    int count=0;
    cin>>a>>b;
    for( int i=0; i<10000; i++)
    {
        a=a*3;
        b=b*2;
        count+=1;
        i++;
        if(a>b)
            break;
    }

cout<<count<<endl;

}
