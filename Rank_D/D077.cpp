#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    if(a * b > 9999)
    {
        cout << "NG" << endl;
    }else
    {
        cout << a*b << endl;
    }
    
    return 0;
}