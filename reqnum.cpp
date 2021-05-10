#include<bits/stdc++.h>
using namespace std;

main()
{
    int x,y,n,c;
    scanf ("%d", &c);
    while (c--)
    {    
    scanf ("%d""%d""%d", &x,&y,&n);
    for (int k= n; k >=0;k--)
    {
        if (k%x==y)
        {
            printf("%d",k);
            break;
        }
    }
    }
}