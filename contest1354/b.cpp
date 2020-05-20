#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::vector;
typedef long long ll;
const int COUNT = 3;
const int T = 20010;
const int N = 200010;
char a[N];
vector<pair<int, int>> ir;
int min[COUNT];
int mmin;
int toBeRes;
int res[T];
int t;

void preSovle()
{
    ir.clear();
    int i = 0;
    int current;
    int flag = a[0] - '0';
    int count = 1;
    do
    {
        current = a[++i];
        if (current == '\0')
        {
            ir.push_back(std::make_pair(flag, count));
            break;
        }
        current -= '0';
        if (current != flag)
        {
            ir.push_back(std::make_pair(flag, count));
            flag = current;
            count = 1;
        }
        else
        {
            count++;
        }
    } while (true);
    for (int i = 0; i < COUNT; i++)
        min[i] = N;
    std::for_each(
        ir.begin(), ir.end(), [](const pair<int, int> &p) {
            if (p.second < min[p.first - 1])
                min[p.first - 1] = p.second;
        });
    mmin = N;
    for (int i = 0; i < COUNT; i++)
        if (min[i] < mmin)
            mmin = min[i];
    toBeRes = N;
}
void solve(int index)
{
    preSovle();
    for (int i = 0; i < COUNT; i++)
        if (min[i] == N)
        {
            res[index] = 0;
            return;
        }

    for (int i = 0; i <= ir.size() - COUNT; i++)
    {
        if (ir[i].first != ir[i + 2].first)
        {
            const int count = ir[i + 1].second;
            if (ir[i + 1].second == mmin)
            {
                res[index] = 2 + count;
                return;
            }
            if (2 + count < toBeRes)
                toBeRes = 2 + count;
        }
        res[index] = toBeRes;
    }
}
int main(void)
{
    cin >> t;
    cin.get();
    for (int i = 0; i < t; i++)
    {
        cin.getline(a, N);
        solve(i);
    }
    for (int i = 0; i < t; i++)
        cout << res[i] << endl;
    return 0;
}
