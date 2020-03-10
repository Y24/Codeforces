/* 
5
3 1
3 2
3 3 
4 0
5 2
 */
#define maxTestNumber ((int)1e5 + 10)
#define maxN ((long)1e9 + 10)
#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
long buffer[maxTestNumber][2];
long res[maxTestNumber];
int testNumber;
long solve(long n, long m)
{
    // special case.
    if (m == 0)
        return 0;
    if (m == n)
        return (n + 1) * n / 2;
    long zeroNumber = n - m;
    long slotNumber = m + 1;
    long slotSize = zeroNumber / slotNumber;
    long remainder = zeroNumber % slotNumber;
    return (n + 1) * n / 2                                            // the whole number
           - (slotSize + 1) * slotSize / 2 * (slotNumber - remainder) //case 0
           - (slotSize + 2) * (slotSize + 1) / 2 * remainder          //case 1
        ;
}
int main()
{
    cin >> testNumber;
    for (int i = 0; i < testNumber; i++)
    {
        cin >> buffer[i][0] >> buffer[i][1];
    }
    for (int i = 0; i < testNumber; i++)
    {
        res[i] = solve(buffer[i][0], buffer[i][1]);
    }
    for (int i = 0; i < testNumber; i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}
