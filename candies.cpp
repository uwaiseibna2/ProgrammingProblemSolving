    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    int n,a,k;
    cin>>n;
    while(n--){
    	cin>>a;
    	k=3;
    while(a%k!=0){
    	k=2*k+1;
    }
    cout<<a/k<<endl;
    }
    }