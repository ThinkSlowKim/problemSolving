#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 1; i < 5; i++)
    {
        v.push_back(i);
        v.push_back(i);
    }

    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i : v)
        cout << i << ' ';
    cout << '\n';
    return 0;
}