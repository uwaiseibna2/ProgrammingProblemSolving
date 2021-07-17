#include<bits/stdc++.h>
using namespace std;

void checkifrotation(string s1, string s2)
{
    string temp= s1+s1;
    if(temp.find(s2)<temp.length())
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}


main()
{
    string s1= "Uwaise";
    string s2= "iseUwa";

    checkifrotation(s1,s2);
}