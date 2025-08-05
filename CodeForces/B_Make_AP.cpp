#include <iostream>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0)
    {
        cout << "YES\n";
        return;
    }

 
    if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0)
    {
        cout << "YES\n";
        return;
    }

    if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
    {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
