#include<iostream>

using namespace std;

int main(void)
{
    string Name[12] = {"January","February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int n;
    cin >> n;
    cout << Name[n - 1] << endl;
    return 0;
}