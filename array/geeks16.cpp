#include<bits/stdc++.h>

using namespace std;

void threelargest(int *a, int size)
{
    int max1(0), max2(0),max3(0);
    for(int i=0;i<size;i++)
    {
        
        if (max1<a[i])
        {
            max1=a[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        
        if(max2<a[i]&& a[i]!= max1)
        {
            max2=a[i];
        }

    }
    for(int i=0;i<size;i++)
    {
        if(max3<a[i] && a[i]!= max1 && a[i]!= max2)
        {
            max3= a[i];
        }
    }
    cout<<max1<< max2<<max3;
}
main()
{
    int a[]= {1,2,3,4,5,6,7,8};
    int size= sizeof(a)/sizeof(a[0]);

    threelargest(a,size);

}