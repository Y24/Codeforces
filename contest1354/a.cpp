#include <iostream>
using std::cin, std::cout, std::endl;
typedef long long ll;
const int T = 1010;
ll t;
ll a[T];
ll b[T];
ll c[T];
ll d[T];
ll res[T];
ll solve(int i)
{
    ll remain = a[i] - b[i];
    if (remain <= 0)
        return b[i];
    ll each = c[i] - d[i];
    if (each <= 0)
        return -1;
    return b[i] + (remain % each ? (remain / each + 1) * c[i] : (remain / each) * c[i]);
}
int main(void)
{
    cin >> t;
    for (int i = 0; i < t; i++)
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    for (int i = 0; i < t; i++)
        res[i] = solve(i);
    for (int i = 0; i < t; i++)
        cout << res[i] << endl;
    return 0;
}
