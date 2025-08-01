#include <bits/stdc++.h>
using namespace std;

#define LL long long

// int findgcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return findgcd(b, a % b);
// }
/*
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
    bool flag = true;
    for (size_t i = 1; i <= n - 1; i++)
    {
        if (__gcd(arr[0], arr[i]) > i+1)
        {
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return;

}

*/
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];

    }
    bool flag = false;
    for(int i=0; i<= n-2;i++)
    {
        for(int j=i+1;j<= n-1; j++)
        {
            if(__gcd(arr[i],arr[j]) <= 2)
            {
                flag = true;
                break;
            }
        }
    }

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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