#include<iostream>
using namespace std;

main()
{
    string n;
    int sum=0;
    cin>>n;
    for(int i=1; i<n.size(); i++)
    {
        if(n[i]==n[i-1])
        {
            sum=sum+1;
            if(sum==6)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
            sum=0;
    }

    cout<<"NO"<<endl;



    return 0;
}
