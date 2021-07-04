#include<bits/stdc++.h>

using namespace std;

void bubblesort(int *a,int size)
{
    for (int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if (a[i]>a[j])
            {
                int temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

main()
{
    int a[]= {4,5,2,1,3};
    int size= sizeof(a)/sizeof(a[0]);
    bubblesort(a,size);
    for(int i=0;i<size;i++)
    {
        cout<<a[i];
    }

}