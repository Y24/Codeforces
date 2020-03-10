/* 
7
5
-1 10 -1 12 -1
5
-1 40 35 -1 35
6
-1 -1 9 -1 3 -1
2
-1 -1
2
0 -1
4
1 -1 3 -1
7
1 -1 7 5 2 -1 5
 */
#define maxTestNumber ((int)1e4 + 10)
#define maxArrayLength ((int)1e5 + 10)
#define maxN ((long)1e9 + 10)
#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
long buffer[maxArrayLength];
int arrLength;
long res[maxTestNumber][2];
int testNumber;
void solve(const int testIndex)
{
    /*  cout << "-------------" << endl;
    for (int i = 0; i < arrLength; i++)
    {
        cout << buffer[i] << " ";
    }

    cout << endl
         << "-------------" << endl; */
    long min = maxN, max = -1;
    bool isPreMissed = false;
    for (int i = 0; i < arrLength; i++)
    {

        if (buffer[i] != -1) // means is present.
        {
            if (isPreMissed)
            {
                min = std::min(min, buffer[i]);
                max = std::max(max, buffer[i]);
            }
            isPreMissed = false;
        }
        else
        {
            if (!isPreMissed && i != 0)
            {
                min = std::min(min, buffer[i-1]);
                max = std::max(max, buffer[i-1]);
            }
            isPreMissed = true;
        }
    }
    if (min == maxN && max == -1)
    {
        res[testIndex][0] = 0;
        res[testIndex][1] = 0;
    }
    else
    {
        res[testIndex][0] = (min + max) / 2;
        for (int i = 0; i < arrLength; i++)
            if (buffer[i] == -1)
                buffer[i] = res[testIndex][0];
        long abs = -1;
        for (int i = 0; i < arrLength - 1; i++)
            abs = std::max(abs, std::abs(buffer[i] - buffer[i + 1]));
        res[testIndex][1] = abs;
    }
}
int main()
{
    cin >> testNumber;
    for (int i = 0; i < testNumber; i++)
    {
        cin >> arrLength;
        for (int j = 0; j < arrLength; j++)
            cin >> buffer[j];
        solve(i);
    }
    for (int i = 0; i < testNumber; i++)
    {
        cout << res[i][1] << " " << res[i][0] << endl;
    }
    return 0;
}
