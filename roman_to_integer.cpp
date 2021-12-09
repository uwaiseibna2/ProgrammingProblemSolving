#include <bits/stdc++.h>
using namespace std;

int toint(char S)
{
    if (S == 'I')
    {
        return 1;
    }
    if (S == 'V')
    {
        return 5;
    }
    if (S == 'X')
    {
        return 10;
    }
    if (S == 'L')
    {
        return 50;
    }
    if (S == 'C')
    {
        return 100;
    }
    if (S == 'D')
    {
        return 500;
    }
    if (S== 'M')
    {
        return 1000;
    }
}
int roman (string R)
{
    int len = R.size();
    int last =0;
    int num =0;
    for (int i = len-1; i>=0;i--)
    {
        int pres = toint(R[i]);
        if (pres>=last)
        {
            num+=pres;
            last = pres;
        }
        else
        {
            num-=pres;
        }

    }
    return num;
}

int main()
{
    string x;
    cin>>x;
    cout<<roman(x);
}
