#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 void dda(float x1,float y1, float x2, float y2)
    {
        float p=y2-y1;
        float q=x2-x1;
        float m=(p/q);
        if(m<1)
        {
            for(int i=0;i<q;i++)
            {
                cout<<"("<<x1<<","<<y1<<")"<<endl;
                x1++;
                y1+=m;
            }
        }
        if(m>1)
        {
            for(int i=0;i<p;i++)
            {
                cout<<"("<<x1<<","<<y1<<")"<<endl;
                x1+=(1/m);
                y1++;
            }
        }
          if(m==1)
        {
            for(int i=0;i<q;i++)
            {
                cout<<"("<<x1<<","<<y1<<")"<<endl;
                x1++;
                y1++;
            }
        }
    }
main()
{
   dda(2,10,12,20);
   dda(1,4,9,10);
   dda(1,4,5,12);

   return 0;

}
