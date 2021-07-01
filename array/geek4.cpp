#include<bits/stdc++.h>

using namespace std;
int *sorted(int *a,int size)
{
    int temp;
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<i;j++)
        {
            if (a[i]>a[j])
            {
                temp= a[i];
                a[i]= a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}
main()
{
    int size;
    cin>>size;
    int a[size];
    for (int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int *point = sorted(a,size);
    for (int i=0;i<size;i++)
    {
        cout<<point[i]<<endl;
    }
}

