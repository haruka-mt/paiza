#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n[4];
    bool bit[4] = {0, 0, 0, 0};
    for (int i = 0; i < 4; ++i)
    {
        cin >> n[i];
    }

    int maxVal = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i == j)
                continue;
            int num1 = n[i] * 10 + n[j];
            bit[i] = 1;
            bit[j] = 1;

            for (int k = 0; k < 4; ++k) {
                for (int l = 0; l < 4; ++l) {
                    if (k == l || bit[k] == 1 || bit[l] == 1)
                        continue;
                    int num2 = n[k] * 10 + n[l];
                    if (maxVal < num1 + num2)
                        maxVal = num1 + num2;
                }
            }

            bit[i] = 0;
            bit[j] = 0;
        }
    }

    cout << maxVal << endl;
    return 0;
}