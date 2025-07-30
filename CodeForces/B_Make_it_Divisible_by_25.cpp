#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve()
{
    LL n;
    cin >> n;
    string s = to_string(n);

    vector<string> endings = {"00", "25", "50", "75"};
    int final_count = INT_MAX;

    for (const string& ending : endings) {
        int pos2 = -1;

        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] == ending[1]) {
                pos2 = i;
                for (int j = i - 1; j >= 0; --j) {
                    if (s[j] == ending[0]) {
                        int removed = s.size() - j - 2;
                        final_count = min(final_count, removed);
                        break;
                    }
                }
                break;
            }
        }
    }

    if (final_count == INT_MAX)
        cout << -1 << endl; // no valid ending found
    else
        cout << final_count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
