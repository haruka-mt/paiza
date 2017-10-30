#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    int hour;
    cin >> hour;
    if (hour > 23)
    {
        cout << hour - 24 << endl;
    }else
    {
        cout << hour << endl;
    }
    return 0;
}