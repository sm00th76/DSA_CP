#include <bits/stdc++.h>
using namespace std;

#define LL long long

LL calcTotalMan(LL i, LL j, LL x1, LL y1, LL x2, LL y2)
{
    return abs(x1 - i) + abs(y1 - j) + abs(x2 - i) + abs(y2 - j);
}

void solve()
{
    LL n, m, i, j;
    cin >> n >> m >> i >> j;

    if(calcTotalMan(i, j, 1, 1, n, m) >= calcTotalMan(i, j, 1, m, n, 1))
    {
        cout << 1 << " " << 1<< " " << n << " " << m << endl;
    }
    else
    {
        cout << 1 << " " << m << " " << n << " " << 1 << endl;
    }
    return;

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