#include <bits/stdc++.h>
using namespace std;
bool palindrome (long x)
{
    long xc= x;
    long rem(0);
    long rev(0);
    while (xc>0)
    {
        rem= xc%10;
        rev = rev*10+rem;
        xc/=10;
    }
    if (rev != x || x<0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    long x;
    cin>>x;
    cout<<palindrome(x);
}