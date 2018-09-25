#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int i;
    int prices[4] = {0, 0, 0, 0};
    for (i = 0; i < n; ++i)
    {
        int variety, price;
        cin >> variety >> price;
        prices[variety] += price;
    }

    int points = 0;
    int rate[4] = {5, 3, 2, 1};
    for (i = 0; i < 4; ++i)
    {
        int pointPrice = prices[i] * 0.01;
        points += pointPrice * rate[i];
    }
    cout << points << endl;
    return 0;
}