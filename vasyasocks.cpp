#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin >> n >> m;
    long long int ans = n;
    while(true)
    {
        ans += n/m;
        n = (n/m)+(n%m);
        if(n<m) 
        {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}