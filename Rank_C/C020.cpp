#include <iostream>

using namespace std;

int main(void)
{
    int m, p, q;
    cin >> m >> p >> q;

    double ans, loss;
    loss = m - m * p / 100.0;
    ans = loss - loss * q / 100.0;

    //cout使うと整数の場合自動で整形してくれてしまう
    printf("%f\n", ans);
    return 0;
}