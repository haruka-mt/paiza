#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    array<int, 6> winNum;
    int myNum;

    int i, j;
    for (j = 0; j < 6; ++j)
    {
        cin >> winNum[j];
    }
    cin >> n;

    int sum;
    for (i = 0; i < n; ++i)
    {
        sum = 0;
        for (j = 0; j < 6; ++j)
        {
            cin >> myNum;
            if(find(winNum.begin(), winNum.end(), myNum) != winNum.end())
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}