#include<bits/stdc++.h>

using namespace std;

int *sort (int *a, int size)
{
    int count_0,count_1,count_2;
    count_0=0;
    count_1=0;
    count_2=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            count_0++;
        }
        else if (a[i]==1)
        {
            count_1++;
        }
        else
        {
            count_2++;
        }
    }
    for(int i=0;i<count_0;i++)
    {
        a[i]=0;
    }
    for(int i=count_0;i<count_1+count_0;i++)
    {
        a[i]=1;
    }
    for(int i= count_0+count_1; i< count_0+count_1+count_2;i++)
    {
        a[i]=2;
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
    int *ptr= sort(a,size);
    for (int i = 0; i < size; i++)
    {
        cout<<a[i];
    }
    

}