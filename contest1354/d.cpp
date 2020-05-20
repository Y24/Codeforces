#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::make_pair;
using std::map;
using std::pair;
using std::set;
typedef long long ll;
const int N = 1e6 + 10;
const int Q = 1e6 + 10;
int a[N];
int k[Q];
int n, q;
map<int, int> counter;
/* struct comper
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.first < b.first;
    };
}; */
int res;
void solve()
{
    int result = 0;
    std::for_each(k, k + q, [&](const int &i) {
        if (i < 0)
            result++;
    });
    if (result >= n)
    {
        res = 0;
        return;
    }

    for (int i = 0; i < q; i++)
    {
        if (k[i] < 0)
        {
            int sum = 0;
            for (auto j = counter.begin(); j != counter.end(); j++)
            {
                if (sum < -k[i] && sum + j->second >= -k[i])
                {
                    if (j->second > 1)
                        (j->second)--;
                    else
                        counter.erase(j->first);
                    break;
                }
                else
                {
                    sum += j->second;
                }
            }
        }
        else
        {
            counter[k[i]]++;
        }
    }
    res = counter.begin()->first;
}
int main(void)
{
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        counter[a[i]]++;
    }

    for (int i = 0; i < q; i++)
        cin >> k[i];
    solve();
  /*   std::for_each(counter.begin(), counter.end(), [](const auto &i) {
        cout << i.first << ": " << i.second<<endl;
    }); */
    cout << res << endl;
    return 0;
}