#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int xc, yc, r1, r2, n;

    cin >> xc >> yc >> r1 >> r2 >> n;

    int i, x, y;
    int rr1, rr2, rr;
    for (i = 0; i < n; ++i)
    {
        cin >> x >> y;
        rr1 = pow(r1, 2);
        rr2 = pow(r2, 2);
        rr = pow(x - xc, 2) + pow(y - yc, 2);

        if(rr1 <= rr && rr <= rr2)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
        return 0;
}