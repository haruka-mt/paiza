#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int start[2], end[2], max, min;
    vector<int> maxVec(n), minVec(n);
    int i;
    for (i = 0; i < n; ++i)
    {
        cin >> start[0] >> end[0] >> max >> min;
        if (i == 0)
        {
            start[1] = start[0];
        }
        else if (i == n - 1)
        {
            end[1] = end[0];
        }
        maxVec[i] = max;
        minVec[i] = min;
    }

    cout << start[1] << " " << end[1] << " " << *max_element(maxVec.begin(), maxVec.end()) << " " << *min_element(minVec.begin(), minVec.end()) << endl;
    return 0;
}