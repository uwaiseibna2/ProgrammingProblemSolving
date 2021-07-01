#include<bits/stdc++.h>

using namespace std;

int *neg(int *a, int size)
{
    int j=0;
    int temp;
    for(int i=0;i<size;i++)
    {
        if (a[i]<0)
        {
            if(i!=j)
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;   
            }
            j++;
        }
    }
    return a;
}






main()
{
    int size,temp;
    cin>>size;
    int a[size];

    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    int *ptr;
    ptr = neg(a,size);
    for(int i = 0; i<size;i++)
    {
        cout<<ptr[i];
    }

}