#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll a, b, c, ret;
ll go(ll a, ll b)
{
    if (b == 1)
        return a % c;

    ret = go(a, b / 2);
    ret = (ret * ret) % c;
    if (b % 2)
        ret = (ret * a) % c;
    return ret;
}
int main()
{
    cin >> a >> b >> c;
    ll ret = go(a, b);
    cout << ret << '\n';
    return 0;
}