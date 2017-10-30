#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    int len;

    cin >> str;
    len = str.length();

    while(len > 1)
    {
        if(str[0] != str[len-1])
        {
            cout << "OK" << endl;
            return 0;
        }
        len--;
    }

    cout << "NG" << endl;
    return 0;
}