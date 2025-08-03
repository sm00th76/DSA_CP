#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve()
{
    int n, a ,b;
    cin >> n >> a >> b;

    if(n-(a+b) >= 2)
        cout << "Yes" << endl;
    else
    {
        if(a == b && b == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
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
