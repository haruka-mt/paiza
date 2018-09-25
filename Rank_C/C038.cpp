#include <iostream>

using namespace std;

int main(void)
{
    int machine, sweet;
    cin >> machine >> sweet;

    int i;
    int minSurplus, maxContainer, machineNum;
    for (i = 0; i < machine; ++i)
    {
        int container;
        cin >> container;
        int surplus = sweet % container;
        //cout << surplus << endl;

        if (i == 0 || surplus < minSurplus)
        {
            minSurplus = surplus;
            maxContainer = container;
            machineNum = i + 1;
        }
        else if (minSurplus == surplus)
        {
            if (container > maxContainer)
            {
                maxContainer = container;
                machineNum = i + 1;
            }
        }
    }
    cout << machineNum << endl;
    return 0;
}