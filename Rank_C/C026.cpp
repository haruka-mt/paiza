#include<iostream>

using namespace std;

int main(void)
{
    int carrot = 0;
    int num, sugarSD, err;
    int mass, sugar, maxMass = 0;
    int i;

    cin >> num >> sugarSD >> err;
    int minSugar = sugarSD - err;
    int maxSugar = sugarSD + err;
    for(i = 0; i < num; ++i)
    {
        cin >> mass >> sugar;
        if(sugar >= minSugar && sugar <= maxSugar)
        {
            if(mass > maxMass)
            {
                maxMass = mass;
                carrot = i + 1;
            }
        }
    }

    if(carrot == 0)
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << carrot << endl;
    }
    return 0;
}