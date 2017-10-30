#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int r, n;
    int h, w, d;

    cin >> n >> r;

    for(int i=0; i<n; ++i)
    {
        cin >> h >> w >> d;
        if(h >= r && w >= r && d >= r)
        {
            cout << i+1 << endl;
        }
    }
    return 0;
}