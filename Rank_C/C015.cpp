#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    string c_date;
    int i_date, price, point = 0;
    bool pointCount;
    for (int i = 0; i < n; ++i)
    {
        cin >> i_date >> price;
        c_date = to_string(i_date);
        pointCount = false;
        for (int j = 0; j < c_date.size(); ++j)
        {
            if (c_date[j] == '3')
            {
                point += price * 0.03;
                pointCount = true;
            }
            else if (c_date[j] == '5')
            {
                point += price * 0.05;
                pointCount = true;
            }
        }
        if (pointCount == false)
        {
            point += price * 0.01;
        }
    }

    cout << point << endl;
    return 0;
}