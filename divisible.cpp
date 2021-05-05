#include <iostream>
using namespace std;
int main()
{
    int n;
    int c=0;
    cin>>n;
    for (int j=0;j<n;j++)
    {
        cin>>j;
    for (int i=1;i<j;i++)
    {
        if(j%i==0)
        {
            c=c+1;
        }

    }
    if(c==3)
    {
        cout<< "YES";

    }
    else
    {
        cout<< "NO";
    }
    }
}