#include <bits/stdc++.h>
using namespace std;
 

int denomination[]
    = { 1, 4,16,64,256 };
int n = sizeof(denomination) / sizeof(denomination[0]);
 
void findMin(int V)
{
    sort(denomination, denomination + n);
 
    // Initialize result
    vector<int> ans;
 
    // Traverse through all denomination
    for (int i = n - 1; i >= 0; i--) {
 
        // Find denominations
        while (V >= denomination[i]) {
            V -= denomination[i];
            ans.push_back(denomination[i]);
        }
    }
 
    // Print result
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
 
// Driver Code
int main()
{
    int n ;
    while(true)
    {
        cin>>n;
        if (n==-1)
        {
            break;
        }
    
    cout << "Following is minimal"
         << " number of change for " << n << ": ";
 
    // Function Call
    findMin(n);
    cout<<endl;
    }
}