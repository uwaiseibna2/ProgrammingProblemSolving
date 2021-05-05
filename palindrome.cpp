#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the palindrome: "<<endl;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i;
    }
    for (int j=0;j<n;j++)
    {
        if(j==0)
        {
            cout<<a[j]<<endl;
        }
        else
        {  
            for(int z=0;z<j+1;z++)
            {
                cout<<a[z];
                if(z==j)
                {
                    cout<< " "<<endl;
                }
            }   
        }
    }
    return 0;
}
