#include <bits/stdc++.h>
using namespace std;
  
// Function that count the
// total numbersProgram between L
// and R which have all the
// digit same
int count_same_digit(int L, int R)
{
    int tmp = 0, ans = 0;
  
    // length of R
    int n = log10(R) + 1;
  
    for (int i = 0; i < n; i++) {
  
        // tmp has all digits as 1
        tmp = tmp * 10 + 1;
  
        // For each multiple
        // of tmp in range 1 to 9,
        // check if it present
        // in range [L, R]
        for (int j = 1; j <= 9; j++) {
  
            if (L <= (tmp * j)
                && (tmp * j) <= R) {
  
                // Increment the required count
                ans++;
            }
        }
    }
    return ans;
}
  
// Driver Program
int main()
{
    int L,R;
    cin>>L>>R;
  
    cout << count_same_digit(L, R)
         << endl;
    return 0;
}