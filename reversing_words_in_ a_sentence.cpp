#include<bits/stdc++.h>
using namespace std;



string reverse_word(string ret)
{
    stack<char> S;
    for(int i=0;i<ret.length();i++)
    {
        S.push(ret[i]);
    }
    while(!S.empty())
    {
        cout<<S.top();
        S.pop();
    }
}
main()
{
    string ret= "";
    string tot="";
    string s;
    getline(cin,s);
    reverse_word(s);
}