#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[5][5],p,q;
    int b=1;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(a[i][j]==b)
            {
                p=abs(i-2);
                q=abs(j-2);
            }
        }

    }
    cout<<p+q<<endl;


    return 0;
}
