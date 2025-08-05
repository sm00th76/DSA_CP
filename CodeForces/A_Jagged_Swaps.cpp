#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n,0);

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    if(arr[0] != 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
    }
    
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