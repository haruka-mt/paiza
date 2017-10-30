#include <iostream>

using namespace std;

int main(void)
{
    int n, i, sum = 0;
    for (i = 0; i < 4; ++i)
    {
        cin >> n;
        sum += n;
    }
    cout << 15 - sum << endl;
    return 0;
}