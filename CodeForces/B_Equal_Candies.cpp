#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n,0);
    LL sum = 0;
    int min = INT_MAX;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
        if(min > arr[i])
            min = arr[i];
        
        sum = sum + arr[i];
    }

    cout << (sum -(min*n)) << endl;
    return;
    
}

int main() {
    // Your code here
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    
    return 0;
}