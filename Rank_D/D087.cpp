#include<iostream>

using namespace std;

int main(void)
{
    int n, i;
    string tmp, str = "";

    cin >> n;

    for(i = 0; i < n; ++i)
    {
        cin >> tmp;
        str += tmp;
    }

    cout << str << endl;

    return 0;
}