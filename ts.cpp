#include<iostream>
#include<math.h>

using namespace std;
main()

{
    double n,m,a;
    long long p,q;
    cin>>n>>m>>a;
    p= ceil(n/a);
    q= ceil(m/a);
    cout<< p*q;
    return 0;
}
