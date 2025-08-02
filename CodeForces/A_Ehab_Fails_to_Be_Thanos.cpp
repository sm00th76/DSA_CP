#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <set>

void solve(vector <int> &vec, set <int> &set)
{
    if(set.size() == 1)
    {
        cout<<"-1";
        return;
    }

    sort(vec.begin(),vec.end());

    
    for(int i = 0; i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
}

int main()
{
    vector <int> vec;
    set <int> set;
    int size;
    cin>>size;
    int limit = size*2;
    while(limit--)
    {
        int in;
        cin>>in;
        vec.push_back(in);
        set.insert(in);
    }
    solve(vec,set);
}