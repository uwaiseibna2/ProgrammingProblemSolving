#include<iostream>
using namespace std;

main()
{
    string c;
    int k=0;
    cin>>c;
    for(int i=0;i<c.size();i++)
    {
        if(c[i]=='h')
        {
            for(i=i+1;i<c.size();i++)
            {
                if(c[i]=='e')
                {
                    for(i=i+1;i<c.size();i++)
                    {
                        if(c[i]=='l')
                        {
                           for(i=i+1;i<c.size();i++)
                           {
                               if(c[i]=='l')
                               {
                                   for(i=i+1;i<c.size();i++)
                                   {
                                       if(c[i]=='o')
                                       {
                                           cout<<"YES"<<endl;
                                           return 0;
                                       }

                                   }
                               }
                           }
                        }
                    }
                }
            }
        }
    }
 cout<<"NO"<<endl;
}
