#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve()
{
    LL n, k, x;
    cin >> n >> k >> x;

    LL min_sum = k * (k + 1) / 2;
    LL max_sum = k * (2 * n - k + 1) / 2;

    if (x >= min_sum && x <= max_sum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
