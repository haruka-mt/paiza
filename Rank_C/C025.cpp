#include<iostream>

using namespace std;

int main(void)
{
    int max, recieve, num;
    int i;
    cin >> max >> recieve;

    int sum = 0, ans = 0;
    int hour, min;
    int prevHour;
    for (i = 0; i < recieve; ++i)
    {
        cin >> hour >> min >> num;
        if(hour == prevHour || i == 0)
        {
            sum += num;
        }
        else
        {
            ans += sum / max;
            if(sum % max != 0)
            {
                ans += 1;
            }
            sum = num;
        }
        prevHour = hour;
    }
    ans += sum / max;
    if (sum % max != 0)
    {
        ans += 1;
    }
    sum = 0;
    cout << ans << endl;

    return 0;
}