#include <iostream>
using namespace std;
#include <algorithm>
 
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toasts = min(k*l/nl , min(c*d , p/np))/n;
    cout<<toasts;
}