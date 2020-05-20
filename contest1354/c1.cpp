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
    return sin((0.5 + n / 2 - 1) * x) / sin(x / 2);
    // return sqrt((1 - cos((n - 1) * x)) / (1 - cos(x)));
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
