#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int q, n, sum;
    cin >> q;
    
    for (int j = 0; j < q; ++j)
    {
        cin >> n;

        sum = 0;
        for (int i = 1; i < n; ++i)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        if (sum == n)
        {
            cout << "perfect" << endl;
        }
        else if (abs(sum - n) == 1)
        {
            cout << "nearly" << endl;
        }
        else
        {
            cout << "neither" << endl;
        }
    }

    return 0;
}