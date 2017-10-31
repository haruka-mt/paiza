#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string before = "AEGIOSZ", after = "4361052";
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
        for(int j = 0; j < 7; ++j)
        {
            if(s[i] == before[j])
            {
                s[i] = after[j];
            }
        }
    }
    cout << s << endl;
    return 0;
}