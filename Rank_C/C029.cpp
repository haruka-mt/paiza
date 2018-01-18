#include <iostream>
#include <vector>

using namespace std;

int calcAvgRain(int num, vector<int> &day, vector<int> &rain)
{
    int sum, ansDay;
    double avg, minRain;
    int i, j;
    for (i = 0; i <= day.size() - num; ++i)
    {
        sum = 0;
        for (j = 0; j < num; ++j)
        {
            sum += rain[i + j];
        }
        avg = (double)sum / num;
        if (i == 0 || minRain > avg)
        {
            minRain = avg;
            ansDay = day[i];
        }
    }
    return ansDay;
}

int main(void)
{
    int holiday, trip;
    int i;
    cin >> holiday >> trip;

    vector<int> day(holiday);
    vector<int> rain(holiday);

    int tmpDay, tmpRain;
    for (i = 0; i < holiday; ++i)
    {
        cin >> tmpDay >> tmpRain;
        day[i] = tmpDay;
        rain[i] = tmpRain;
    }

    int ans = calcAvgRain(trip, day, rain);
    cout << ans << " " << ans + trip-1 << endl;
    return 0;
}