#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int i;
    int strike = 0;
    int ball = 0;
    for(i = 0; i < n; ++i)
    {
        string call;
        cin >> call;
        if (call == "strike")
        {
            if(strike < 2)
            {
                cout << "strike!" << endl;
            }
            else
            {
                cout << "out!" << endl;
            }
            strike++;
        }
        else
        {
            if(ball < 3)
            {
                cout << "ball!" << endl;
            }
            else
            {
                cout << "fourball!" << endl;
            }
            ball++;
        }
    }
}