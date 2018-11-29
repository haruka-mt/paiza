#include <iostream>

using namespace std;

int main(void)
{
    int count = 0;
    int prev = 1;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        count += abs(tmp - prev);
        prev = tmp;
    }
    cout << count << endl;
    return 0;
}