#include <bits/stdc++.h>
using namespace std;

#define LL long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i=0; i<=n-1;i++)
        cin >> arr[i];
    
    LL alice = 0, bob = 0;
    
    sort(arr.begin(), arr.end(), greater<int>());

    for(int i=0; i<n;i++)
    {
        if(i%2 ==0)
        {
            if(arr[i] % 2 == 0)
                alice += arr[i];
            else
                alice = alice;
        }
        else
        {
            if(arr[i] % 2 != 0)
                bob += arr[i];
            else
                bob = bob;
        }
    }

    if(alice > bob)
        cout << "Alice" << endl;
    else if(bob > alice)
        cout << "Bob" << endl;
    else
        cout << "Tie" << endl;
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