#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int i;
    int pass = 0;
    for (i = 0; i < n; ++i)
    {
        char category;
        int en, ma, sc, ja, ge;
        cin >> category >> en >> ma >> sc >> ja >> ge;
        int sumScore = en + ma + sc + ja + ge;
        int partScore = 0;
        if (sumScore >= 350)
        {
            switch(category)
            {
            case 's':
                partScore = ma + sc;
                break;
            case 'l':
                partScore = ja + ge;
                break;
            }
            
            if (partScore >= 160)
            {
                pass++;
            }
        }
        //cout << i << "--" << sumScore << "," << partScore << ":" << pass << endl;
    }

    cout << pass << endl;
}