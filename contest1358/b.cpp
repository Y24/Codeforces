#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
typedef long long ll;
const int T = 57179 + 10;
const ll N = 1e9 + 10;
int t;
ll x1[T];
ll y11[T];
ll x2[T];
ll y2[T];
ll ans[T];
void solve(int i)
{
    ll dx = x2[i] - x1[i];
    ll dy = y2[i] - y11[i];
    ll minXY = std::min(dx, dy);
    ans[i] = minXY * (dx + dy + 1 - 2 * minXY + minXY - 1) + 1;
}
int main(void)
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x1[i] >> y11[i] >> x2[i] >> y2[i];
    }
    for (int i = 0; i < t; i++)
        solve(i);
    for (int i = 0; i < t; i++)
        cout << ans[i] << endl;
    return 0;
}
