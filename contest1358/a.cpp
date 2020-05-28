#include <iostream>
using std::cin;
using std::cout;
using std::endl;
typedef long long ll;
const int T = 1e4 + 10;
const int N = 1e4 + 10;
const int M = 1e4 + 10;
int t;
int n[T];
int m[T];
int ans[T];
void solve(int i)
{
    int sum = n[i] * m[i];
    if (sum % 2)
        ans[i] = (sum + 1) / 2;
    else
        ans[i] = sum / 2;
}
int main(void)
{
    cin >> t;
    for (int i = 0; i < t; i++)
        cin >> n[i] >> m[i];
    for (int i = 0; i < t; i++)
        solve(i);
    for (int i = 0; i < t; i++)
        cout << ans[i] << endl;
    return 0;
}
