#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    string str;
    cin >> str;

    vector<int> num(1);
    int index = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '+')
        {
            num.resize(num.size() + 1);
            index++;
        }
        else if (str[i] == '<')
        {
            num[index] += 10;
        }
        else if (str[i] == '/')
        {
            num[index] += 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < num.size(); ++i)
    {
        ans += num[i];
    }
    cout << ans << endl;
    return 0;
}