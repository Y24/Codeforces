#include <iostream>
#include <iomanip>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
using std::cin;
using std::cout;
using std::endl;
const int T = 210;
const int N = 210;
int a[T];
double res[T];
int t;
double solve(int n)
{
    double x = M_PI / n;
    double l = 1 / (sin(x / 2) * 2);
    double angle = M_PI * (n - 1) / n / 4;
    return sqrt(2) * l * (sin(angle) + cos(angle));
}
int main(void)
{
    cin >> t;
    for (int i = 0; i < t; i++)
        cin >> a[i];
    for (int i = 0; i < t; i++)
        res[i] = solve(a[i]);
    cout.setf(std::ios::fixed);
    for (int i = 0; i < t; i++)
        cout << std::fixed << std::setprecision(7) << res[i] << endl;
    return 0;
}
