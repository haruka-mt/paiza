#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int n, limit_speed;
    cin >> n >> limit_speed;

    vector<int> times(n);
    vector<int> speeds(n);
    for (int i = 0; i < n; ++i)
    {
        int time_, speed;
        cin >> time_ >> speed;

        times[i] = time_;
        speeds[i] = speed;

        if (i != 0)
        {
            for (int j = 0; j < i; ++j)
            {
                double average_speed = (speed - speeds[j]) / (time_ - times[j]);
                //cout << j << "," << i << ":" << average_speed << endl;
                if (average_speed > limit_speed)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
