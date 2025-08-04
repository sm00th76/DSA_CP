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

    sort(arr.begin(), arr.end());
    if(arr[0] == arr[n - 1])
    {
        cout << "-1" << endl;
        return;
    }
    else
    {
        int min = arr[0];
        int currIndex = 0;
        for (size_t i = 0; i < n; i++)
        {
            if (arr[i] == min)
            {
                cout << min << " ";
                currIndex++;
            }
            else
            {
                break;
            }
        }

        cout << endl;
        for (size_t i = currIndex; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
        
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
