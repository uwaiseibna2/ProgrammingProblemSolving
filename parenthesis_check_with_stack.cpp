#include<bits/stdc++.h>
using namespace std;
stack<char> S;
bool check (string a,int n)
{
    
    for (int i=0;i<n;i++)
    {
        if (a[i]== '{' || a[i]== '[' || a[i]== '(')
        {
            S.push(a[i]);
        }
        if (S.top()== '(' && a[i]== ')')
        {
            S.pop();
        }
        if (S.top()== '{' && a[i]== '}')
        {
            S.pop();
        }
        if (S.top()== '[' && a[i]== ']')
        {
            S.pop();
        }
    }
    if (S.empty()==true)
    {
        return true;
    }
    else
    {
        return false;
    }

}

main()
{
    string str= "[{(1+)}2{}[]";
    int c= str.length();
    if (check(str,c)==true)
    {
        cout<<"TRUE";

    }
    else 
    {
        cout<<"FALSE";
    }
    
}