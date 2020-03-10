#define maxTestNumber 110
#define maxStrLength 110
#define trueStr "YES"
#define falseStr "NO"
#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
char buffer[maxTestNumber][3][maxStrLength];
int strLength[maxTestNumber];
bool res[maxTestNumber];
int testNumber;
void solve(const int testIndex)
{
    for (int j = 0; j < strLength[testIndex]; j++)
    {
        if (buffer[testIndex][0][j] != buffer[testIndex][2][j] && buffer[testIndex][1][j] != buffer[testIndex][2][j])
        {
            res[testIndex] = false;
            return;
        }
    }
    res[testIndex] = true;
}
int main()
{
    cin >> testNumber;
    getchar();
    for (int i = 0; i < testNumber; i++)
    {
        for (int j = 0; j < 3; j++)
            cin.getline(buffer[i][j], maxStrLength);
        strLength[i] = strlen(buffer[i][0]);
    }
    /* for (int i = 0; i < testNumber; i++)
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < strLength[i]; k++)
                cout << buffer[i][j][k];
            cout << endl;
        } */
    for (int i = 0; i < testNumber; i++)
    {
        solve(i);
    }
    for (int i = 0; i < testNumber; i++)
    {
        cout << (res[i] ? trueStr : falseStr) << endl;
    }
    return 0;
}
