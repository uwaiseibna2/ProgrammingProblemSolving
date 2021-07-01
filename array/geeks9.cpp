#include<bits/stdc++.h>
using namespace std;

int k=0;
int l=0;
int *unio(int *a,int *b, int size1,int size2)
{
    int *uni= new int[size1+size2];
    for(int i=0;i<size1;i++)
    {
        if(a[i]==a[i+1])
        {
            continue;
        }
        uni[l]=a[i];
        l++;
    }
    int m=l;
    bool s;
    for (int i=0;i<size2;i++)
    {
        if(b[i]==b[i+1] && i!=(size2-1))
            {
                continue;
            }
        for(int j=0;j<m;j++)
        {
            
            if (b[i]==uni[j])
            {
                s=false;
            }
        }
        if (s!=false)
        {
            uni[l]=b[i];
            l++;
        }
        s=true;
        
    }
    return uni;

}
int *inters(int *a,int*b,int size1,int size2)
{
    int *unio =new int[size2];
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(a[i]==b[j])
            {
                if(b[j]==b[j+1] || a[i]==a[i+1])
                {
                    continue;
                }
                unio[k]=a[i];
                k++;
                
            }
        }
    }
    return unio;
}
main()
{
    int a[]={1, 2, 2, 3, 4, 5, 7};
    int b[]={8, 9, 5, 6, 6};
    int *uni= unio(a,b,7,5);
    int *inter= inters(a,b,7,5);
    
    for(int i=0;i<l;i++)
    {
        cout<<uni[i]<<" ";
        if (i==(l-1))
        {
            cout<<" "<<endl;
        }
    }
    for (int i=0;i<k;i++)
    {
        cout<<inter[i]<<" ";
    }
    
    delete[] uni;
    delete[] inter;
}