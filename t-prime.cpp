#include <iostream>
using namespace std;
int main()
{
    long int n;
    long long int p;
    long long int k=0;
    cin>>n;
    
    for (long int i=0;i<n; i++)
    {
        cin>>p;
        for (long long int j=1;j<(p+1);j++)
        {
            if(p%j==0)
            {
                k=k+1;
            }
        }
        if(k==3)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
        k=0;
    }
}