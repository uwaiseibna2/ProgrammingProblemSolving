#include<bits/stdc++.h>
using namespace std;
int partition(int *a, int low,int high)
{
    int pivot= a[low];
    int start = low;
    low++;
    while(low<=high)
    {
        if (a[low]>pivot)
        {

            if(a[high]<pivot)
            {
                int temp = a[low];
                a[low]=a[high];
                a[high]=temp;
                low++;
                high--;                
            }
            else
            {
                high --;
            }
        }
        else 
        {
            low++;
            if(a[high]>pivot)
            {
                high --;
            }

        }
    }
    a[start]= a[low-1];
    a[low-1]=pivot;
    return low-1;
}
void quicksort(int*a,int low, int high)
{
    if(low<=high)
    {
    int div= partition(a,low, high);
    cout<<a[0]<< " "<< a[1]<<" "<< a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<" "<<a[6]<<" "<<a[7]<<" "<<a[8]<<" "<<a[9]<<" "<<a[10]<<endl;
    quicksort(a,low,div-1);
    quicksort(a,div+1,high);
    }
}
main()
{
    int a[] = {5,2,1,3,4,7,86,97,12,6,100};
    int size = sizeof(a)/sizeof(a[0]);
    quicksort(a,0,size-1);
}