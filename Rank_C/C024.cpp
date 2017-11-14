#include <iostream>

using namespace std;

int main(void)
{
    int var;
    string order;
    int num;
    int a[2];

    int n;
    cin >> n;

    int i;
    for (i = 0; i < n; ++i)
    {
        cin >> order;
        if(order == "SET")
        {
            cin >> var >> num;
            a[var-1] = num;
        }
        else if(order == "ADD")
        {
            cin >> num;
            a[1] = a[0] + num;
        }else if(order == "SUB")
        {
            cin >> num;
            a[1] = a[0] - num;
        }
    }
    cout << a[0] << " " << a[1] << endl;
    return 0;
}