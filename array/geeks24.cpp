#include<bits/stdc++.h>

using namespace std;

bool palincheck(string str)
{
    stack<char> s;

    for(int i=0;i<str.length();i++)
    {
        if(s.empty()|| s.top()!=str[i])
        {
            s.push(str[i]);
        }
        else
        {
            s.pop();
        }
    }
    if (s.size()==0)
    {
        cout<<"True";
    }
    else
    cout<<"False";
}
main()
{
    string s= "abccba";
    bool t= palincheck(s);

}