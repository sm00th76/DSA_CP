#include <bits/stdc++.h>
using namespace std;

#define LL long long


void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int xorValue = 0;
    for (size_t i = 0; i < n; i++)
        {
            xorValue ^= arr[i];
        }

    if(xorValue == 0)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        if(n % 2 != 0)
        {
            cout << xorValue << endl;
            return;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
        

    
}

int main() {
    // Your code here
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
