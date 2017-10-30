#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int score, threshold;
    int sum = 0;
    
    for(int i = 0 ; i < 7; ++i)
    {
        cin >> score;
        sum += score;
    }

    cin >> threshold;

    if(sum / 7.0 >= threshold)
    {
        cout << "pass" << endl;
    }else
    {
        cout << "failure" << endl;
    }
    
    return 0;
}