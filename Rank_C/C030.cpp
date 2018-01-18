#include <iostream>

using namespace std;

int main(void)
{
    int w, h, val;
    cin >> h >> w;
    int i, j;
    for (i = 0; i < h; ++i)
    {
        for (j = 0; j < w; ++j)
        {
            cin >> val;
            if (val <= 127)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }

            if (j == w - 1)
            {
                cout << endl;
            }
            else
            {
                cout << " ";
            }
        }
    }
    return 0;
}