#include <iostream>

using namespace std;

int main(void)
{
    int parents[2], child[2];
    int n;

    cin >> parents[0] >> parents[1] >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> child[0] >> child[1];
        if (parents[0] < child[0])
        {
            cout << "Low" << endl;
        }
        else if (parents[0] > child[0])
        {
            cout << "High" << endl;
        }
        else
        {
            if (parents[1] > child[1])
            {
                cout << "Low" << endl;
            }
            else
            {
                cout << "High" << endl;
            }
        }
    }
    return 0;
}